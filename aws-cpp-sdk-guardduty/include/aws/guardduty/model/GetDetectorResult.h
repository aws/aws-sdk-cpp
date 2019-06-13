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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <aws/guardduty/model/DetectorStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API GetDetectorResult
  {
  public:
    GetDetectorResult();
    GetDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Detector creation timestamp.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Detector creation timestamp.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }

    /**
     * <p>Detector creation timestamp.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Detector creation timestamp.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }

    /**
     * <p>Detector creation timestamp.</p>
     */
    inline GetDetectorResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Detector creation timestamp.</p>
     */
    inline GetDetectorResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>Detector creation timestamp.</p>
     */
    inline GetDetectorResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>Finding publishing frequency.</p>
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * <p>Finding publishing frequency.</p>
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequency = value; }

    /**
     * <p>Finding publishing frequency.</p>
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequency = std::move(value); }

    /**
     * <p>Finding publishing frequency.</p>
     */
    inline GetDetectorResult& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * <p>Finding publishing frequency.</p>
     */
    inline GetDetectorResult& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}


    /**
     * <p>The GuardDuty service role.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The GuardDuty service role.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRole = value; }

    /**
     * <p>The GuardDuty service role.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRole = std::move(value); }

    /**
     * <p>The GuardDuty service role.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRole.assign(value); }

    /**
     * <p>The GuardDuty service role.</p>
     */
    inline GetDetectorResult& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The GuardDuty service role.</p>
     */
    inline GetDetectorResult& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The GuardDuty service role.</p>
     */
    inline GetDetectorResult& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The detector status.</p>
     */
    inline const DetectorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The detector status.</p>
     */
    inline void SetStatus(const DetectorStatus& value) { m_status = value; }

    /**
     * <p>The detector status.</p>
     */
    inline void SetStatus(DetectorStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The detector status.</p>
     */
    inline GetDetectorResult& WithStatus(const DetectorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The detector status.</p>
     */
    inline GetDetectorResult& WithStatus(DetectorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Detector last update timestamp.</p>
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>Detector last update timestamp.</p>
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAt = value; }

    /**
     * <p>Detector last update timestamp.</p>
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>Detector last update timestamp.</p>
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAt.assign(value); }

    /**
     * <p>Detector last update timestamp.</p>
     */
    inline GetDetectorResult& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>Detector last update timestamp.</p>
     */
    inline GetDetectorResult& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>Detector last update timestamp.</p>
     */
    inline GetDetectorResult& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}


    /**
     * <p>The tags of the detector resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the detector resource.</p>
     */
    inline GetDetectorResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_createdAt;

    FindingPublishingFrequency m_findingPublishingFrequency;

    Aws::String m_serviceRole;

    DetectorStatus m_status;

    Aws::String m_updatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
