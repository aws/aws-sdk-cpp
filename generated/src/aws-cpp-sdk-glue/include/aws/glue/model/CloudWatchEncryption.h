/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CloudWatchEncryptionMode.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies how Amazon CloudWatch data should be encrypted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CloudWatchEncryption">AWS
   * API Reference</a></p>
   */
  class CloudWatchEncryption
  {
  public:
    AWS_GLUE_API CloudWatchEncryption() = default;
    AWS_GLUE_API CloudWatchEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CloudWatchEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline CloudWatchEncryptionMode GetCloudWatchEncryptionMode() const { return m_cloudWatchEncryptionMode; }
    inline bool CloudWatchEncryptionModeHasBeenSet() const { return m_cloudWatchEncryptionModeHasBeenSet; }
    inline void SetCloudWatchEncryptionMode(CloudWatchEncryptionMode value) { m_cloudWatchEncryptionModeHasBeenSet = true; m_cloudWatchEncryptionMode = value; }
    inline CloudWatchEncryption& WithCloudWatchEncryptionMode(CloudWatchEncryptionMode value) { SetCloudWatchEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CloudWatchEncryption& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    CloudWatchEncryptionMode m_cloudWatchEncryptionMode{CloudWatchEncryptionMode::NOT_SET};
    bool m_cloudWatchEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
