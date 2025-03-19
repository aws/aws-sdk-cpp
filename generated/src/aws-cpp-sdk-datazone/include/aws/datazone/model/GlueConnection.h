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
    AWS_DATAZONE_API GlueConnection() = default;
    AWS_DATAZONE_API GlueConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAthenaProperties() const { return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    template<typename AthenaPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetAthenaProperties(AthenaPropertiesT&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::forward<AthenaPropertiesT>(value); }
    template<typename AthenaPropertiesT = Aws::Map<Aws::String, Aws::String>>
    GlueConnection& WithAthenaProperties(AthenaPropertiesT&& value) { SetAthenaProperties(std::forward<AthenaPropertiesT>(value)); return *this;}
    template<typename AthenaPropertiesKeyT = Aws::String, typename AthenaPropertiesValueT = Aws::String>
    GlueConnection& AddAthenaProperties(AthenaPropertiesKeyT&& key, AthenaPropertiesValueT&& value) {
      m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::forward<AthenaPropertiesKeyT>(key), std::forward<AthenaPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the Amazon Web Services Glue
     * connection.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    GlueConnection& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compatible compute environments of the Amazon Web Services Glue
     * connection.</p>
     */
    inline const Aws::Vector<ComputeEnvironments>& GetCompatibleComputeEnvironments() const { return m_compatibleComputeEnvironments; }
    inline bool CompatibleComputeEnvironmentsHasBeenSet() const { return m_compatibleComputeEnvironmentsHasBeenSet; }
    template<typename CompatibleComputeEnvironmentsT = Aws::Vector<ComputeEnvironments>>
    void SetCompatibleComputeEnvironments(CompatibleComputeEnvironmentsT&& value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments = std::forward<CompatibleComputeEnvironmentsT>(value); }
    template<typename CompatibleComputeEnvironmentsT = Aws::Vector<ComputeEnvironments>>
    GlueConnection& WithCompatibleComputeEnvironments(CompatibleComputeEnvironmentsT&& value) { SetCompatibleComputeEnvironments(std::forward<CompatibleComputeEnvironmentsT>(value)); return *this;}
    inline GlueConnection& AddCompatibleComputeEnvironments(ComputeEnvironments value) { m_compatibleComputeEnvironmentsHasBeenSet = true; m_compatibleComputeEnvironments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionProperties() const { return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    template<typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    GlueConnection& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    template<typename ConnectionPropertiesKeyT = Aws::String, typename ConnectionPropertiesValueT = Aws::String>
    GlueConnection& AddConnectionProperties(ConnectionPropertiesKeyT&& key, ConnectionPropertiesValueT&& value) {
      m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::forward<ConnectionPropertiesKeyT>(key), std::forward<ConnectionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The connection schema version of the Amazon Web Services Glue connection.</p>
     */
    inline int GetConnectionSchemaVersion() const { return m_connectionSchemaVersion; }
    inline bool ConnectionSchemaVersionHasBeenSet() const { return m_connectionSchemaVersionHasBeenSet; }
    inline void SetConnectionSchemaVersion(int value) { m_connectionSchemaVersionHasBeenSet = true; m_connectionSchemaVersion = value; }
    inline GlueConnection& WithConnectionSchemaVersion(int value) { SetConnectionSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Web Services Glue connection.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline GlueConnection& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GlueConnection& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GlueConnection& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last validation time of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastConnectionValidationTime() const { return m_lastConnectionValidationTime; }
    inline bool LastConnectionValidationTimeHasBeenSet() const { return m_lastConnectionValidationTimeHasBeenSet; }
    template<typename LastConnectionValidationTimeT = Aws::Utils::DateTime>
    void SetLastConnectionValidationTime(LastConnectionValidationTimeT&& value) { m_lastConnectionValidationTimeHasBeenSet = true; m_lastConnectionValidationTime = std::forward<LastConnectionValidationTimeT>(value); }
    template<typename LastConnectionValidationTimeT = Aws::Utils::DateTime>
    GlueConnection& WithLastConnectionValidationTime(LastConnectionValidationTimeT&& value) { SetLastConnectionValidationTime(std::forward<LastConnectionValidationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    GlueConnection& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the Amazon Web Services Glue connection was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    GlueConnection& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match criteria of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const { return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    template<typename MatchCriteriaT = Aws::Vector<Aws::String>>
    void SetMatchCriteria(MatchCriteriaT&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::forward<MatchCriteriaT>(value); }
    template<typename MatchCriteriaT = Aws::Vector<Aws::String>>
    GlueConnection& WithMatchCriteria(MatchCriteriaT&& value) { SetMatchCriteria(std::forward<MatchCriteriaT>(value)); return *this;}
    template<typename MatchCriteriaT = Aws::String>
    GlueConnection& AddMatchCriteria(MatchCriteriaT&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.emplace_back(std::forward<MatchCriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GlueConnection& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical connection requirements of the Amazon Web Services Glue
     * connection.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const { return m_physicalConnectionRequirements; }
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }
    template<typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
    void SetPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::forward<PhysicalConnectionRequirementsT>(value); }
    template<typename PhysicalConnectionRequirementsT = PhysicalConnectionRequirements>
    GlueConnection& WithPhysicalConnectionRequirements(PhysicalConnectionRequirementsT&& value) { SetPhysicalConnectionRequirements(std::forward<PhysicalConnectionRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPythonProperties() const { return m_pythonProperties; }
    inline bool PythonPropertiesHasBeenSet() const { return m_pythonPropertiesHasBeenSet; }
    template<typename PythonPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetPythonProperties(PythonPropertiesT&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = std::forward<PythonPropertiesT>(value); }
    template<typename PythonPropertiesT = Aws::Map<Aws::String, Aws::String>>
    GlueConnection& WithPythonProperties(PythonPropertiesT&& value) { SetPythonProperties(std::forward<PythonPropertiesT>(value)); return *this;}
    template<typename PythonPropertiesKeyT = Aws::String, typename PythonPropertiesValueT = Aws::String>
    GlueConnection& AddPythonProperties(PythonPropertiesKeyT&& key, PythonPropertiesValueT&& value) {
      m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::forward<PythonPropertiesKeyT>(key), std::forward<PythonPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Spark properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSparkProperties() const { return m_sparkProperties; }
    inline bool SparkPropertiesHasBeenSet() const { return m_sparkPropertiesHasBeenSet; }
    template<typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetSparkProperties(SparkPropertiesT&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = std::forward<SparkPropertiesT>(value); }
    template<typename SparkPropertiesT = Aws::Map<Aws::String, Aws::String>>
    GlueConnection& WithSparkProperties(SparkPropertiesT&& value) { SetSparkProperties(std::forward<SparkPropertiesT>(value)); return *this;}
    template<typename SparkPropertiesKeyT = Aws::String, typename SparkPropertiesValueT = Aws::String>
    GlueConnection& AddSparkProperties(SparkPropertiesKeyT&& key, SparkPropertiesValueT&& value) {
      m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::forward<SparkPropertiesKeyT>(key), std::forward<SparkPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Web Services Glue connection.</p>
     */
    inline ConnectionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConnectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GlueConnection& WithStatus(ConnectionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GlueConnection& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
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

    int m_connectionSchemaVersion{0};
    bool m_connectionSchemaVersionHasBeenSet = false;

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastConnectionValidationTime{};
    bool m_lastConnectionValidationTimeHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
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

    ConnectionStatus m_status{ConnectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
