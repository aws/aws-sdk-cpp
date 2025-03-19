/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Specifies the settings required for kerberos authentication when creating the
   * replication instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/KerberosAuthenticationSettings">AWS
   * API Reference</a></p>
   */
  class KerberosAuthenticationSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API KerberosAuthenticationSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API KerberosAuthenticationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API KerberosAuthenticationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ID of the secret that stores the key cache file required for
     * kerberos authentication.</p>
     */
    inline const Aws::String& GetKeyCacheSecretId() const { return m_keyCacheSecretId; }
    inline bool KeyCacheSecretIdHasBeenSet() const { return m_keyCacheSecretIdHasBeenSet; }
    template<typename KeyCacheSecretIdT = Aws::String>
    void SetKeyCacheSecretId(KeyCacheSecretIdT&& value) { m_keyCacheSecretIdHasBeenSet = true; m_keyCacheSecretId = std::forward<KeyCacheSecretIdT>(value); }
    template<typename KeyCacheSecretIdT = Aws::String>
    KerberosAuthenticationSettings& WithKeyCacheSecretId(KeyCacheSecretIdT&& value) { SetKeyCacheSecretId(std::forward<KeyCacheSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM role that grants Amazon
     * Web Services DMS access to the secret containing key cache file for the kerberos
     * authentication.</p>
     */
    inline const Aws::String& GetKeyCacheSecretIamArn() const { return m_keyCacheSecretIamArn; }
    inline bool KeyCacheSecretIamArnHasBeenSet() const { return m_keyCacheSecretIamArnHasBeenSet; }
    template<typename KeyCacheSecretIamArnT = Aws::String>
    void SetKeyCacheSecretIamArn(KeyCacheSecretIamArnT&& value) { m_keyCacheSecretIamArnHasBeenSet = true; m_keyCacheSecretIamArn = std::forward<KeyCacheSecretIamArnT>(value); }
    template<typename KeyCacheSecretIamArnT = Aws::String>
    KerberosAuthenticationSettings& WithKeyCacheSecretIamArn(KeyCacheSecretIamArnT&& value) { SetKeyCacheSecretIamArn(std::forward<KeyCacheSecretIamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the contents of krb5 configuration file required for kerberos
     * authentication.</p>
     */
    inline const Aws::String& GetKrb5FileContents() const { return m_krb5FileContents; }
    inline bool Krb5FileContentsHasBeenSet() const { return m_krb5FileContentsHasBeenSet; }
    template<typename Krb5FileContentsT = Aws::String>
    void SetKrb5FileContents(Krb5FileContentsT&& value) { m_krb5FileContentsHasBeenSet = true; m_krb5FileContents = std::forward<Krb5FileContentsT>(value); }
    template<typename Krb5FileContentsT = Aws::String>
    KerberosAuthenticationSettings& WithKrb5FileContents(Krb5FileContentsT&& value) { SetKrb5FileContents(std::forward<Krb5FileContentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyCacheSecretId;
    bool m_keyCacheSecretIdHasBeenSet = false;

    Aws::String m_keyCacheSecretIamArn;
    bool m_keyCacheSecretIamArnHasBeenSet = false;

    Aws::String m_krb5FileContents;
    bool m_krb5FileContentsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
