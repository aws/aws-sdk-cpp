/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the screen resolution of a device in height and width, expressed
   * in pixels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Resolution">AWS
   * API Reference</a></p>
   */
  class Resolution
  {
  public:
    AWS_DEVICEFARM_API Resolution() = default;
    AWS_DEVICEFARM_API Resolution(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Resolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The screen resolution's width, expressed in pixels.</p>
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline Resolution& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen resolution's height, expressed in pixels.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline Resolution& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}
  private:

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
