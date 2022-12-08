/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SameSheetTargetVisualConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of target visuals that you want to be filtered.</p> <p>This
   * is a union type structure. For this structure to be valid, only one of the
   * attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterOperationTargetVisualsConfiguration">AWS
   * API Reference</a></p>
   */
  class FilterOperationTargetVisualsConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FilterOperationTargetVisualsConfiguration();
    AWS_QUICKSIGHT_API FilterOperationTargetVisualsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterOperationTargetVisualsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of the same-sheet target visuals that you want to be
     * filtered.</p>
     */
    inline const SameSheetTargetVisualConfiguration& GetSameSheetTargetVisualConfiguration() const{ return m_sameSheetTargetVisualConfiguration; }

    /**
     * <p>The configuration of the same-sheet target visuals that you want to be
     * filtered.</p>
     */
    inline bool SameSheetTargetVisualConfigurationHasBeenSet() const { return m_sameSheetTargetVisualConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the same-sheet target visuals that you want to be
     * filtered.</p>
     */
    inline void SetSameSheetTargetVisualConfiguration(const SameSheetTargetVisualConfiguration& value) { m_sameSheetTargetVisualConfigurationHasBeenSet = true; m_sameSheetTargetVisualConfiguration = value; }

    /**
     * <p>The configuration of the same-sheet target visuals that you want to be
     * filtered.</p>
     */
    inline void SetSameSheetTargetVisualConfiguration(SameSheetTargetVisualConfiguration&& value) { m_sameSheetTargetVisualConfigurationHasBeenSet = true; m_sameSheetTargetVisualConfiguration = std::move(value); }

    /**
     * <p>The configuration of the same-sheet target visuals that you want to be
     * filtered.</p>
     */
    inline FilterOperationTargetVisualsConfiguration& WithSameSheetTargetVisualConfiguration(const SameSheetTargetVisualConfiguration& value) { SetSameSheetTargetVisualConfiguration(value); return *this;}

    /**
     * <p>The configuration of the same-sheet target visuals that you want to be
     * filtered.</p>
     */
    inline FilterOperationTargetVisualsConfiguration& WithSameSheetTargetVisualConfiguration(SameSheetTargetVisualConfiguration&& value) { SetSameSheetTargetVisualConfiguration(std::move(value)); return *this;}

  private:

    SameSheetTargetVisualConfiguration m_sameSheetTargetVisualConfiguration;
    bool m_sameSheetTargetVisualConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
