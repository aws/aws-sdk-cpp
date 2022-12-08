/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The display options for gutter spacing between tiles on a
   * sheet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GutterStyle">AWS
   * API Reference</a></p>
   */
  class GutterStyle
  {
  public:
    AWS_QUICKSIGHT_API GutterStyle();
    AWS_QUICKSIGHT_API GutterStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GutterStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This Boolean value controls whether to display a gutter space between sheet
     * tiles. </p>
     */
    inline bool GetShow() const{ return m_show; }

    /**
     * <p>This Boolean value controls whether to display a gutter space between sheet
     * tiles. </p>
     */
    inline bool ShowHasBeenSet() const { return m_showHasBeenSet; }

    /**
     * <p>This Boolean value controls whether to display a gutter space between sheet
     * tiles. </p>
     */
    inline void SetShow(bool value) { m_showHasBeenSet = true; m_show = value; }

    /**
     * <p>This Boolean value controls whether to display a gutter space between sheet
     * tiles. </p>
     */
    inline GutterStyle& WithShow(bool value) { SetShow(value); return *this;}

  private:

    bool m_show;
    bool m_showHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
