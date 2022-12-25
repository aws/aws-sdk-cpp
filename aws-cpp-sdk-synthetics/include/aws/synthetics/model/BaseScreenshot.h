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

  /**
   * <p>A structure representing a screenshot that is used as a baseline during
   * visual monitoring comparisons made by the canary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/BaseScreenshot">AWS
   * API Reference</a></p>
   */
  class BaseScreenshot
  {
  public:
    AWS_SYNTHETICS_API BaseScreenshot();
    AWS_SYNTHETICS_API BaseScreenshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API BaseScreenshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline const Aws::String& GetScreenshotName() const{ return m_screenshotName; }

    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline bool ScreenshotNameHasBeenSet() const { return m_screenshotNameHasBeenSet; }

    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline void SetScreenshotName(const Aws::String& value) { m_screenshotNameHasBeenSet = true; m_screenshotName = value; }

    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline void SetScreenshotName(Aws::String&& value) { m_screenshotNameHasBeenSet = true; m_screenshotName = std::move(value); }

    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline void SetScreenshotName(const char* value) { m_screenshotNameHasBeenSet = true; m_screenshotName.assign(value); }

    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline BaseScreenshot& WithScreenshotName(const Aws::String& value) { SetScreenshotName(value); return *this;}

    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline BaseScreenshot& WithScreenshotName(Aws::String&& value) { SetScreenshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the screenshot. This is generated the first time the canary is
     * run after the <code>UpdateCanary</code> operation that specified for this canary
     * to perform visual monitoring.</p>
     */
    inline BaseScreenshot& WithScreenshotName(const char* value) { SetScreenshotName(value); return *this;}


    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline const Aws::Vector<Aws::String>& GetIgnoreCoordinates() const{ return m_ignoreCoordinates; }

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline bool IgnoreCoordinatesHasBeenSet() const { return m_ignoreCoordinatesHasBeenSet; }

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline void SetIgnoreCoordinates(const Aws::Vector<Aws::String>& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates = value; }

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline void SetIgnoreCoordinates(Aws::Vector<Aws::String>&& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates = std::move(value); }

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline BaseScreenshot& WithIgnoreCoordinates(const Aws::Vector<Aws::String>& value) { SetIgnoreCoordinates(value); return *this;}

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline BaseScreenshot& WithIgnoreCoordinates(Aws::Vector<Aws::String>&& value) { SetIgnoreCoordinates(std::move(value)); return *this;}

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline BaseScreenshot& AddIgnoreCoordinates(const Aws::String& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates.push_back(value); return *this; }

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline BaseScreenshot& AddIgnoreCoordinates(Aws::String&& value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates.push_back(std::move(value)); return *this; }

    /**
     * <p>Coordinates that define the part of a screen to ignore during screenshot
     * comparisons. To obtain the coordinates to use here, use the CloudWatch console
     * to draw the boundaries on the screen. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/synthetics_canaries_deletion.html">
     * Editing or deleting a canary</a> </p>
     */
    inline BaseScreenshot& AddIgnoreCoordinates(const char* value) { m_ignoreCoordinatesHasBeenSet = true; m_ignoreCoordinates.push_back(value); return *this; }

  private:

    Aws::String m_screenshotName;
    bool m_screenshotNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ignoreCoordinates;
    bool m_ignoreCoordinatesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
