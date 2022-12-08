/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/CredentialType.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ApplicationCredential">AWS
   * API Reference</a></p>
   */
  class ApplicationCredential
  {
  public:
    AWS_SSMSAP_API ApplicationCredential();
    AWS_SSMSAP_API ApplicationCredential(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API ApplicationCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p/>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p/>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p/>
     */
    inline ApplicationCredential& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p/>
     */
    inline ApplicationCredential& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ApplicationCredential& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p/>
     */
    inline const CredentialType& GetCredentialType() const{ return m_credentialType; }

    /**
     * <p/>
     */
    inline bool CredentialTypeHasBeenSet() const { return m_credentialTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCredentialType(const CredentialType& value) { m_credentialTypeHasBeenSet = true; m_credentialType = value; }

    /**
     * <p/>
     */
    inline void SetCredentialType(CredentialType&& value) { m_credentialTypeHasBeenSet = true; m_credentialType = std::move(value); }

    /**
     * <p/>
     */
    inline ApplicationCredential& WithCredentialType(const CredentialType& value) { SetCredentialType(value); return *this;}

    /**
     * <p/>
     */
    inline ApplicationCredential& WithCredentialType(CredentialType&& value) { SetCredentialType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p/>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p/>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p/>
     */
    inline ApplicationCredential& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p/>
     */
    inline ApplicationCredential& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ApplicationCredential& WithSecretId(const char* value) { SetSecretId(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    CredentialType m_credentialType;
    bool m_credentialTypeHasBeenSet = false;

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
