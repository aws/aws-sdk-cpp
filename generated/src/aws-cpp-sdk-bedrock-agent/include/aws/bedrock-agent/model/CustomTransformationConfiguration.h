/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/IntermediateStorage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/Transformation.h>
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
   * <p>Settings for customizing steps in the data source content ingestion
   * pipeline.</p> <p>You can configure the data source to process documents with a
   * Lambda function after they are parsed and converted into chunks. When you add a
   * post-chunking transformation, the service stores chunked documents in an S3
   * bucket and invokes a Lambda function to process them.</p> <p>To process chunked
   * documents with a Lambda function, define an S3 bucket path for input and output
   * objects, and a transformation that specifies the Lambda function to invoke. You
   * can use the Lambda function to customize how chunks are split, and the metadata
   * for each chunk. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CustomTransformationConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomTransformationConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API CustomTransformationConfiguration() = default;
    AWS_BEDROCKAGENT_API CustomTransformationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CustomTransformationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An S3 bucket path for input and output objects.</p>
     */
    inline const IntermediateStorage& GetIntermediateStorage() const { return m_intermediateStorage; }
    inline bool IntermediateStorageHasBeenSet() const { return m_intermediateStorageHasBeenSet; }
    template<typename IntermediateStorageT = IntermediateStorage>
    void SetIntermediateStorage(IntermediateStorageT&& value) { m_intermediateStorageHasBeenSet = true; m_intermediateStorage = std::forward<IntermediateStorageT>(value); }
    template<typename IntermediateStorageT = IntermediateStorage>
    CustomTransformationConfiguration& WithIntermediateStorage(IntermediateStorageT&& value) { SetIntermediateStorage(std::forward<IntermediateStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Lambda function that processes documents.</p>
     */
    inline const Aws::Vector<Transformation>& GetTransformations() const { return m_transformations; }
    inline bool TransformationsHasBeenSet() const { return m_transformationsHasBeenSet; }
    template<typename TransformationsT = Aws::Vector<Transformation>>
    void SetTransformations(TransformationsT&& value) { m_transformationsHasBeenSet = true; m_transformations = std::forward<TransformationsT>(value); }
    template<typename TransformationsT = Aws::Vector<Transformation>>
    CustomTransformationConfiguration& WithTransformations(TransformationsT&& value) { SetTransformations(std::forward<TransformationsT>(value)); return *this;}
    template<typename TransformationsT = Transformation>
    CustomTransformationConfiguration& AddTransformations(TransformationsT&& value) { m_transformationsHasBeenSet = true; m_transformations.emplace_back(std::forward<TransformationsT>(value)); return *this; }
    ///@}
  private:

    IntermediateStorage m_intermediateStorage;
    bool m_intermediateStorageHasBeenSet = false;

    Aws::Vector<Transformation> m_transformations;
    bool m_transformationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
