/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/BaseScreenshot.h>
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
   * <p>An object that specifies what screenshots to use as a baseline for visual
   * monitoring by this canary. It can optionally also specify parts of the
   * screenshots to ignore during the visual monitoring comparison.</p> <p>Visual
   * monitoring is supported only on canaries running the
   * <b>syn-puppeteer-node-3.2</b> runtime or later. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Library_SyntheticsLogger_VisualTesting.html">
   * Visual monitoring</a> and <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Blueprints_VisualTesting.html">
   * Visual monitoring blueprint</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/VisualReferenceInput">AWS
   * API Reference</a></p>
   */
  class VisualReferenceInput
  {
  public:
    AWS_SYNTHETICS_API VisualReferenceInput();
    AWS_SYNTHETICS_API VisualReferenceInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API VisualReferenceInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline const Aws::Vector<BaseScreenshot>& GetBaseScreenshots() const{ return m_baseScreenshots; }

    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline bool BaseScreenshotsHasBeenSet() const { return m_baseScreenshotsHasBeenSet; }

    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline void SetBaseScreenshots(const Aws::Vector<BaseScreenshot>& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots = value; }

    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline void SetBaseScreenshots(Aws::Vector<BaseScreenshot>&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots = std::move(value); }

    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline VisualReferenceInput& WithBaseScreenshots(const Aws::Vector<BaseScreenshot>& value) { SetBaseScreenshots(value); return *this;}

    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline VisualReferenceInput& WithBaseScreenshots(Aws::Vector<BaseScreenshot>&& value) { SetBaseScreenshots(std::move(value)); return *this;}

    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline VisualReferenceInput& AddBaseScreenshots(const BaseScreenshot& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots.push_back(value); return *this; }

    /**
     * <p>An array of screenshots that will be used as the baseline for visual
     * monitoring in future runs of this canary. If there is a screenshot that you
     * don't want to be used for visual monitoring, remove it from this array.</p>
     */
    inline VisualReferenceInput& AddBaseScreenshots(BaseScreenshot&& value) { m_baseScreenshotsHasBeenSet = true; m_baseScreenshots.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline const Aws::String& GetBaseCanaryRunId() const{ return m_baseCanaryRunId; }

    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline bool BaseCanaryRunIdHasBeenSet() const { return m_baseCanaryRunIdHasBeenSet; }

    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline void SetBaseCanaryRunId(const Aws::String& value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId = value; }

    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline void SetBaseCanaryRunId(Aws::String&& value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId = std::move(value); }

    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline void SetBaseCanaryRunId(const char* value) { m_baseCanaryRunIdHasBeenSet = true; m_baseCanaryRunId.assign(value); }

    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline VisualReferenceInput& WithBaseCanaryRunId(const Aws::String& value) { SetBaseCanaryRunId(value); return *this;}

    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline VisualReferenceInput& WithBaseCanaryRunId(Aws::String&& value) { SetBaseCanaryRunId(std::move(value)); return *this;}

    /**
     * <p>Specifies which canary run to use the screenshots from as the baseline for
     * future visual monitoring with this canary. Valid values are <code>nextrun</code>
     * to use the screenshots from the next run after this update is made,
     * <code>lastrun</code> to use the screenshots from the most recent run before this
     * update was made, or the value of <code>Id</code> in the <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_CanaryRun.html">
     * CanaryRun</a> from any past run of this canary.</p>
     */
    inline VisualReferenceInput& WithBaseCanaryRunId(const char* value) { SetBaseCanaryRunId(value); return *this;}

  private:

    Aws::Vector<BaseScreenshot> m_baseScreenshots;
    bool m_baseScreenshotsHasBeenSet = false;

    Aws::String m_baseCanaryRunId;
    bool m_baseCanaryRunIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
