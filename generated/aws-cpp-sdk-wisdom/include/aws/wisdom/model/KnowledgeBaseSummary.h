﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/KnowledgeBaseType.h>
#include <aws/wisdom/model/RenderingConfiguration.h>
#include <aws/wisdom/model/ServerSideEncryptionConfiguration.h>
#include <aws/wisdom/model/SourceConfiguration.h>
#include <aws/wisdom/model/KnowledgeBaseStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Summary information about the knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/KnowledgeBaseSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECTWISDOMSERVICE_API KnowledgeBaseSummary
  {
  public:
    KnowledgeBaseSummary();
    KnowledgeBaseSummary(Aws::Utils::Json::JsonView jsonValue);
    KnowledgeBaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}


    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The the identifier of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The type of knowledge base.</p>
     */
    inline const KnowledgeBaseType& GetKnowledgeBaseType() const{ return m_knowledgeBaseType; }

    /**
     * <p>The type of knowledge base.</p>
     */
    inline bool KnowledgeBaseTypeHasBeenSet() const { return m_knowledgeBaseTypeHasBeenSet; }

    /**
     * <p>The type of knowledge base.</p>
     */
    inline void SetKnowledgeBaseType(const KnowledgeBaseType& value) { m_knowledgeBaseTypeHasBeenSet = true; m_knowledgeBaseType = value; }

    /**
     * <p>The type of knowledge base.</p>
     */
    inline void SetKnowledgeBaseType(KnowledgeBaseType&& value) { m_knowledgeBaseTypeHasBeenSet = true; m_knowledgeBaseType = std::move(value); }

    /**
     * <p>The type of knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseType(const KnowledgeBaseType& value) { SetKnowledgeBaseType(value); return *this;}

    /**
     * <p>The type of knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseType(KnowledgeBaseType&& value) { SetKnowledgeBaseType(std::move(value)); return *this;}


    /**
     * <p>The name of the knowledge base.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about how to render the content.</p>
     */
    inline const RenderingConfiguration& GetRenderingConfiguration() const{ return m_renderingConfiguration; }

    /**
     * <p>Information about how to render the content.</p>
     */
    inline bool RenderingConfigurationHasBeenSet() const { return m_renderingConfigurationHasBeenSet; }

    /**
     * <p>Information about how to render the content.</p>
     */
    inline void SetRenderingConfiguration(const RenderingConfiguration& value) { m_renderingConfigurationHasBeenSet = true; m_renderingConfiguration = value; }

    /**
     * <p>Information about how to render the content.</p>
     */
    inline void SetRenderingConfiguration(RenderingConfiguration&& value) { m_renderingConfigurationHasBeenSet = true; m_renderingConfiguration = std::move(value); }

    /**
     * <p>Information about how to render the content.</p>
     */
    inline KnowledgeBaseSummary& WithRenderingConfiguration(const RenderingConfiguration& value) { SetRenderingConfiguration(value); return *this;}

    /**
     * <p>Information about how to render the content.</p>
     */
    inline KnowledgeBaseSummary& WithRenderingConfiguration(RenderingConfiguration&& value) { SetRenderingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The KMS key used for encryption.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The KMS key used for encryption.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>The KMS key used for encryption.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The KMS key used for encryption.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The KMS key used for encryption.</p>
     */
    inline KnowledgeBaseSummary& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The KMS key used for encryption.</p>
     */
    inline KnowledgeBaseSummary& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>[KEVIN]</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }

    /**
     * <p>[KEVIN]</p>
     */
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }

    /**
     * <p>[KEVIN]</p>
     */
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }

    /**
     * <p>[KEVIN]</p>
     */
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }

    /**
     * <p>[KEVIN]</p>
     */
    inline KnowledgeBaseSummary& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}

    /**
     * <p>[KEVIN]</p>
     */
    inline KnowledgeBaseSummary& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status of the knowledge base summary.</p>
     */
    inline const KnowledgeBaseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the knowledge base summary.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the knowledge base summary.</p>
     */
    inline void SetStatus(const KnowledgeBaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the knowledge base summary.</p>
     */
    inline void SetStatus(KnowledgeBaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the knowledge base summary.</p>
     */
    inline KnowledgeBaseSummary& WithStatus(const KnowledgeBaseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the knowledge base summary.</p>
     */
    inline KnowledgeBaseSummary& WithStatus(KnowledgeBaseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline KnowledgeBaseSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet;

    KnowledgeBaseType m_knowledgeBaseType;
    bool m_knowledgeBaseTypeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RenderingConfiguration m_renderingConfiguration;
    bool m_renderingConfigurationHasBeenSet;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet;

    KnowledgeBaseStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
