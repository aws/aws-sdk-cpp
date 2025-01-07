﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/RetrieveAndGenerateType.h>
#include <aws/bedrock/model/KnowledgeBaseRetrieveAndGenerateConfiguration.h>
#include <aws/bedrock/model/ExternalSourcesRetrieveAndGenerateConfiguration.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains configuration details for a knowledge base retrieval and response
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RetrieveAndGenerateConfiguration">AWS
   * API Reference</a></p>
   */
  class RetrieveAndGenerateConfiguration
  {
  public:
    AWS_BEDROCK_API RetrieveAndGenerateConfiguration();
    AWS_BEDROCK_API RetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of resource that contains your data for retrieving information and
     * generating responses.</p> <p>If you choose to use <code>EXTERNAL_SOURCES</code>,
     * then currently only Claude 3 Sonnet models for knowledge bases are
     * supported.</p>
     */
    inline const RetrieveAndGenerateType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RetrieveAndGenerateType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RetrieveAndGenerateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RetrieveAndGenerateConfiguration& WithType(const RetrieveAndGenerateType& value) { SetType(value); return *this;}
    inline RetrieveAndGenerateConfiguration& WithType(RetrieveAndGenerateType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for the knowledge base retrieval and response
     * generation.</p>
     */
    inline const KnowledgeBaseRetrieveAndGenerateConfiguration& GetKnowledgeBaseConfiguration() const{ return m_knowledgeBaseConfiguration; }
    inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
    inline void SetKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = value; }
    inline void SetKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { m_knowledgeBaseConfigurationHasBeenSet = true; m_knowledgeBaseConfiguration = std::move(value); }
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(const KnowledgeBaseRetrieveAndGenerateConfiguration& value) { SetKnowledgeBaseConfiguration(value); return *this;}
    inline RetrieveAndGenerateConfiguration& WithKnowledgeBaseConfiguration(KnowledgeBaseRetrieveAndGenerateConfiguration&& value) { SetKnowledgeBaseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the external source wrapper object in the
     * <code>retrieveAndGenerate</code> function.</p>
     */
    inline const ExternalSourcesRetrieveAndGenerateConfiguration& GetExternalSourcesConfiguration() const{ return m_externalSourcesConfiguration; }
    inline bool ExternalSourcesConfigurationHasBeenSet() const { return m_externalSourcesConfigurationHasBeenSet; }
    inline void SetExternalSourcesConfiguration(const ExternalSourcesRetrieveAndGenerateConfiguration& value) { m_externalSourcesConfigurationHasBeenSet = true; m_externalSourcesConfiguration = value; }
    inline void SetExternalSourcesConfiguration(ExternalSourcesRetrieveAndGenerateConfiguration&& value) { m_externalSourcesConfigurationHasBeenSet = true; m_externalSourcesConfiguration = std::move(value); }
    inline RetrieveAndGenerateConfiguration& WithExternalSourcesConfiguration(const ExternalSourcesRetrieveAndGenerateConfiguration& value) { SetExternalSourcesConfiguration(value); return *this;}
    inline RetrieveAndGenerateConfiguration& WithExternalSourcesConfiguration(ExternalSourcesRetrieveAndGenerateConfiguration&& value) { SetExternalSourcesConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    RetrieveAndGenerateType m_type;
    bool m_typeHasBeenSet = false;

    KnowledgeBaseRetrieveAndGenerateConfiguration m_knowledgeBaseConfiguration;
    bool m_knowledgeBaseConfigurationHasBeenSet = false;

    ExternalSourcesRetrieveAndGenerateConfiguration m_externalSourcesConfiguration;
    bool m_externalSourcesConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
