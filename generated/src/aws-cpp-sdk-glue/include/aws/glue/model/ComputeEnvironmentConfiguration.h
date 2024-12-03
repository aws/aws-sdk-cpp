/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ComputeEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/AuthenticationType.h>
#include <aws/glue/model/Property.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>An object containing configuration for a compute environment (such as Spark,
   * Python or Athena) returned by the <code>DescribeConnectionType</code>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ComputeEnvironmentConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeEnvironmentConfiguration
  {
  public:
    AWS_GLUE_API ComputeEnvironmentConfiguration();
    AWS_GLUE_API ComputeEnvironmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ComputeEnvironmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the compute environment configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ComputeEnvironmentConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ComputeEnvironmentConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the compute environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ComputeEnvironmentConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ComputeEnvironmentConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of compute environment.</p>
     */
    inline const ComputeEnvironment& GetComputeEnvironment() const{ return m_computeEnvironment; }
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }
    inline void SetComputeEnvironment(const ComputeEnvironment& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }
    inline void SetComputeEnvironment(ComputeEnvironment&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = std::move(value); }
    inline ComputeEnvironmentConfiguration& WithComputeEnvironment(const ComputeEnvironment& value) { SetComputeEnvironment(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithComputeEnvironment(ComputeEnvironment&& value) { SetComputeEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported authentication types for the compute environment.</p>
     */
    inline const Aws::Vector<AuthenticationType>& GetSupportedAuthenticationTypes() const{ return m_supportedAuthenticationTypes; }
    inline bool SupportedAuthenticationTypesHasBeenSet() const { return m_supportedAuthenticationTypesHasBeenSet; }
    inline void SetSupportedAuthenticationTypes(const Aws::Vector<AuthenticationType>& value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes = value; }
    inline void SetSupportedAuthenticationTypes(Aws::Vector<AuthenticationType>&& value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes = std::move(value); }
    inline ComputeEnvironmentConfiguration& WithSupportedAuthenticationTypes(const Aws::Vector<AuthenticationType>& value) { SetSupportedAuthenticationTypes(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithSupportedAuthenticationTypes(Aws::Vector<AuthenticationType>&& value) { SetSupportedAuthenticationTypes(std::move(value)); return *this;}
    inline ComputeEnvironmentConfiguration& AddSupportedAuthenticationTypes(const AuthenticationType& value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes.push_back(value); return *this; }
    inline ComputeEnvironmentConfiguration& AddSupportedAuthenticationTypes(AuthenticationType&& value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters used as connection options for the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetConnectionOptions() const{ return m_connectionOptions; }
    inline bool ConnectionOptionsHasBeenSet() const { return m_connectionOptionsHasBeenSet; }
    inline void SetConnectionOptions(const Aws::Map<Aws::String, Property>& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = value; }
    inline void SetConnectionOptions(Aws::Map<Aws::String, Property>&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = std::move(value); }
    inline ComputeEnvironmentConfiguration& WithConnectionOptions(const Aws::Map<Aws::String, Property>& value) { SetConnectionOptions(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithConnectionOptions(Aws::Map<Aws::String, Property>&& value) { SetConnectionOptions(std::move(value)); return *this;}
    inline ComputeEnvironmentConfiguration& AddConnectionOptions(const Aws::String& key, const Property& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptions(Aws::String&& key, const Property& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::move(key), value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptions(const Aws::String& key, Property&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptions(Aws::String&& key, Property&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptions(const char* key, Property&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptions(const char* key, const Property& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection property name overrides for the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionPropertyNameOverrides() const{ return m_connectionPropertyNameOverrides; }
    inline bool ConnectionPropertyNameOverridesHasBeenSet() const { return m_connectionPropertyNameOverridesHasBeenSet; }
    inline void SetConnectionPropertyNameOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides = value; }
    inline void SetConnectionPropertyNameOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides = std::move(value); }
    inline ComputeEnvironmentConfiguration& WithConnectionPropertyNameOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectionPropertyNameOverrides(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithConnectionPropertyNameOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectionPropertyNameOverrides(std::move(value)); return *this;}
    inline ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(const Aws::String& key, const Aws::String& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(key, value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(Aws::String&& key, const Aws::String& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(std::move(key), value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(const Aws::String& key, Aws::String&& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(key, std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(Aws::String&& key, Aws::String&& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(std::move(key), std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(const char* key, Aws::String&& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(key, std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(Aws::String&& key, const char* value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(std::move(key), value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(const char* key, const char* value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection option name overrides for the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionOptionNameOverrides() const{ return m_connectionOptionNameOverrides; }
    inline bool ConnectionOptionNameOverridesHasBeenSet() const { return m_connectionOptionNameOverridesHasBeenSet; }
    inline void SetConnectionOptionNameOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides = value; }
    inline void SetConnectionOptionNameOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides = std::move(value); }
    inline ComputeEnvironmentConfiguration& WithConnectionOptionNameOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectionOptionNameOverrides(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithConnectionOptionNameOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectionOptionNameOverrides(std::move(value)); return *this;}
    inline ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(const Aws::String& key, const Aws::String& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(key, value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(Aws::String&& key, const Aws::String& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(std::move(key), value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(const Aws::String& key, Aws::String&& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(key, std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(Aws::String&& key, Aws::String&& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(std::move(key), std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(const char* key, Aws::String&& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(key, std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(Aws::String&& key, const char* value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(std::move(key), value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(const char* key, const char* value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection properties that are required as overrides for the compute
     * environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionPropertiesRequiredOverrides() const{ return m_connectionPropertiesRequiredOverrides; }
    inline bool ConnectionPropertiesRequiredOverridesHasBeenSet() const { return m_connectionPropertiesRequiredOverridesHasBeenSet; }
    inline void SetConnectionPropertiesRequiredOverrides(const Aws::Vector<Aws::String>& value) { m_connectionPropertiesRequiredOverridesHasBeenSet = true; m_connectionPropertiesRequiredOverrides = value; }
    inline void SetConnectionPropertiesRequiredOverrides(Aws::Vector<Aws::String>&& value) { m_connectionPropertiesRequiredOverridesHasBeenSet = true; m_connectionPropertiesRequiredOverrides = std::move(value); }
    inline ComputeEnvironmentConfiguration& WithConnectionPropertiesRequiredOverrides(const Aws::Vector<Aws::String>& value) { SetConnectionPropertiesRequiredOverrides(value); return *this;}
    inline ComputeEnvironmentConfiguration& WithConnectionPropertiesRequiredOverrides(Aws::Vector<Aws::String>&& value) { SetConnectionPropertiesRequiredOverrides(std::move(value)); return *this;}
    inline ComputeEnvironmentConfiguration& AddConnectionPropertiesRequiredOverrides(const Aws::String& value) { m_connectionPropertiesRequiredOverridesHasBeenSet = true; m_connectionPropertiesRequiredOverrides.push_back(value); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertiesRequiredOverrides(Aws::String&& value) { m_connectionPropertiesRequiredOverridesHasBeenSet = true; m_connectionPropertiesRequiredOverrides.push_back(std::move(value)); return *this; }
    inline ComputeEnvironmentConfiguration& AddConnectionPropertiesRequiredOverrides(const char* value) { m_connectionPropertiesRequiredOverridesHasBeenSet = true; m_connectionPropertiesRequiredOverrides.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether <code>PhysicalConnectionProperties</code> are required for
     * the compute environment.</p>
     */
    inline bool GetPhysicalConnectionPropertiesRequired() const{ return m_physicalConnectionPropertiesRequired; }
    inline bool PhysicalConnectionPropertiesRequiredHasBeenSet() const { return m_physicalConnectionPropertiesRequiredHasBeenSet; }
    inline void SetPhysicalConnectionPropertiesRequired(bool value) { m_physicalConnectionPropertiesRequiredHasBeenSet = true; m_physicalConnectionPropertiesRequired = value; }
    inline ComputeEnvironmentConfiguration& WithPhysicalConnectionPropertiesRequired(bool value) { SetPhysicalConnectionPropertiesRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ComputeEnvironment m_computeEnvironment;
    bool m_computeEnvironmentHasBeenSet = false;

    Aws::Vector<AuthenticationType> m_supportedAuthenticationTypes;
    bool m_supportedAuthenticationTypesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_connectionOptions;
    bool m_connectionOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectionPropertyNameOverrides;
    bool m_connectionPropertyNameOverridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectionOptionNameOverrides;
    bool m_connectionOptionNameOverridesHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectionPropertiesRequiredOverrides;
    bool m_connectionPropertiesRequiredOverridesHasBeenSet = false;

    bool m_physicalConnectionPropertiesRequired;
    bool m_physicalConnectionPropertiesRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
