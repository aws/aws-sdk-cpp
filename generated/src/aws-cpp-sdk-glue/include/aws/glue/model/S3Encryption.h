/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/S3EncryptionMode.h>
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
   * <p>Specifies how Amazon Simple Storage Service (Amazon S3) data should be
   * encrypted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3Encryption">AWS
   * API Reference</a></p>
   */
  class S3Encryption
  {
  public:
    AWS_GLUE_API S3Encryption() = default;
    AWS_GLUE_API S3Encryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption mode to use for Amazon S3 data.</p>
     */
    inline S3EncryptionMode GetS3EncryptionMode() const { return m_s3EncryptionMode; }
    inline bool S3EncryptionModeHasBeenSet() const { return m_s3EncryptionModeHasBeenSet; }
    inline void SetS3EncryptionMode(S3EncryptionMode value) { m_s3EncryptionModeHasBeenSet = true; m_s3EncryptionMode = value; }
    inline S3Encryption& WithS3EncryptionMode(S3EncryptionMode value) { SetS3EncryptionMode(value); return *this;}
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
    S3Encryption& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    S3EncryptionMode m_s3EncryptionMode{S3EncryptionMode::NOT_SET};
    bool m_s3EncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
