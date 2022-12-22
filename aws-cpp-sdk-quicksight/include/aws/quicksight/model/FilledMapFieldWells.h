/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilledMapAggregatedFieldWells.h>
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
   * <p>The field wells of a <code>FilledMapVisual</code>.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapFieldWells">AWS
   * API Reference</a></p>
   */
  class FilledMapFieldWells
  {
  public:
    AWS_QUICKSIGHT_API FilledMapFieldWells();
    AWS_QUICKSIGHT_API FilledMapFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field well of the filled map.</p>
     */
    inline const FilledMapAggregatedFieldWells& GetFilledMapAggregatedFieldWells() const{ return m_filledMapAggregatedFieldWells; }

    /**
     * <p>The aggregated field well of the filled map.</p>
     */
    inline bool FilledMapAggregatedFieldWellsHasBeenSet() const { return m_filledMapAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field well of the filled map.</p>
     */
    inline void SetFilledMapAggregatedFieldWells(const FilledMapAggregatedFieldWells& value) { m_filledMapAggregatedFieldWellsHasBeenSet = true; m_filledMapAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field well of the filled map.</p>
     */
    inline void SetFilledMapAggregatedFieldWells(FilledMapAggregatedFieldWells&& value) { m_filledMapAggregatedFieldWellsHasBeenSet = true; m_filledMapAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field well of the filled map.</p>
     */
    inline FilledMapFieldWells& WithFilledMapAggregatedFieldWells(const FilledMapAggregatedFieldWells& value) { SetFilledMapAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field well of the filled map.</p>
     */
    inline FilledMapFieldWells& WithFilledMapAggregatedFieldWells(FilledMapAggregatedFieldWells&& value) { SetFilledMapAggregatedFieldWells(std::move(value)); return *this;}

  private:

    FilledMapAggregatedFieldWells m_filledMapAggregatedFieldWells;
    bool m_filledMapAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
