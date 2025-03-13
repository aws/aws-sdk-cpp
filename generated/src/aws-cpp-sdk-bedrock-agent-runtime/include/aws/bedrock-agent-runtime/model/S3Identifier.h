/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p> The identifier information for an Amazon S3 bucket. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/S3Identifier">AWS
   * API Reference</a></p>
   */
  class S3Identifier
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API S3Identifier() = default;
    AWS_BEDROCKAGENTRUNTIME_API S3Identifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API S3Identifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    S3Identifier& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 object key for the S3 resource. </p>
     */
    inline const Aws::String& GetS3ObjectKey() const { return m_s3ObjectKey; }
    inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }
    template<typename S3ObjectKeyT = Aws::String>
    void SetS3ObjectKey(S3ObjectKeyT&& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = std::forward<S3ObjectKeyT>(value); }
    template<typename S3ObjectKeyT = Aws::String>
    S3Identifier& WithS3ObjectKey(S3ObjectKeyT&& value) { SetS3ObjectKey(std::forward<S3ObjectKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3ObjectKey;
    bool m_s3ObjectKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
