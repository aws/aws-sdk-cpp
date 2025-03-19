/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/LogType.h>
#include <aws/lex-models/model/Destination.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Settings used to configure delivery mode and destination for conversation
   * logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/LogSettingsRequest">AWS
   * API Reference</a></p>
   */
  class LogSettingsRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsRequest() = default;
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API LogSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of logging to enable. Text logs are delivered to a CloudWatch Logs
     * log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline LogType GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(LogType value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline LogSettingsRequest& WithLogType(LogType value) { SetLogType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the logs will be delivered. Text logs are delivered to a CloudWatch
     * Logs log group. Audio logs are delivered to an S3 bucket.</p>
     */
    inline Destination GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(Destination value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline LogSettingsRequest& WithDestination(Destination value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer managed key for
     * encrypting audio logs delivered to an S3 bucket. The key does not apply to
     * CloudWatch Logs and is optional for S3 buckets.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    LogSettingsRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch Logs log group or S3 bucket
     * where the logs should be delivered.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LogSettingsRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    LogType m_logType{LogType::NOT_SET};
    bool m_logTypeHasBeenSet = false;

    Destination m_destination{Destination::NOT_SET};
    bool m_destinationHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
