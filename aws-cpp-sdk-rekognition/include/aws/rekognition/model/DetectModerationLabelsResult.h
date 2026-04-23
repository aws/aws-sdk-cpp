/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_REKOGNITION_API DetectModerationLabelsResult
  {
  public:
    DetectModerationLabelsResult();
    DetectModerationLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectModerationLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Array of detected Moderation labels and the time, in millseconds from the
     * start of the video, they were detected.</p>
     */
    inline const Aws::Vector<ModerationLabel>& GetModerationLabels() const{ return m_moderationLabels; }

    /**
     * <p>Array of detected Moderation labels and the time, in millseconds from the
     * start of the video, they were detected.</p>
     */
    inline void SetModerationLabels(const Aws::Vector<ModerationLabel>& value) { m_moderationLabels = value; }

    /**
     * <p>Array of detected Moderation labels and the time, in millseconds from the
     * start of the video, they were detected.</p>
     */
    inline void SetModerationLabels(Aws::Vector<ModerationLabel>&& value) { m_moderationLabels = std::move(value); }

    /**
     * <p>Array of detected Moderation labels and the time, in millseconds from the
     * start of the video, they were detected.</p>
     */
    inline DetectModerationLabelsResult& WithModerationLabels(const Aws::Vector<ModerationLabel>& value) { SetModerationLabels(value); return *this;}

    /**
     * <p>Array of detected Moderation labels and the time, in millseconds from the
     * start of the video, they were detected.</p>
     */
    inline DetectModerationLabelsResult& WithModerationLabels(Aws::Vector<ModerationLabel>&& value) { SetModerationLabels(std::move(value)); return *this;}

    /**
     * <p>Array of detected Moderation labels and the time, in millseconds from the
     * start of the video, they were detected.</p>
     */
    inline DetectModerationLabelsResult& AddModerationLabels(const ModerationLabel& value) { m_moderationLabels.push_back(value); return *this; }

    /**
     * <p>Array of detected Moderation labels and the time, in millseconds from the
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

  private:

    Aws::Vector<ModerationLabel> m_moderationLabels;

    Aws::String m_moderationModelVersion;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
