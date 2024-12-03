/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/AuthenticationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/ConnectionType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/PhysicalConnectionRequirements.h>
#include <aws/datazone/model/ConnectionStatus.h>
#include <aws/datazone/model/ComputeEnvironments.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Glue connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueConnection">AWS
   * API Reference</a></p>
   */
  class GlueConnection
  {
  public:
    AWS_DATAZONE_API GlueConnection();
    AWS_DATAZONE_API GlueConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAthenaProperties() const{ return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    inline void SetAthenaProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = value; }
    inline void SetAthenaProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::move(value); }
    inline GlueConnection& WithAthenaProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetAthenaProperties(value); return *this;}
    inline GlueConnection& WithAthenaProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetAthenaProperties(std::move(value)); return *this;}
    inline GlueConnection& AddAthenaProperties(const Aws::String& key, const Aws::String& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, value); return *this; }
    inline GlueConnection& AddAthenaProperties(Aws::String&& key, const Aws::String& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddAthenaProperties(const Aws::String& key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddAthenaProperties(Aws::String&& key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnection& AddAthenaProperties(const char* key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddAthenaProperties(Aws::String&& key, const char* value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddAthenaProperties(const char* key, const char* value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the Amazon Web Services Glue
     * connection.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    inline void SetAuthenticationConfiguration(const AuthenticationConfiguration& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(AuthenticationConfiguration&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }
    inline GlueConnection& WithAuthenticationConfiguration(const AuthenticationConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}
    inline GlueConnection& WithAuthenticationConfiguration(AuthenticationConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compatible compute environments of the Amazon Web Services Glue
     * connection.</p>
     */
    inline const Aws::Vector<ComputeEnvironments>& GetCompatibleComputeEnvironments() const{ return m_compatibleComputeEnvironments; }
    inline bool CompatibleComputeEnvironmentsHasBeenSet() const { return m_compatibleComputeEnvironmentsHasBeenSet; }
    inline void SetCompatibleComputeEnvironments(const Aws::Vector<ComputeEnvironments>& value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments = value; }
    inline void SetCompatibleComputeEnvironments(Aws::Vector<ComputeEnvironments>&& value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments = std::move(value); }
    inline GlueConnection& WithCompatibleComputeEnvironments(const Aws::Vector<ComputeEnvironments>& value) { SetCompatibleComputeEnvironments(value); return *this;}
    inline GlueConnection& WithCompatibleComputeEnvironments(Aws::Vector<ComputeEnvironments>&& value) { SetCompatibleComputeEnvironments(std::move(value)); return *this;}
    inline GlueConnection& AddCompatibleComputeEnvironments(const ComputeEnvironments& value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments.push_back(value); return *this; }
    inline GlueConnection& AddCompatibleComputeEnvironments(ComputeEnvironments&& value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionProperties() const{ return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    inline void SetConnectionProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }
    inline void SetConnectionProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }
    inline GlueConnection& WithConnectionProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectionProperties(value); return *this;}
    inline GlueConnection& WithConnectionProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectionProperties(std::move(value)); return *this;}
    inline GlueConnection& AddConnectionProperties(const Aws::String& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    inline GlueConnection& AddConnectionProperties(Aws::String&& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddConnectionProperties(const Aws::String& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddConnectionProperties(Aws::String&& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnection& AddConnectionProperties(const char* key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddConnectionProperties(Aws::String&& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddConnectionProperties(const char* key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection schema version of the Amazon Web Services Glue connection.</p>
     */
    inline int GetConnectionSchemaVersion() const{ return m_connectionSchemaVersion; }
    inline bool ConnectionSchemaVersionHasBeenSet() const { return m_connectionSchemaVersionHasBeenSet; }
    inline void SetConnectionSchemaVersion(int value) { m_connectionSchemaVersionHasBeenSet = true; m_connectionSchemaVersion = value; }
    inline GlueConnection& WithConnectionSchemaVersion(int value) { SetConnectionSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Web Services Glue connection.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline GlueConnection& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline GlueConnection& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline GlueConnection& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GlueConnection& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline GlueConnection& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GlueConnection& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GlueConnection& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last validation time of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectionValidationTime() const{ return m_lastConnectionValidationTime; }
    inline bool LastConnectionValidationTimeHasBeenSet() const { return m_lastConnectionValidationTimeHasBeenSet; }
    inline void SetLastConnectionValidationTime(const Aws::Utils::DateTime& value) { m_lastConnectionValidationTimeHasBeenSet = true; m_lastConnectionValidationTime = value; }
    inline void SetLastConnectionValidationTime(Aws::Utils::DateTime&& value) { m_lastConnectionValidationTimeHasBeenSet = true; m_lastConnectionValidationTime = std::move(value); }
    inline GlueConnection& WithLastConnectionValidationTime(const Aws::Utils::DateTime& value) { SetLastConnectionValidationTime(value); return *this;}
    inline GlueConnection& WithLastConnectionValidationTime(Aws::Utils::DateTime&& value) { SetLastConnectionValidationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }
    inline GlueConnection& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}
    inline GlueConnection& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}
    inline GlueConnection& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the Amazon Web Services Glue connection was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline GlueConnection& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline GlueConnection& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match criteria of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const{ return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    inline void SetMatchCriteria(const Aws::Vector<Aws::String>& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }
    inline void SetMatchCriteria(Aws::Vector<Aws::String>&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }
    inline GlueConnection& WithMatchCriteria(const Aws::Vector<Aws::String>& value) { SetMatchCriteria(value); return *this;}
    inline GlueConnection& WithMatchCriteria(Aws::Vector<Aws::String>&& value) { SetMatchCriteria(std::move(value)); return *this;}
    inline GlueConnection& AddMatchCriteria(const Aws::String& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }
    inline GlueConnection& AddMatchCriteria(Aws::String&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(std::move(value)); return *this; }
    inline GlueConnection& AddMatchCriteria(const char* value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GlueConnection& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GlueConnection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GlueConnection& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical connection requirements of the Amazon Web Services Glue
     * connection.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const{ return m_physicalConnectionRequirements; }
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }
    inline void SetPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = value; }
    inline void SetPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::move(value); }
    inline GlueConnection& WithPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { SetPhysicalConnectionRequirements(value); return *this;}
    inline GlueConnection& WithPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { SetPhysicalConnectionRequirements(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPythonProperties() const{ return m_pythonProperties; }
    inline bool PythonPropertiesHasBeenSet() const { return m_pythonPropertiesHasBeenSet; }
    inline void SetPythonProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = value; }
    inline void SetPythonProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = std::move(value); }
    inline GlueConnection& WithPythonProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetPythonProperties(value); return *this;}
    inline GlueConnection& WithPythonProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetPythonProperties(std::move(value)); return *this;}
    inline GlueConnection& AddPythonProperties(const Aws::String& key, const Aws::String& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, value); return *this; }
    inline GlueConnection& AddPythonProperties(Aws::String&& key, const Aws::String& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddPythonProperties(const Aws::String& key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddPythonProperties(Aws::String&& key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnection& AddPythonProperties(const char* key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddPythonProperties(Aws::String&& key, const char* value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddPythonProperties(const char* key, const char* value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Spark properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSparkProperties() const{ return m_sparkProperties; }
    inline bool SparkPropertiesHasBeenSet() const { return m_sparkPropertiesHasBeenSet; }
    inline void SetSparkProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = value; }
    inline void SetSparkProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = std::move(value); }
    inline GlueConnection& WithSparkProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetSparkProperties(value); return *this;}
    inline GlueConnection& WithSparkProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetSparkProperties(std::move(value)); return *this;}
    inline GlueConnection& AddSparkProperties(const Aws::String& key, const Aws::String& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, value); return *this; }
    inline GlueConnection& AddSparkProperties(Aws::String&& key, const Aws::String& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddSparkProperties(const Aws::String& key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddSparkProperties(Aws::String&& key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnection& AddSparkProperties(const char* key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnection& AddSparkProperties(Aws::String&& key, const char* value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnection& AddSparkProperties(const char* key, const char* value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Web Services Glue connection.</p>
     */
    inline const ConnectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GlueConnection& WithStatus(const ConnectionStatus& value) { SetStatus(value); return *this;}
    inline GlueConnection& WithStatus(ConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline GlueConnection& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GlueConnection& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GlueConnection& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_athenaProperties;
    bool m_athenaPropertiesHasBeenSet = false;

    AuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    Aws::Vector<ComputeEnvironments> m_compatibleComputeEnvironments;
    bool m_compatibleComputeEnvironmentsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;

    int m_connectionSchemaVersion;
    bool m_connectionSchemaVersionHasBeenSet = false;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastConnectionValidationTime;
    bool m_lastConnectionValidationTimeHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchCriteria;
    bool m_matchCriteriaHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PhysicalConnectionRequirements m_physicalConnectionRequirements;
    bool m_physicalConnectionRequirementsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pythonProperties;
    bool m_pythonPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sparkProperties;
    bool m_sparkPropertiesHasBeenSet = false;

    ConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
