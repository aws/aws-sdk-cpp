/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceSizeConfig.h>
#include <aws/cleanroomsml/model/TagOnCreatePolicy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelResult();
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline const Aws::String& GetAudienceModelArn() const{ return m_audienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline void SetAudienceModelArn(const Aws::String& value) { m_audienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline void SetAudienceModelArn(Aws::String&& value) { m_audienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline void SetAudienceModelArn(const char* value) { m_audienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithAudienceModelArn(const Aws::String& value) { SetAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithAudienceModelArn(Aws::String&& value) { SetAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the audience model used for this configured
     * audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithAudienceModelArn(const char* value) { SetAudienceModelArn(value); return *this;}


    /**
     * <p>The list of output sizes of audiences that can be created using this
     * configured audience model. A request to <a>StartAudienceGenerationJob</a> that
     * uses this configured audience model must have an <code>audienceSize</code>
     * selected from this list. You can use the <code>ABSOLUTE</code>
     * <a>AudienceSize</a> to configure out audience sizes using the count of
     * identifiers in the output. You can use the <code>Percentage</code>
     * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p>
     */
    inline const AudienceSizeConfig& GetAudienceSizeConfig() const{ return m_audienceSizeConfig; }

    /**
     * <p>The list of output sizes of audiences that can be created using this
     * configured audience model. A request to <a>StartAudienceGenerationJob</a> that
     * uses this configured audience model must have an <code>audienceSize</code>
     * selected from this list. You can use the <code>ABSOLUTE</code>
     * <a>AudienceSize</a> to configure out audience sizes using the count of
     * identifiers in the output. You can use the <code>Percentage</code>
     * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p>
     */
    inline void SetAudienceSizeConfig(const AudienceSizeConfig& value) { m_audienceSizeConfig = value; }

    /**
     * <p>The list of output sizes of audiences that can be created using this
     * configured audience model. A request to <a>StartAudienceGenerationJob</a> that
     * uses this configured audience model must have an <code>audienceSize</code>
     * selected from this list. You can use the <code>ABSOLUTE</code>
     * <a>AudienceSize</a> to configure out audience sizes using the count of
     * identifiers in the output. You can use the <code>Percentage</code>
     * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p>
     */
    inline void SetAudienceSizeConfig(AudienceSizeConfig&& value) { m_audienceSizeConfig = std::move(value); }

    /**
     * <p>The list of output sizes of audiences that can be created using this
     * configured audience model. A request to <a>StartAudienceGenerationJob</a> that
     * uses this configured audience model must have an <code>audienceSize</code>
     * selected from this list. You can use the <code>ABSOLUTE</code>
     * <a>AudienceSize</a> to configure out audience sizes using the count of
     * identifiers in the output. You can use the <code>Percentage</code>
     * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p>
     */
    inline GetConfiguredAudienceModelResult& WithAudienceSizeConfig(const AudienceSizeConfig& value) { SetAudienceSizeConfig(value); return *this;}

    /**
     * <p>The list of output sizes of audiences that can be created using this
     * configured audience model. A request to <a>StartAudienceGenerationJob</a> that
     * uses this configured audience model must have an <code>audienceSize</code>
     * selected from this list. You can use the <code>ABSOLUTE</code>
     * <a>AudienceSize</a> to configure out audience sizes using the count of
     * identifiers in the output. You can use the <code>Percentage</code>
     * <a>AudienceSize</a> to configure sizes in the range 1-100 percent.</p>
     */
    inline GetConfiguredAudienceModelResult& WithAudienceSizeConfig(AudienceSizeConfig&& value) { SetAudienceSizeConfig(std::move(value)); return *this;}


    /**
     * <p>Provides the <code>childResourceTagOnCreatePolicy</code> that was used for
     * this configured audience model.</p>
     */
    inline const TagOnCreatePolicy& GetChildResourceTagOnCreatePolicy() const{ return m_childResourceTagOnCreatePolicy; }

    /**
     * <p>Provides the <code>childResourceTagOnCreatePolicy</code> that was used for
     * this configured audience model.</p>
     */
    inline void SetChildResourceTagOnCreatePolicy(const TagOnCreatePolicy& value) { m_childResourceTagOnCreatePolicy = value; }

    /**
     * <p>Provides the <code>childResourceTagOnCreatePolicy</code> that was used for
     * this configured audience model.</p>
     */
    inline void SetChildResourceTagOnCreatePolicy(TagOnCreatePolicy&& value) { m_childResourceTagOnCreatePolicy = std::move(value); }

    /**
     * <p>Provides the <code>childResourceTagOnCreatePolicy</code> that was used for
     * this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithChildResourceTagOnCreatePolicy(const TagOnCreatePolicy& value) { SetChildResourceTagOnCreatePolicy(value); return *this;}

    /**
     * <p>Provides the <code>childResourceTagOnCreatePolicy</code> that was used for
     * this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithChildResourceTagOnCreatePolicy(TagOnCreatePolicy&& value) { SetChildResourceTagOnCreatePolicy(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline GetConfiguredAudienceModelResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the configured audience model was created.</p>
     */
    inline GetConfiguredAudienceModelResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the configured audience model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the configured audience model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the configured audience model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the configured audience model.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline int GetMinMatchingSeedSize() const{ return m_minMatchingSeedSize; }

    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline void SetMinMatchingSeedSize(int value) { m_minMatchingSeedSize = value; }

    /**
     * <p>The minimum number of users from the seed audience that must match with users
     * in the training data of the audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithMinMatchingSeedSize(int value) { SetMinMatchingSeedSize(value); return *this;}


    /**
     * <p>The name of the configured audience model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configured audience model.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the configured audience model.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the configured audience model.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The output configuration of the configured audience model</p>
     */
    inline const ConfiguredAudienceModelOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The output configuration of the configured audience model</p>
     */
    inline void SetOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>The output configuration of the configured audience model</p>
     */
    inline void SetOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>The output configuration of the configured audience model</p>
     */
    inline GetConfiguredAudienceModelResult& WithOutputConfig(const ConfiguredAudienceModelOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The output configuration of the configured audience model</p>
     */
    inline GetConfiguredAudienceModelResult& WithOutputConfig(ConfiguredAudienceModelOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline const Aws::Vector<SharedAudienceMetrics>& GetSharedAudienceMetrics() const{ return m_sharedAudienceMetrics; }

    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline void SetSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { m_sharedAudienceMetrics = value; }

    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline void SetSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { m_sharedAudienceMetrics = std::move(value); }

    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline GetConfiguredAudienceModelResult& WithSharedAudienceMetrics(const Aws::Vector<SharedAudienceMetrics>& value) { SetSharedAudienceMetrics(value); return *this;}

    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline GetConfiguredAudienceModelResult& WithSharedAudienceMetrics(Aws::Vector<SharedAudienceMetrics>&& value) { SetSharedAudienceMetrics(std::move(value)); return *this;}

    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline GetConfiguredAudienceModelResult& AddSharedAudienceMetrics(const SharedAudienceMetrics& value) { m_sharedAudienceMetrics.push_back(value); return *this; }

    /**
     * <p>Whether audience metrics are shared.</p>
     */
    inline GetConfiguredAudienceModelResult& AddSharedAudienceMetrics(SharedAudienceMetrics&& value) { m_sharedAudienceMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the configured audience model.</p>
     */
    inline const ConfiguredAudienceModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the configured audience model.</p>
     */
    inline void SetStatus(const ConfiguredAudienceModelStatus& value) { m_status = value; }

    /**
     * <p>The status of the configured audience model.</p>
     */
    inline void SetStatus(ConfiguredAudienceModelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithStatus(const ConfiguredAudienceModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithStatus(ConfiguredAudienceModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are associated to this configured audience model.</p>
     */
    inline GetConfiguredAudienceModelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline GetConfiguredAudienceModelResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the configured audience model was updated.</p>
     */
    inline GetConfiguredAudienceModelResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConfiguredAudienceModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConfiguredAudienceModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConfiguredAudienceModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_audienceModelArn;

    AudienceSizeConfig m_audienceSizeConfig;

    TagOnCreatePolicy m_childResourceTagOnCreatePolicy;

    Aws::String m_configuredAudienceModelArn;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    int m_minMatchingSeedSize;

    Aws::String m_name;

    ConfiguredAudienceModelOutputConfig m_outputConfig;

    Aws::Vector<SharedAudienceMetrics> m_sharedAudienceMetrics;

    ConfiguredAudienceModelStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
