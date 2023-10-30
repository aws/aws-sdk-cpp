/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Extra details specific to a deprecation type notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DeprecationRequestDetails">AWS
   * API Reference</a></p>
   */
  class DeprecationRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API DeprecationRequestDetails();
    AWS_DATAEXCHANGE_API DeprecationRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API DeprecationRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A datetime in the future when the data set will be deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationAt() const{ return m_deprecationAt; }

    /**
     * <p>A datetime in the future when the data set will be deprecated.</p>
     */
    inline bool DeprecationAtHasBeenSet() const { return m_deprecationAtHasBeenSet; }

    /**
     * <p>A datetime in the future when the data set will be deprecated.</p>
     */
    inline void SetDeprecationAt(const Aws::Utils::DateTime& value) { m_deprecationAtHasBeenSet = true; m_deprecationAt = value; }

    /**
     * <p>A datetime in the future when the data set will be deprecated.</p>
     */
    inline void SetDeprecationAt(Aws::Utils::DateTime&& value) { m_deprecationAtHasBeenSet = true; m_deprecationAt = std::move(value); }

    /**
     * <p>A datetime in the future when the data set will be deprecated.</p>
     */
    inline DeprecationRequestDetails& WithDeprecationAt(const Aws::Utils::DateTime& value) { SetDeprecationAt(value); return *this;}

    /**
     * <p>A datetime in the future when the data set will be deprecated.</p>
     */
    inline DeprecationRequestDetails& WithDeprecationAt(Aws::Utils::DateTime&& value) { SetDeprecationAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_deprecationAt;
    bool m_deprecationAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
