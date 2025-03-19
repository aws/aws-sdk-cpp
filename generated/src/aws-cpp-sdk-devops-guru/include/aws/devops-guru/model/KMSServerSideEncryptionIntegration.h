/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/OptInStatus.h>
#include <aws/devops-guru/model/ServerSideEncryptionType.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about the KMS encryption used with DevOps Guru. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/KMSServerSideEncryptionIntegration">AWS
   * API Reference</a></p>
   */
  class KMSServerSideEncryptionIntegration
  {
  public:
    AWS_DEVOPSGURU_API KMSServerSideEncryptionIntegration() = default;
    AWS_DEVOPSGURU_API KMSServerSideEncryptionIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API KMSServerSideEncryptionIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the specified KMS key. </p> <p>To specify a KMS key, use its key
     * ID, key ARN, alias name, or alias ARN. When using an alias name, prefix it with
     * "alias/". If you specify a predefined Amazon Web Services alias (an Amazon Web
     * Services alias with no key ID), Amazon Web Services KMS associates the alias
     * with an Amazon Web Services managed key and returns its KeyId and Arn in the
     * response. To specify a KMS key in a different Amazon Web Services account, you
     * must use the key ARN or alias ARN.</p> <p>For example: </p> <p>Key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> <p>Key ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * <p>Alias name: alias/ExampleAlias</p> <p>Alias ARN:
     * arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</p>
     */
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    KMSServerSideEncryptionIntegration& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies if DevOps Guru is enabled for customer managed keys. </p>
     */
    inline OptInStatus GetOptInStatus() const { return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(OptInStatus value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline KMSServerSideEncryptionIntegration& WithOptInStatus(OptInStatus value) { SetOptInStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of KMS key used. Customer managed keys are the KMS keys that you
     * create. Amazon Web Services owned keys are keys that are owned and managed by
     * DevOps Guru. </p>
     */
    inline ServerSideEncryptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ServerSideEncryptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline KMSServerSideEncryptionIntegration& WithType(ServerSideEncryptionType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    OptInStatus m_optInStatus{OptInStatus::NOT_SET};
    bool m_optInStatusHasBeenSet = false;

    ServerSideEncryptionType m_type{ServerSideEncryptionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
