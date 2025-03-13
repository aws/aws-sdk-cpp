/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the server side encryption method used in the S3
   * bucket. See <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">S3
   * Server-Side Encryption</a> for more information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DefaultServerSideEncryption">AWS
   * API Reference</a></p>
   */
  class DefaultServerSideEncryption
  {
  public:
    AWS_GUARDDUTY_API DefaultServerSideEncryption() = default;
    AWS_GUARDDUTY_API DefaultServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DefaultServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of encryption used for objects within the S3 bucket.</p>
     */
    inline const Aws::String& GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    template<typename EncryptionTypeT = Aws::String>
    void SetEncryptionType(EncryptionTypeT&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::forward<EncryptionTypeT>(value); }
    template<typename EncryptionTypeT = Aws::String>
    DefaultServerSideEncryption& WithEncryptionType(EncryptionTypeT&& value) { SetEncryptionType(std::forward<EncryptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS encryption key. Only available if
     * the bucket <code>EncryptionType</code> is <code>aws:kms</code>.</p>
     */
    inline const Aws::String& GetKmsMasterKeyArn() const { return m_kmsMasterKeyArn; }
    inline bool KmsMasterKeyArnHasBeenSet() const { return m_kmsMasterKeyArnHasBeenSet; }
    template<typename KmsMasterKeyArnT = Aws::String>
    void SetKmsMasterKeyArn(KmsMasterKeyArnT&& value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn = std::forward<KmsMasterKeyArnT>(value); }
    template<typename KmsMasterKeyArnT = Aws::String>
    DefaultServerSideEncryption& WithKmsMasterKeyArn(KmsMasterKeyArnT&& value) { SetKmsMasterKeyArn(std::forward<KmsMasterKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsMasterKeyArn;
    bool m_kmsMasterKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
