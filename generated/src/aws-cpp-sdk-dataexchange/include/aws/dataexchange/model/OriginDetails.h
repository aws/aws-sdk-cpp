/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details about the origin of the data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/OriginDetails">AWS
   * API Reference</a></p>
   */
  class OriginDetails
  {
  public:
    AWS_DATAEXCHANGE_API OriginDetails();
    AWS_DATAEXCHANGE_API OriginDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API OriginDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline OriginDetails& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline OriginDetails& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline OriginDetails& WithProductId(const char* value) { SetProductId(value); return *this;}

  private:

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
