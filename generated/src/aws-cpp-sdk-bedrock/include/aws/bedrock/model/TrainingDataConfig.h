/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/InvocationLogsConfig.h>
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
   * <p>S3 Location of the training data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TrainingDataConfig">AWS
   * API Reference</a></p>
   */
  class TrainingDataConfig
  {
  public:
    AWS_BEDROCK_API TrainingDataConfig();
    AWS_BEDROCK_API TrainingDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API TrainingDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 URI where the training data is stored.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline TrainingDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline TrainingDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline TrainingDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for using invocation logs to customize a model.</p>
     */
    inline const InvocationLogsConfig& GetInvocationLogsConfig() const{ return m_invocationLogsConfig; }
    inline bool InvocationLogsConfigHasBeenSet() const { return m_invocationLogsConfigHasBeenSet; }
    inline void SetInvocationLogsConfig(const InvocationLogsConfig& value) { m_invocationLogsConfigHasBeenSet = true; m_invocationLogsConfig = value; }
    inline void SetInvocationLogsConfig(InvocationLogsConfig&& value) { m_invocationLogsConfigHasBeenSet = true; m_invocationLogsConfig = std::move(value); }
    inline TrainingDataConfig& WithInvocationLogsConfig(const InvocationLogsConfig& value) { SetInvocationLogsConfig(value); return *this;}
    inline TrainingDataConfig& WithInvocationLogsConfig(InvocationLogsConfig&& value) { SetInvocationLogsConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    InvocationLogsConfig m_invocationLogsConfig;
    bool m_invocationLogsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
