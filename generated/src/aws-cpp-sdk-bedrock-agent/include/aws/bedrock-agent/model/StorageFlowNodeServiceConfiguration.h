/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/StorageFlowNodeS3Configuration.h>
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
   * <p>Contains configurations for the service to use for storing the input into the
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/StorageFlowNodeServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class StorageFlowNodeServiceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API StorageFlowNodeServiceConfiguration() = default;
    AWS_BEDROCKAGENT_API StorageFlowNodeServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API StorageFlowNodeServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for the Amazon S3 location in which to store the
     * input into the node.</p>
     */
    inline const StorageFlowNodeS3Configuration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = StorageFlowNodeS3Configuration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = StorageFlowNodeS3Configuration>
    StorageFlowNodeServiceConfiguration& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    StorageFlowNodeS3Configuration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
