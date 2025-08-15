/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains the storage configuration of the knowledge base for S3
   * vectors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/S3VectorsConfiguration">AWS
   * API Reference</a></p>
   */
  class S3VectorsConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API S3VectorsConfiguration() = default;
    AWS_BEDROCKAGENT_API S3VectorsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API S3VectorsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket where vector embeddings are
     * stored. This bucket contains the vector data used by the knowledge base.</p>
     */
    inline const Aws::String& GetVectorBucketArn() const { return m_vectorBucketArn; }
    inline bool VectorBucketArnHasBeenSet() const { return m_vectorBucketArnHasBeenSet; }
    template<typename VectorBucketArnT = Aws::String>
    void SetVectorBucketArn(VectorBucketArnT&& value) { m_vectorBucketArnHasBeenSet = true; m_vectorBucketArn = std::forward<VectorBucketArnT>(value); }
    template<typename VectorBucketArnT = Aws::String>
    S3VectorsConfiguration& WithVectorBucketArn(VectorBucketArnT&& value) { SetVectorBucketArn(std::forward<VectorBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vector index used for the knowledge
     * base. This ARN identifies the specific vector index resource within Amazon
     * Bedrock.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    S3VectorsConfiguration& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector index used for the knowledge base. This name
     * identifies the vector index within the Amazon Bedrock service.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    S3VectorsConfiguration& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vectorBucketArn;
    bool m_vectorBucketArnHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
