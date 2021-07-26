/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Synthetics
{
namespace Model
{

  class AWS_SYNTHETICS_API BaseScreenshot
  {
  public:
    BaseScreenshot();
    BaseScreenshot(Aws::Utils::Json::JsonView jsonValue);
    BaseScreenshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetScreenshotName() const{ return m_screenshotName; }

    
    inline bool ScreenshotNameHasBeenSet() const { return m_screenshotNameHasBeenSet; }

    
    inline void SetScreenshotName(const Aws::String& value) { m_screenshotNameHasBeenSet = true; m_screenshotName = value; }

    
    inline void SetScreenshotName(Aws::String&& value) { m_screenshotNameHasBeenSet = true; m_screenshotName = std::move(value); }

    
    inline void SetScreenshotName(const char* value) { m_screenshotNameHasBeenSet = true; m_screenshotName.assign(value); }

    
    inline BaseScreenshot& WithScreenshotName(const Aws::String& value) { SetScreenshotName(value); return *this;}

    
    inline BaseScreenshot& WithScreenshotName(Aws::String&& value) { SetScreenshotName(std::move(value)); return *this;}

    
    inline BaseScreenshot& WithScreenshotName(const char* value) { SetScreenshotName(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetIgnoreCoordinates() const{ return m_ignoreCoordinates; }

    
    inline bool IgnoreCoordinatesHasBeenSet() const { return m_ignoreCoordinatesHasBeenSet; }

    
    inline void SetIgnoreCoordinates(const Aws::Vector<Aws::String>& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates = value; }

    
    inline void SetIgnoreCoordinates(Aws::Vector<Aws::String>&& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates = std::move(value); }

    
    inline BaseScreenshot& WithIgnoreCoordinates(const Aws::Vector<Aws::String>& value) { SetIgnoreCoordinates(value); return *this;}

    
    inline BaseScreenshot& WithIgnoreCoordinates(Aws::Vector<Aws::String>&& value) { SetIgnoreCoordinates(std::move(value)); return *this;}

    
    inline BaseScreenshot& AddIgnoreCoordinates(const Aws::String& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates.push_back(value); return *this; }

    
    inline BaseScreenshot& AddIgnoreCoordinates(Aws::String&& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates.push_back(std::move(value)); return *this; }

    
    inline BaseScreenshot& AddIgnoreCoordinates(const char* value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates.push_back(value); return *this; }

  private:

    Aws::String m_screenshotName;
    bool m_screenshotNameHasBeenSet;

    Aws::Vector<Aws::String> m_ignoreCoordinates;
    bool m_ignoreCoordinatesHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
