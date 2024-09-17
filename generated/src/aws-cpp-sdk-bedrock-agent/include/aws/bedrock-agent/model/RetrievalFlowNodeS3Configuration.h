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
   * <p>Contains configurations for the Amazon S3 location from which to retrieve
   * data to return as the output from the node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RetrievalFlowNodeS3Configuration">AWS
   * API Reference</a></p>
   */
  class RetrievalFlowNodeS3Configuration
  {
  public:
    AWS_BEDROCKAGENT_API RetrievalFlowNodeS3Configuration();
    AWS_BEDROCKAGENT_API RetrievalFlowNodeS3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RetrievalFlowNodeS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket from which to retrieve data.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline RetrievalFlowNodeS3Configuration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline RetrievalFlowNodeS3Configuration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline RetrievalFlowNodeS3Configuration& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
