/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/HumanLoopActivationOutput.h>
#include <aws/rekognition/model/ModerationLabel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class DetectModerationLabelsResult
  {
  public:
    AWS_REKOGNITION_API DetectModerationLabelsResult();
    AWS_REKOGNITION_API DetectModerationLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectModerationLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Array of detected Moderation labels and the time, in milliseconds from the
     * start of the video, they were detected.</p>
     */
    inline const Aws::Vector<ModerationLabel>& GetModerationLabels() const{ return m_moderationLabels; }

    /**
     * <p>Array of detected Moderation labels and the time, in milliseconds from the
     * start of the video, they were detected.</p>
     */
    inline void SetModerationLabels(const Aws::Vector<ModerationLabel>& value) { m_moderationLabels = value; }

    /**
     * <p>Array of detected Moderation labels and the time, in milliseconds from the
     * start of the video, they were detected.</p>
     */
    inline void SetModerationLabels(Aws::Vector<ModerationLabel>&& value) { m_moderationLabels = std::move(value); }

    /**
     * <p>Array of detected Moderation labels and the time, in milliseconds from the
     * start of the video, they were detected.</p>
     */
    inline DetectModerationLabelsResult& WithModerationLabels(const Aws::Vector<ModerationLabel>& value) { SetModerationLabels(value); return *this;}

    /**
     * <p>Array of detected Moderation labels and the time, in milliseconds from the
     * start of the video, they were detected.</p>
     */
    inline DetectModerationLabelsResult& WithModerationLabels(Aws::Vector<ModerationLabel>&& value) { SetModerationLabels(std::move(value)); return *this;}

    /**
     * <p>Array of detected Moderation labels and the time, in milliseconds from the
     * start of the video, they were detected.</p>
     */
    inline DetectModerationLabelsResult& AddModerationLabels(const ModerationLabel& value) { m_moderationLabels.push_back(value); return *this; }

    /**
     * <p>Array of detected Moderation labels and the time, in milliseconds from the
     * start of the video, they were detected.</p>
     */
    inline DetectModerationLabelsResult& AddModerationLabels(ModerationLabel&& value) { m_moderationLabels.push_back(std::move(value)); return *this; }


    /**
     * <p>Version number of the moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline const Aws::String& GetModerationModelVersion() const{ return m_moderationModelVersion; }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline void SetModerationModelVersion(const Aws::String& value) { m_moderationModelVersion = value; }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline void SetModerationModelVersion(Aws::String&& value) { m_moderationModelVersion = std::move(value); }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline void SetModerationModelVersion(const char* value) { m_moderationModelVersion.assign(value); }

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline DetectModerationLabelsResult& WithModerationModelVersion(const Aws::String& value) { SetModerationModelVersion(value); return *this;}

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline DetectModerationLabelsResult& WithModerationModelVersion(Aws::String&& value) { SetModerationModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline DetectModerationLabelsResult& WithModerationModelVersion(const char* value) { SetModerationModelVersion(value); return *this;}


    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline const HumanLoopActivationOutput& GetHumanLoopActivationOutput() const{ return m_humanLoopActivationOutput; }

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline void SetHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { m_humanLoopActivationOutput = value; }

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline void SetHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { m_humanLoopActivationOutput = std::move(value); }

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline DetectModerationLabelsResult& WithHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { SetHumanLoopActivationOutput(value); return *this;}

    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline DetectModerationLabelsResult& WithHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { SetHumanLoopActivationOutput(std::move(value)); return *this;}

  private:

    Aws::Vector<ModerationLabel> m_moderationLabels;

    Aws::String m_moderationModelVersion;

    HumanLoopActivationOutput m_humanLoopActivationOutput;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
