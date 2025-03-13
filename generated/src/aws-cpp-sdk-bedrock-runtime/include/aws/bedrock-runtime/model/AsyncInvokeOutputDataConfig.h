/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/AsyncInvokeS3OutputDataConfig.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Asynchronous invocation output data settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/AsyncInvokeOutputDataConfig">AWS
   * API Reference</a></p>
   */
  class AsyncInvokeOutputDataConfig
  {
  public:
    AWS_BEDROCKRUNTIME_API AsyncInvokeOutputDataConfig() = default;
    AWS_BEDROCKRUNTIME_API AsyncInvokeOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API AsyncInvokeOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A storage location for the output data in an S3 bucket</p>
     */
    inline const AsyncInvokeS3OutputDataConfig& GetS3OutputDataConfig() const { return m_s3OutputDataConfig; }
    inline bool S3OutputDataConfigHasBeenSet() const { return m_s3OutputDataConfigHasBeenSet; }
    template<typename S3OutputDataConfigT = AsyncInvokeS3OutputDataConfig>
    void SetS3OutputDataConfig(S3OutputDataConfigT&& value) { m_s3OutputDataConfigHasBeenSet = true; m_s3OutputDataConfig = std::forward<S3OutputDataConfigT>(value); }
    template<typename S3OutputDataConfigT = AsyncInvokeS3OutputDataConfig>
    AsyncInvokeOutputDataConfig& WithS3OutputDataConfig(S3OutputDataConfigT&& value) { SetS3OutputDataConfig(std::forward<S3OutputDataConfigT>(value)); return *this;}
    ///@}
  private:

    AsyncInvokeS3OutputDataConfig m_s3OutputDataConfig;
    bool m_s3OutputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
