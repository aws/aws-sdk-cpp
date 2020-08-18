/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressionListDestination.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains details about the resource destination the import job
   * is going to target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ImportDestination">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API ImportDestination
  {
  public:
    ImportDestination();
    ImportDestination(Aws::Utils::Json::JsonView jsonValue);
    ImportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains the action of the import job towards suppression
     * list.</p>
     */
    inline const SuppressionListDestination& GetSuppressionListDestination() const{ return m_suppressionListDestination; }

    /**
     * <p>An object that contains the action of the import job towards suppression
     * list.</p>
     */
    inline bool SuppressionListDestinationHasBeenSet() const { return m_suppressionListDestinationHasBeenSet; }

    /**
     * <p>An object that contains the action of the import job towards suppression
     * list.</p>
     */
    inline void SetSuppressionListDestination(const SuppressionListDestination& value) { m_suppressionListDestinationHasBeenSet = true; m_suppressionListDestination = value; }

    /**
     * <p>An object that contains the action of the import job towards suppression
     * list.</p>
     */
    inline void SetSuppressionListDestination(SuppressionListDestination&& value) { m_suppressionListDestinationHasBeenSet = true; m_suppressionListDestination = std::move(value); }

    /**
     * <p>An object that contains the action of the import job towards suppression
     * list.</p>
     */
    inline ImportDestination& WithSuppressionListDestination(const SuppressionListDestination& value) { SetSuppressionListDestination(value); return *this;}

    /**
     * <p>An object that contains the action of the import job towards suppression
     * list.</p>
     */
    inline ImportDestination& WithSuppressionListDestination(SuppressionListDestination&& value) { SetSuppressionListDestination(std::move(value)); return *this;}

  private:

    SuppressionListDestination m_suppressionListDestination;
    bool m_suppressionListDestinationHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
