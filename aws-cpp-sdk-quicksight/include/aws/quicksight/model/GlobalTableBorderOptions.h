/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableBorderOptions.h>
#include <aws/quicksight/model/TableSideBorderOptions.h>
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
   * <p>Determines the border options for a table visual.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GlobalTableBorderOptions">AWS
   * API Reference</a></p>
   */
  class GlobalTableBorderOptions
  {
  public:
    AWS_QUICKSIGHT_API GlobalTableBorderOptions();
    AWS_QUICKSIGHT_API GlobalTableBorderOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GlobalTableBorderOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the options for uniform border.</p>
     */
    inline const TableBorderOptions& GetUniformBorder() const{ return m_uniformBorder; }

    /**
     * <p>Determines the options for uniform border.</p>
     */
    inline bool UniformBorderHasBeenSet() const { return m_uniformBorderHasBeenSet; }

    /**
     * <p>Determines the options for uniform border.</p>
     */
    inline void SetUniformBorder(const TableBorderOptions& value) { m_uniformBorderHasBeenSet = true; m_uniformBorder = value; }

    /**
     * <p>Determines the options for uniform border.</p>
     */
    inline void SetUniformBorder(TableBorderOptions&& value) { m_uniformBorderHasBeenSet = true; m_uniformBorder = std::move(value); }

    /**
     * <p>Determines the options for uniform border.</p>
     */
    inline GlobalTableBorderOptions& WithUniformBorder(const TableBorderOptions& value) { SetUniformBorder(value); return *this;}

    /**
     * <p>Determines the options for uniform border.</p>
     */
    inline GlobalTableBorderOptions& WithUniformBorder(TableBorderOptions&& value) { SetUniformBorder(std::move(value)); return *this;}


    /**
     * <p>Determines the options for side specific border.</p>
     */
    inline const TableSideBorderOptions& GetSideSpecificBorder() const{ return m_sideSpecificBorder; }

    /**
     * <p>Determines the options for side specific border.</p>
     */
    inline bool SideSpecificBorderHasBeenSet() const { return m_sideSpecificBorderHasBeenSet; }

    /**
     * <p>Determines the options for side specific border.</p>
     */
    inline void SetSideSpecificBorder(const TableSideBorderOptions& value) { m_sideSpecificBorderHasBeenSet = true; m_sideSpecificBorder = value; }

    /**
     * <p>Determines the options for side specific border.</p>
     */
    inline void SetSideSpecificBorder(TableSideBorderOptions&& value) { m_sideSpecificBorderHasBeenSet = true; m_sideSpecificBorder = std::move(value); }

    /**
     * <p>Determines the options for side specific border.</p>
     */
    inline GlobalTableBorderOptions& WithSideSpecificBorder(const TableSideBorderOptions& value) { SetSideSpecificBorder(value); return *this;}

    /**
     * <p>Determines the options for side specific border.</p>
     */
    inline GlobalTableBorderOptions& WithSideSpecificBorder(TableSideBorderOptions&& value) { SetSideSpecificBorder(std::move(value)); return *this;}

  private:

    TableBorderOptions m_uniformBorder;
    bool m_uniformBorderHasBeenSet = false;

    TableSideBorderOptions m_sideSpecificBorder;
    bool m_sideSpecificBorderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
