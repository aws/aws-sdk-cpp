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
   * <p>Specifies using Kerberos authentication settings for use with
   * DMS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/KerberosAuthenticationSettings">AWS
   * API Reference</a></p>
   */
  class KerberosAuthenticationSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API KerberosAuthenticationSettings();
    AWS_DATABASEMIGRATIONSERVICE_API KerberosAuthenticationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API KerberosAuthenticationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the secret ID of the key cache for the replication instance.</p>
     */
    inline const Aws::String& GetKeyCacheSecretId() const{ return m_keyCacheSecretId; }
    inline bool KeyCacheSecretIdHasBeenSet() const { return m_keyCacheSecretIdHasBeenSet; }
    inline void SetKeyCacheSecretId(const Aws::String& value) { m_keyCacheSecretIdHasBeenSet = true; m_keyCacheSecretId = value; }
    inline void SetKeyCacheSecretId(Aws::String&& value) { m_keyCacheSecretIdHasBeenSet = true; m_keyCacheSecretId = std::move(value); }
    inline void SetKeyCacheSecretId(const char* value) { m_keyCacheSecretIdHasBeenSet = true; m_keyCacheSecretId.assign(value); }
    inline KerberosAuthenticationSettings& WithKeyCacheSecretId(const Aws::String& value) { SetKeyCacheSecretId(value); return *this;}
    inline KerberosAuthenticationSettings& WithKeyCacheSecretId(Aws::String&& value) { SetKeyCacheSecretId(std::move(value)); return *this;}
    inline KerberosAuthenticationSettings& WithKeyCacheSecretId(const char* value) { SetKeyCacheSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the IAM role that grants Amazon
     * Web Services DMS access to the secret containing key cache file for the
     * replication instance.</p>
     */
    inline const Aws::String& GetKeyCacheSecretIamArn() const{ return m_keyCacheSecretIamArn; }
    inline bool KeyCacheSecretIamArnHasBeenSet() const { return m_keyCacheSecretIamArnHasBeenSet; }
    inline void SetKeyCacheSecretIamArn(const Aws::String& value) { m_keyCacheSecretIamArnHasBeenSet = true; m_keyCacheSecretIamArn = value; }
    inline void SetKeyCacheSecretIamArn(Aws::String&& value) { m_keyCacheSecretIamArnHasBeenSet = true; m_keyCacheSecretIamArn = std::move(value); }
    inline void SetKeyCacheSecretIamArn(const char* value) { m_keyCacheSecretIamArnHasBeenSet = true; m_keyCacheSecretIamArn.assign(value); }
    inline KerberosAuthenticationSettings& WithKeyCacheSecretIamArn(const Aws::String& value) { SetKeyCacheSecretIamArn(value); return *this;}
    inline KerberosAuthenticationSettings& WithKeyCacheSecretIamArn(Aws::String&& value) { SetKeyCacheSecretIamArn(std::move(value)); return *this;}
    inline KerberosAuthenticationSettings& WithKeyCacheSecretIamArn(const char* value) { SetKeyCacheSecretIamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the secret that stores the key cache file required for
     * kerberos authentication of the replication instance.</p>
     */
    inline const Aws::String& GetKrb5FileContents() const{ return m_krb5FileContents; }
    inline bool Krb5FileContentsHasBeenSet() const { return m_krb5FileContentsHasBeenSet; }
    inline void SetKrb5FileContents(const Aws::String& value) { m_krb5FileContentsHasBeenSet = true; m_krb5FileContents = value; }
    inline void SetKrb5FileContents(Aws::String&& value) { m_krb5FileContentsHasBeenSet = true; m_krb5FileContents = std::move(value); }
    inline void SetKrb5FileContents(const char* value) { m_krb5FileContentsHasBeenSet = true; m_krb5FileContents.assign(value); }
    inline KerberosAuthenticationSettings& WithKrb5FileContents(const Aws::String& value) { SetKrb5FileContents(value); return *this;}
    inline KerberosAuthenticationSettings& WithKrb5FileContents(Aws::String&& value) { SetKrb5FileContents(std::move(value)); return *this;}
    inline KerberosAuthenticationSettings& WithKrb5FileContents(const char* value) { SetKrb5FileContents(value); return *this;}
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
