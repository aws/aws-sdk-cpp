/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/RetrieveConfig.h>
#include <aws/bedrock/model/RetrieveAndGenerateConfiguration.h>
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
   * <p>The configuration details for retrieving information from a knowledge base
   * and generating responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/KnowledgeBaseConfig">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseConfig
  {
  public:
    AWS_BEDROCK_API KnowledgeBaseConfig() = default;
    AWS_BEDROCK_API KnowledgeBaseConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API KnowledgeBaseConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details for retrieving information from a knowledge
     * base.</p>
     */
    inline const RetrieveConfig& GetRetrieveConfig() const { return m_retrieveConfig; }
    inline bool RetrieveConfigHasBeenSet() const { return m_retrieveConfigHasBeenSet; }
    template<typename RetrieveConfigT = RetrieveConfig>
    void SetRetrieveConfig(RetrieveConfigT&& value) { m_retrieveConfigHasBeenSet = true; m_retrieveConfig = std::forward<RetrieveConfigT>(value); }
    template<typename RetrieveConfigT = RetrieveConfig>
    KnowledgeBaseConfig& WithRetrieveConfig(RetrieveConfigT&& value) { SetRetrieveConfig(std::forward<RetrieveConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration details for retrieving information from a knowledge
     * base and generating responses.</p>
     */
    inline const RetrieveAndGenerateConfiguration& GetRetrieveAndGenerateConfig() const { return m_retrieveAndGenerateConfig; }
    inline bool RetrieveAndGenerateConfigHasBeenSet() const { return m_retrieveAndGenerateConfigHasBeenSet; }
    template<typename RetrieveAndGenerateConfigT = RetrieveAndGenerateConfiguration>
    void SetRetrieveAndGenerateConfig(RetrieveAndGenerateConfigT&& value) { m_retrieveAndGenerateConfigHasBeenSet = true; m_retrieveAndGenerateConfig = std::forward<RetrieveAndGenerateConfigT>(value); }
    template<typename RetrieveAndGenerateConfigT = RetrieveAndGenerateConfiguration>
    KnowledgeBaseConfig& WithRetrieveAndGenerateConfig(RetrieveAndGenerateConfigT&& value) { SetRetrieveAndGenerateConfig(std::forward<RetrieveAndGenerateConfigT>(value)); return *this;}
    ///@}
  private:

    RetrieveConfig m_retrieveConfig;
    bool m_retrieveConfigHasBeenSet = false;

    RetrieveAndGenerateConfiguration m_retrieveAndGenerateConfig;
    bool m_retrieveAndGenerateConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
