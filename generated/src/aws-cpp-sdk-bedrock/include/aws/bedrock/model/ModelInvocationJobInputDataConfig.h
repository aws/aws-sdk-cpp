/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ModelInvocationJobS3InputDataConfig.h>
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
   * <p>Details about the location of the input to the batch inference
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelInvocationJobInputDataConfig">AWS
   * API Reference</a></p>
   */
  class ModelInvocationJobInputDataConfig
  {
  public:
    AWS_BEDROCK_API ModelInvocationJobInputDataConfig() = default;
    AWS_BEDROCK_API ModelInvocationJobInputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelInvocationJobInputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the configuration of the S3 location of the input data.</p>
     */
    inline const ModelInvocationJobS3InputDataConfig& GetS3InputDataConfig() const { return m_s3InputDataConfig; }
    inline bool S3InputDataConfigHasBeenSet() const { return m_s3InputDataConfigHasBeenSet; }
    template<typename S3InputDataConfigT = ModelInvocationJobS3InputDataConfig>
    void SetS3InputDataConfig(S3InputDataConfigT&& value) { m_s3InputDataConfigHasBeenSet = true; m_s3InputDataConfig = std::forward<S3InputDataConfigT>(value); }
    template<typename S3InputDataConfigT = ModelInvocationJobS3InputDataConfig>
    ModelInvocationJobInputDataConfig& WithS3InputDataConfig(S3InputDataConfigT&& value) { SetS3InputDataConfig(std::forward<S3InputDataConfigT>(value)); return *this;}
    ///@}
  private:

    ModelInvocationJobS3InputDataConfig m_s3InputDataConfig;
    bool m_s3InputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
