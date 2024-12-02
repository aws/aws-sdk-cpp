/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/KnowledgeBaseVectorSearchConfiguration.h>
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
   * <p>Contains configuration details for retrieving information from a knowledge
   * base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/KnowledgeBaseRetrievalConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseRetrievalConfiguration
  {
  public:
    AWS_BEDROCK_API KnowledgeBaseRetrievalConfiguration();
    AWS_BEDROCK_API KnowledgeBaseRetrievalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API KnowledgeBaseRetrievalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details for returning the results from the vector
     * search.</p>
     */
    inline const KnowledgeBaseVectorSearchConfiguration& GetVectorSearchConfiguration() const{ return m_vectorSearchConfiguration; }
    inline bool VectorSearchConfigurationHasBeenSet() const { return m_vectorSearchConfigurationHasBeenSet; }
    inline void SetVectorSearchConfiguration(const KnowledgeBaseVectorSearchConfiguration& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = value; }
    inline void SetVectorSearchConfiguration(KnowledgeBaseVectorSearchConfiguration&& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = std::move(value); }
    inline KnowledgeBaseRetrievalConfiguration& WithVectorSearchConfiguration(const KnowledgeBaseVectorSearchConfiguration& value) { SetVectorSearchConfiguration(value); return *this;}
    inline KnowledgeBaseRetrievalConfiguration& WithVectorSearchConfiguration(KnowledgeBaseVectorSearchConfiguration&& value) { SetVectorSearchConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseVectorSearchConfiguration m_vectorSearchConfiguration;
    bool m_vectorSearchConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
