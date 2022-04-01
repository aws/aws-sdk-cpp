﻿/**
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
  class AWS_DEVICEFARM_API Resolution
  {
  public:
    Resolution();
    Resolution(Aws::Utils::Json::JsonView jsonValue);
    Resolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The screen resolution's width, expressed in pixels.</p>
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * <p>The screen resolution's width, expressed in pixels.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>The screen resolution's width, expressed in pixels.</p>
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>The screen resolution's width, expressed in pixels.</p>
     */
    inline Resolution& WithWidth(int value) { SetWidth(value); return *this;}


    /**
     * <p>The screen resolution's height, expressed in pixels.</p>
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * <p>The screen resolution's height, expressed in pixels.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>The screen resolution's height, expressed in pixels.</p>
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>The screen resolution's height, expressed in pixels.</p>
     */
    inline Resolution& WithHeight(int value) { SetHeight(value); return *this;}

  private:

    int m_width;
    bool m_widthHasBeenSet;

    int m_height;
    bool m_heightHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
