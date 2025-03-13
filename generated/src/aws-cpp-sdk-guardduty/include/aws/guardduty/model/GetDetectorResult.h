/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <aws/guardduty/model/DetectorStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/DetectorFeatureConfigurationResult.h>
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
  class GetDetectorResult
  {
  public:
    AWS_GUARDDUTY_API GetDetectorResult() = default;
    AWS_GUARDDUTY_API GetDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the detector was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    GetDetectorResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publishing frequency of the finding.</p>
     */
    inline FindingPublishingFrequency GetFindingPublishingFrequency() const { return m_findingPublishingFrequency; }
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }
    inline GetDetectorResult& WithFindingPublishingFrequency(FindingPublishingFrequency value) { SetFindingPublishingFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GuardDuty service role.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    GetDetectorResult& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector status.</p>
     */
    inline DetectorStatus GetStatus() const { return m_status; }
    inline void SetStatus(DetectorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDetectorResult& WithStatus(DetectorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last-updated timestamp for the detector.</p>
     */
    inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::String>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::String>
    GetDetectorResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the detector resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetDetectorResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetDetectorResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Describes the features that have been enabled for the detector.</p>
     */
    inline const Aws::Vector<DetectorFeatureConfigurationResult>& GetFeatures() const { return m_features; }
    template<typename FeaturesT = Aws::Vector<DetectorFeatureConfigurationResult>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<DetectorFeatureConfigurationResult>>
    GetDetectorResult& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesT = DetectorFeatureConfigurationResult>
    GetDetectorResult& AddFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features.emplace_back(std::forward<FeaturesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDetectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    FindingPublishingFrequency m_findingPublishingFrequency{FindingPublishingFrequency::NOT_SET};
    bool m_findingPublishingFrequencyHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    DetectorStatus m_status{DetectorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<DetectorFeatureConfigurationResult> m_features;
    bool m_featuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
