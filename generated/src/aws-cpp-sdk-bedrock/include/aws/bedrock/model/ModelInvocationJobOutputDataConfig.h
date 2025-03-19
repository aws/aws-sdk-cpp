/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ModelInvocationJobS3OutputDataConfig.h>
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
   * <p>Contains the configuration of the S3 location of the output
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelInvocationJobOutputDataConfig">AWS
   * API Reference</a></p>
   */
  class ModelInvocationJobOutputDataConfig
  {
  public:
    AWS_BEDROCK_API ModelInvocationJobOutputDataConfig() = default;
    AWS_BEDROCK_API ModelInvocationJobOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelInvocationJobOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the configuration of the S3 location of the output data.</p>
     */
    inline const ModelInvocationJobS3OutputDataConfig& GetS3OutputDataConfig() const { return m_s3OutputDataConfig; }
    inline bool S3OutputDataConfigHasBeenSet() const { return m_s3OutputDataConfigHasBeenSet; }
    template<typename S3OutputDataConfigT = ModelInvocationJobS3OutputDataConfig>
    void SetS3OutputDataConfig(S3OutputDataConfigT&& value) { m_s3OutputDataConfigHasBeenSet = true; m_s3OutputDataConfig = std::forward<S3OutputDataConfigT>(value); }
    template<typename S3OutputDataConfigT = ModelInvocationJobS3OutputDataConfig>
    ModelInvocationJobOutputDataConfig& WithS3OutputDataConfig(S3OutputDataConfigT&& value) { SetS3OutputDataConfig(std::forward<S3OutputDataConfigT>(value)); return *this;}
    ///@}
  private:

    ModelInvocationJobS3OutputDataConfig m_s3OutputDataConfig;
    bool m_s3OutputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
