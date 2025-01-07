/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/AuthenticationConfigurationInput.h>
#include <aws/datazone/model/GlueConnectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/PhysicalConnectionRequirements.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The Amazon Web Services Glue connecton input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueConnectionInput">AWS
   * API Reference</a></p>
   */
  class GlueConnectionInput
  {
  public:
    AWS_DATAZONE_API GlueConnectionInput();
    AWS_DATAZONE_API GlueConnectionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueConnectionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Athena properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAthenaProperties() const{ return m_athenaProperties; }
    inline bool AthenaPropertiesHasBeenSet() const { return m_athenaPropertiesHasBeenSet; }
    inline void SetAthenaProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = value; }
    inline void SetAthenaProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties = std::move(value); }
    inline GlueConnectionInput& WithAthenaProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetAthenaProperties(value); return *this;}
    inline GlueConnectionInput& WithAthenaProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetAthenaProperties(std::move(value)); return *this;}
    inline GlueConnectionInput& AddAthenaProperties(const Aws::String& key, const Aws::String& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, value); return *this; }
    inline GlueConnectionInput& AddAthenaProperties(Aws::String&& key, const Aws::String& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddAthenaProperties(const Aws::String& key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddAthenaProperties(Aws::String&& key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnectionInput& AddAthenaProperties(const char* key, Aws::String&& value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddAthenaProperties(Aws::String&& key, const char* value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddAthenaProperties(const char* key, const char* value) { m_athenaPropertiesHasBeenSet = true; m_athenaProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the Amazon Web Services Glue
     * connection.</p>
     */
    inline const AuthenticationConfigurationInput& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    inline void SetAuthenticationConfiguration(const AuthenticationConfigurationInput& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(AuthenticationConfigurationInput&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }
    inline GlueConnectionInput& WithAuthenticationConfiguration(const AuthenticationConfigurationInput& value) { SetAuthenticationConfiguration(value); return *this;}
    inline GlueConnectionInput& WithAuthenticationConfiguration(AuthenticationConfigurationInput&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionProperties() const{ return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    inline void SetConnectionProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }
    inline void SetConnectionProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }
    inline GlueConnectionInput& WithConnectionProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectionProperties(value); return *this;}
    inline GlueConnectionInput& WithConnectionProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectionProperties(std::move(value)); return *this;}
    inline GlueConnectionInput& AddConnectionProperties(const Aws::String& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    inline GlueConnectionInput& AddConnectionProperties(Aws::String&& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddConnectionProperties(const Aws::String& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddConnectionProperties(Aws::String&& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnectionInput& AddConnectionProperties(const char* key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddConnectionProperties(Aws::String&& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddConnectionProperties(const char* key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection type of the Amazon Web Services Glue connection.</p>
     */
    inline const GlueConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const GlueConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(GlueConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline GlueConnectionInput& WithConnectionType(const GlueConnectionType& value) { SetConnectionType(value); return *this;}
    inline GlueConnectionInput& WithConnectionType(GlueConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
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
    inline GlueConnectionInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GlueConnectionInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GlueConnectionInput& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match criteria of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::String& GetMatchCriteria() const{ return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    inline void SetMatchCriteria(const Aws::String& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }
    inline void SetMatchCriteria(Aws::String&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }
    inline void SetMatchCriteria(const char* value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.assign(value); }
    inline GlueConnectionInput& WithMatchCriteria(const Aws::String& value) { SetMatchCriteria(value); return *this;}
    inline GlueConnectionInput& WithMatchCriteria(Aws::String&& value) { SetMatchCriteria(std::move(value)); return *this;}
    inline GlueConnectionInput& WithMatchCriteria(const char* value) { SetMatchCriteria(value); return *this;}
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
    inline GlueConnectionInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GlueConnectionInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GlueConnectionInput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical connection requirements for the Amazon Web Services Glue
     * connection.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const{ return m_physicalConnectionRequirements; }
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }
    inline void SetPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = value; }
    inline void SetPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::move(value); }
    inline GlueConnectionInput& WithPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { SetPhysicalConnectionRequirements(value); return *this;}
    inline GlueConnectionInput& WithPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { SetPhysicalConnectionRequirements(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPythonProperties() const{ return m_pythonProperties; }
    inline bool PythonPropertiesHasBeenSet() const { return m_pythonPropertiesHasBeenSet; }
    inline void SetPythonProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = value; }
    inline void SetPythonProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties = std::move(value); }
    inline GlueConnectionInput& WithPythonProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetPythonProperties(value); return *this;}
    inline GlueConnectionInput& WithPythonProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetPythonProperties(std::move(value)); return *this;}
    inline GlueConnectionInput& AddPythonProperties(const Aws::String& key, const Aws::String& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, value); return *this; }
    inline GlueConnectionInput& AddPythonProperties(Aws::String&& key, const Aws::String& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddPythonProperties(const Aws::String& key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddPythonProperties(Aws::String&& key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnectionInput& AddPythonProperties(const char* key, Aws::String&& value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddPythonProperties(Aws::String&& key, const char* value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddPythonProperties(const char* key, const char* value) { m_pythonPropertiesHasBeenSet = true; m_pythonProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Spark properties of the Amazon Web Services Glue connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSparkProperties() const{ return m_sparkProperties; }
    inline bool SparkPropertiesHasBeenSet() const { return m_sparkPropertiesHasBeenSet; }
    inline void SetSparkProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = value; }
    inline void SetSparkProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties = std::move(value); }
    inline GlueConnectionInput& WithSparkProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetSparkProperties(value); return *this;}
    inline GlueConnectionInput& WithSparkProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetSparkProperties(std::move(value)); return *this;}
    inline GlueConnectionInput& AddSparkProperties(const Aws::String& key, const Aws::String& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, value); return *this; }
    inline GlueConnectionInput& AddSparkProperties(Aws::String&& key, const Aws::String& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddSparkProperties(const Aws::String& key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddSparkProperties(Aws::String&& key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnectionInput& AddSparkProperties(const char* key, Aws::String&& value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionInput& AddSparkProperties(Aws::String&& key, const char* value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionInput& AddSparkProperties(const char* key, const char* value) { m_sparkPropertiesHasBeenSet = true; m_sparkProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Speciefies whether to validate credentials of the Amazon Web Services Glue
     * connection.</p>
     */
    inline bool GetValidateCredentials() const{ return m_validateCredentials; }
    inline bool ValidateCredentialsHasBeenSet() const { return m_validateCredentialsHasBeenSet; }
    inline void SetValidateCredentials(bool value) { m_validateCredentialsHasBeenSet = true; m_validateCredentials = value; }
    inline GlueConnectionInput& WithValidateCredentials(bool value) { SetValidateCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciefies whether to validate for compute environments of the Amazon Web
     * Services Glue connection.</p>
     */
    inline const Aws::Vector<ComputeEnvironments>& GetValidateForComputeEnvironments() const{ return m_validateForComputeEnvironments; }
    inline bool ValidateForComputeEnvironmentsHasBeenSet() const { return m_validateForComputeEnvironmentsHasBeenSet; }
    inline void SetValidateForComputeEnvironments(const Aws::Vector<ComputeEnvironments>& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments = value; }
    inline void SetValidateForComputeEnvironments(Aws::Vector<ComputeEnvironments>&& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments = std::move(value); }
    inline GlueConnectionInput& WithValidateForComputeEnvironments(const Aws::Vector<ComputeEnvironments>& value) { SetValidateForComputeEnvironments(value); return *this;}
    inline GlueConnectionInput& WithValidateForComputeEnvironments(Aws::Vector<ComputeEnvironments>&& value) { SetValidateForComputeEnvironments(std::move(value)); return *this;}
    inline GlueConnectionInput& AddValidateForComputeEnvironments(const ComputeEnvironments& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments.push_back(value); return *this; }
    inline GlueConnectionInput& AddValidateForComputeEnvironments(ComputeEnvironments&& value) { m_validateForComputeEnvironmentsHasBeenSet = true; m_validateForComputeEnvironments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_athenaProperties;
    bool m_athenaPropertiesHasBeenSet = false;

    AuthenticationConfigurationInput m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;

    GlueConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_matchCriteria;
    bool m_matchCriteriaHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PhysicalConnectionRequirements m_physicalConnectionRequirements;
    bool m_physicalConnectionRequirementsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pythonProperties;
    bool m_pythonPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sparkProperties;
    bool m_sparkPropertiesHasBeenSet = false;

    bool m_validateCredentials;
    bool m_validateCredentialsHasBeenSet = false;

    Aws::Vector<ComputeEnvironments> m_validateForComputeEnvironments;
    bool m_validateForComputeEnvironmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
