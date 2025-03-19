/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelOutputConfig.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/AudienceSizeConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanroomsml/model/TagOnCreatePolicy.h>
#include <aws/cleanroomsml/model/SharedAudienceMetrics.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class GetConfiguredAudienceModelResult
  {
  public:
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelResult() = default;
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetConfiguredAudienceModelResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetConfiguredAudienceModelResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const { return m_configuredAudienceModelArn; }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    void SetConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::forward<ConfiguredAudienceModelArnT>(value); }
    template<typename ConfiguredAudienceModelArnT = Aws::String>
    GetConfiguredAudienceModelResult& WithConfiguredAudienceModelArn(ConfiguredAudienceModelArnT&& value) { SetConfiguredAudienceModelArn(std::forward<ConfiguredAudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configured audience model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetConfiguredAudienceModelResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const { return m_audienceModelArn; }
    template<typename AudienceModelArnT = Aws::String>
    void SetAudienceModelArn(AudienceModelArnT&& value) { m_audienceModelArnHasBeenSet = true; m_audienceModelArn = std::forward<AudienceModelArnT>(value); }
    template<typename AudienceModelArnT = Aws::String>
    GetConfiguredAudienceModelResult& WithAudienceModelArn(AudienceModelArnT&& value) { SetAudienceModelArn(std::forward<AudienceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration of the configured audience model</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = ConfiguredAudienceModelOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = ConfiguredAudienceModelOutputConfig>
    GetConfiguredAudienceModelResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetConfiguredAudienceModelResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the configured audience model.</p>
     */
    inline ConfiguredAudienceModelStatus GetStatus() const { return m_status; }
    inline void SetStatus(ConfiguredAudienceModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetConfiguredAudienceModelResult& WithStatus(ConfiguredAudienceModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline const Aws::Vector<SharedAudienceMetrics>& GetSharedAudienceMetrics() const { return m_sharedAudienceMetrics; }
    template<typename SharedAudienceMetricsT = Aws::Vector<SharedAudienceMetrics>>
    void SetSharedAudienceMetrics(SharedAudienceMetricsT&& value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics = std::forward<SharedAudienceMetricsT>(value); }
    template<typename SharedAudienceMetricsT = Aws::Vector<SharedAudienceMetrics>>
    GetConfiguredAudienceModelResult& WithSharedAudienceMetrics(SharedAudienceMetricsT&& value) { SetSharedAudienceMetrics(std::forward<SharedAudienceMetricsT>(value)); return *this;}
    inline GetConfiguredAudienceModelResult& AddSharedAudienceMetrics(SharedAudienceMetrics value) { m_sharedAudienceMetricsHasBeenSet = true; m_sharedAudienceMetrics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline int GetMinMatchingSeedSize() const { return m_minMatchingSeedSize; }
    inline void SetMinMatchingSeedSize(int value) { m_minMatchingSeedSizeHasBeenSet = true; m_minMatchingSeedSize = value; }
    inline GetConfiguredAudienceModelResult& WithMinMatchingSeedSize(int value) { SetMinMatchingSeedSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of output sizes of audiences that can be created using this
     * configured audience model. A request to <a>StartAudienceGenerationJob</a> that
     * uses this configured audience model must have an <code>audienceSize</code>
     * selected from this list. You can use the <code>ABSOLUTE</code>
     * <a>AudienceSize</a> to configure out audience sizes using the count of
     * identifiers in the output. You can use the <code>Percentage</code>
     * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p>
     */
    inline const AudienceSizeConfig& GetAudienceSizeConfig() const { return m_audienceSizeConfig; }
    template<typename AudienceSizeConfigT = AudienceSizeConfig>
    void SetAudienceSizeConfig(AudienceSizeConfigT&& value) { m_audienceSizeConfigHasBeenSet = true; m_audienceSizeConfig = std::forward<AudienceSizeConfigT>(value); }
    template<typename AudienceSizeConfigT = AudienceSizeConfig>
    GetConfiguredAudienceModelResult& WithAudienceSizeConfig(AudienceSizeConfigT&& value) { SetAudienceSizeConfig(std::forward<AudienceSizeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetConfiguredAudienceModelResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetConfiguredAudienceModelResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Provides the <code>childResourceTagOnCreatePolicy</code> that was used for
     * this configured audience model.</p>
     */
    inline TagOnCreatePolicy GetChildResourceTagOnCreatePolicy() const { return m_childResourceTagOnCreatePolicy; }
    inline void SetChildResourceTagOnCreatePolicy(TagOnCreatePolicy value) { m_childResourceTagOnCreatePolicyHasBeenSet = true; m_childResourceTagOnCreatePolicy = value; }
    inline GetConfiguredAudienceModelResult& WithChildResourceTagOnCreatePolicy(TagOnCreatePolicy value) { SetChildResourceTagOnCreatePolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfiguredAudienceModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_audienceModelArn;
    bool m_audienceModelArnHasBeenSet = false;

    ConfiguredAudienceModelOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConfiguredAudienceModelStatus m_status{ConfiguredAudienceModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<SharedAudienceMetrics> m_sharedAudienceMetrics;
    bool m_sharedAudienceMetricsHasBeenSet = false;

    int m_minMatchingSeedSize{0};
    bool m_minMatchingSeedSizeHasBeenSet = false;

    AudienceSizeConfig m_audienceSizeConfig;
    bool m_audienceSizeConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TagOnCreatePolicy m_childResourceTagOnCreatePolicy{TagOnCreatePolicy::NOT_SET};
    bool m_childResourceTagOnCreatePolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
