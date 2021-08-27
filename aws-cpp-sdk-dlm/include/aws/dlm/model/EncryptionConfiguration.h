/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies the encryption settings for shared snapshots that are copied across
   * Regions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_DLM_API EncryptionConfiguration
  {
  public:
    EncryptionConfiguration();
    EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>To encrypt a copy of an unencrypted snapshot when encryption by default is
     * not enabled, enable encryption using this parameter. Copies of encrypted
     * snapshots are encrypted, even if this parameter is false or when encryption by
     * default is not enabled.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot when encryption by default is
     * not enabled, enable encryption using this parameter. Copies of encrypted
     * snapshots are encrypted, even if this parameter is false or when encryption by
     * default is not enabled.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot when encryption by default is
     * not enabled, enable encryption using this parameter. Copies of encrypted
     * snapshots are encrypted, even if this parameter is false or when encryption by
     * default is not enabled.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>To encrypt a copy of an unencrypted snapshot when encryption by default is
     * not enabled, enable encryption using this parameter. Copies of encrypted
     * snapshots are encrypted, even if this parameter is false or when encryption by
     * default is not enabled.</p>
     */
    inline EncryptionConfiguration& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline const Aws::String& GetCmkArn() const{ return m_cmkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline bool CmkArnHasBeenSet() const { return m_cmkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline void SetCmkArn(const Aws::String& value) { m_cmkArnHasBeenSet = true; m_cmkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline void SetCmkArn(Aws::String&& value) { m_cmkArnHasBeenSet = true; m_cmkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline void SetCmkArn(const char* value) { m_cmkArnHasBeenSet = true; m_cmkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline EncryptionConfiguration& WithCmkArn(const Aws::String& value) { SetCmkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline EncryptionConfiguration& WithCmkArn(Aws::String&& value) { SetCmkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS KMS customer master key (CMK) to
     * use for EBS encryption. If this parameter is not specified, your AWS managed CMK
     * for EBS is used.</p>
     */
    inline EncryptionConfiguration& WithCmkArn(const char* value) { SetCmkArn(value); return *this;}

  private:

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_cmkArn;
    bool m_cmkArnHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
