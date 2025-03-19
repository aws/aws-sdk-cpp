/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{

  /**
   * <p>Contains the secret managed by Amazon DocumentDB in Amazon Web Services
   * Secrets Manager for the master user password.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ClusterMasterUserSecret">AWS
   * API Reference</a></p>
   */
  class ClusterMasterUserSecret
  {
  public:
    AWS_DOCDB_API ClusterMasterUserSecret() = default;
    AWS_DOCDB_API ClusterMasterUserSecret(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API ClusterMasterUserSecret& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    ClusterMasterUserSecret& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the secret.</p> <p>The possible status values include the
     * following:</p> <ul> <li> <p>creating - The secret is being created.</p> </li>
     * <li> <p>active - The secret is available for normal use and rotation.</p> </li>
     * <li> <p>rotating - The secret is being rotated.</p> </li> <li> <p>impaired - The
     * secret can be used to access database credentials, but it can't be rotated. A
     * secret might have this status if, for example, permissions are changed so that
     * Amazon DocumentDB can no longer access either the secret or the KMS key for the
     * secret.</p> <p>When a secret has this status, you can correct the condition that
     * caused the status. Alternatively, modify the instance to turn off automatic
     * management of database credentials, and then modify the instance again to turn
     * on automatic management of database credentials.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretStatus() const { return m_secretStatus; }
    inline bool SecretStatusHasBeenSet() const { return m_secretStatusHasBeenSet; }
    template<typename SecretStatusT = Aws::String>
    void SetSecretStatus(SecretStatusT&& value) { m_secretStatusHasBeenSet = true; m_secretStatus = std::forward<SecretStatusT>(value); }
    template<typename SecretStatusT = Aws::String>
    ClusterMasterUserSecret& WithSecretStatus(SecretStatusT&& value) { SetSecretStatus(std::forward<SecretStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier that is used to encrypt the
     * secret.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ClusterMasterUserSecret& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_secretStatus;
    bool m_secretStatusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
