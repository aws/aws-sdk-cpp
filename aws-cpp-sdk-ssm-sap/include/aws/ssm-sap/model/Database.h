/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/DatabaseType.h>
#include <aws/ssm-sap/model/DatabaseStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Database">AWS
   * API Reference</a></p>
   */
  class Database
  {
  public:
    AWS_SSMSAP_API Database();
    AWS_SSMSAP_API Database(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Database& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p/>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p/>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p/>
     */
    inline Database& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Database& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * <p/>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p/>
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * <p/>
     */
    inline Database& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Database& WithComponentId(const char* value) { SetComponentId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentials() const{ return m_credentials; }

    /**
     * <p/>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCredentials(const Aws::Vector<ApplicationCredential>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p/>
     */
    inline void SetCredentials(Aws::Vector<ApplicationCredential>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p/>
     */
    inline Database& WithCredentials(const Aws::Vector<ApplicationCredential>& value) { SetCredentials(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithCredentials(Aws::Vector<ApplicationCredential>&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Database& AddCredentials(const ApplicationCredential& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline Database& AddCredentials(ApplicationCredential&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p/>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p/>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p/>
     */
    inline Database& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Database& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


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
    inline Database& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Database& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p/>
     */
    inline const DatabaseType& GetDatabaseType() const{ return m_databaseType; }

    /**
     * <p/>
     */
    inline bool DatabaseTypeHasBeenSet() const { return m_databaseTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDatabaseType(const DatabaseType& value) { m_databaseTypeHasBeenSet = true; m_databaseType = value; }

    /**
     * <p/>
     */
    inline void SetDatabaseType(DatabaseType&& value) { m_databaseTypeHasBeenSet = true; m_databaseType = std::move(value); }

    /**
     * <p/>
     */
    inline Database& WithDatabaseType(const DatabaseType& value) { SetDatabaseType(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithDatabaseType(DatabaseType&& value) { SetDatabaseType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p/>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p/>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p/>
     */
    inline Database& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Database& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p/>
     */
    inline const DatabaseStatus& GetStatus() const{ return m_status; }

    /**
     * <p/>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStatus(const DatabaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p/>
     */
    inline void SetStatus(DatabaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p/>
     */
    inline Database& WithStatus(const DatabaseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithStatus(DatabaseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetPrimaryHost() const{ return m_primaryHost; }

    /**
     * <p/>
     */
    inline bool PrimaryHostHasBeenSet() const { return m_primaryHostHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPrimaryHost(const Aws::String& value) { m_primaryHostHasBeenSet = true; m_primaryHost = value; }

    /**
     * <p/>
     */
    inline void SetPrimaryHost(Aws::String&& value) { m_primaryHostHasBeenSet = true; m_primaryHost = std::move(value); }

    /**
     * <p/>
     */
    inline void SetPrimaryHost(const char* value) { m_primaryHostHasBeenSet = true; m_primaryHost.assign(value); }

    /**
     * <p/>
     */
    inline Database& WithPrimaryHost(const Aws::String& value) { SetPrimaryHost(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithPrimaryHost(Aws::String&& value) { SetPrimaryHost(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Database& WithPrimaryHost(const char* value) { SetPrimaryHost(value); return *this;}


    /**
     * <p/>
     */
    inline int GetSQLPort() const{ return m_sQLPort; }

    /**
     * <p/>
     */
    inline bool SQLPortHasBeenSet() const { return m_sQLPortHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSQLPort(int value) { m_sQLPortHasBeenSet = true; m_sQLPort = value; }

    /**
     * <p/>
     */
    inline Database& WithSQLPort(int value) { SetSQLPort(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p/>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p/>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p/>
     */
    inline Database& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p/>
     */
    inline Database& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    DatabaseType m_databaseType;
    bool m_databaseTypeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DatabaseStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_primaryHost;
    bool m_primaryHostHasBeenSet = false;

    int m_sQLPort;
    bool m_sQLPortHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
