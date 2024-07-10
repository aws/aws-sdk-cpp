/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalFlowNodeS3Configuration.h>
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
   * <p>Contains configurations for the service to use for retrieving data to return
   * as the output from the node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RetrievalFlowNodeServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class RetrievalFlowNodeServiceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RetrievalFlowNodeServiceConfiguration();
    AWS_BEDROCKAGENT_API RetrievalFlowNodeServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RetrievalFlowNodeServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configurations for the Amazon S3 location from which to retrieve
     * data to return as the output from the node.</p>
     */
    inline const RetrievalFlowNodeS3Configuration& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const RetrievalFlowNodeS3Configuration& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(RetrievalFlowNodeS3Configuration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline RetrievalFlowNodeServiceConfiguration& WithS3(const RetrievalFlowNodeS3Configuration& value) { SetS3(value); return *this;}
    inline RetrievalFlowNodeServiceConfiguration& WithS3(RetrievalFlowNodeS3Configuration&& value) { SetS3(std::move(value)); return *this;}
    ///@}
  private:

    RetrievalFlowNodeS3Configuration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
