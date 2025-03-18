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
    AWS_GLUE_API ComputeEnvironmentConfiguration() = default;
    AWS_GLUE_API ComputeEnvironmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ComputeEnvironmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the compute environment configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ComputeEnvironmentConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the compute environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ComputeEnvironmentConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of compute environment.</p>
     */
    inline ComputeEnvironment GetComputeEnvironment() const { return m_computeEnvironment; }
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }
    inline void SetComputeEnvironment(ComputeEnvironment value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }
    inline ComputeEnvironmentConfiguration& WithComputeEnvironment(ComputeEnvironment value) { SetComputeEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported authentication types for the compute environment.</p>
     */
    inline const Aws::Vector<AuthenticationType>& GetSupportedAuthenticationTypes() const { return m_supportedAuthenticationTypes; }
    inline bool SupportedAuthenticationTypesHasBeenSet() const { return m_supportedAuthenticationTypesHasBeenSet; }
    template<typename SupportedAuthenticationTypesT = Aws::Vector<AuthenticationType>>
    void SetSupportedAuthenticationTypes(SupportedAuthenticationTypesT&& value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes = std::forward<SupportedAuthenticationTypesT>(value); }
    template<typename SupportedAuthenticationTypesT = Aws::Vector<AuthenticationType>>
    ComputeEnvironmentConfiguration& WithSupportedAuthenticationTypes(SupportedAuthenticationTypesT&& value) { SetSupportedAuthenticationTypes(std::forward<SupportedAuthenticationTypesT>(value)); return *this;}
    inline ComputeEnvironmentConfiguration& AddSupportedAuthenticationTypes(AuthenticationType value) { m_supportedAuthenticationTypesHasBeenSet = true; m_supportedAuthenticationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters used as connection options for the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetConnectionOptions() const { return m_connectionOptions; }
    inline bool ConnectionOptionsHasBeenSet() const { return m_connectionOptionsHasBeenSet; }
    template<typename ConnectionOptionsT = Aws::Map<Aws::String, Property>>
    void SetConnectionOptions(ConnectionOptionsT&& value) { m_connectionOptionsHasBeenSet = true; m_connectionOptions = std::forward<ConnectionOptionsT>(value); }
    template<typename ConnectionOptionsT = Aws::Map<Aws::String, Property>>
    ComputeEnvironmentConfiguration& WithConnectionOptions(ConnectionOptionsT&& value) { SetConnectionOptions(std::forward<ConnectionOptionsT>(value)); return *this;}
    template<typename ConnectionOptionsKeyT = Aws::String, typename ConnectionOptionsValueT = Property>
    ComputeEnvironmentConfiguration& AddConnectionOptions(ConnectionOptionsKeyT&& key, ConnectionOptionsValueT&& value) {
      m_connectionOptionsHasBeenSet = true; m_connectionOptions.emplace(std::forward<ConnectionOptionsKeyT>(key), std::forward<ConnectionOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The connection property name overrides for the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionPropertyNameOverrides() const { return m_connectionPropertyNameOverrides; }
    inline bool ConnectionPropertyNameOverridesHasBeenSet() const { return m_connectionPropertyNameOverridesHasBeenSet; }
    template<typename ConnectionPropertyNameOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectionPropertyNameOverrides(ConnectionPropertyNameOverridesT&& value) { m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides = std::forward<ConnectionPropertyNameOverridesT>(value); }
    template<typename ConnectionPropertyNameOverridesT = Aws::Map<Aws::String, Aws::String>>
    ComputeEnvironmentConfiguration& WithConnectionPropertyNameOverrides(ConnectionPropertyNameOverridesT&& value) { SetConnectionPropertyNameOverrides(std::forward<ConnectionPropertyNameOverridesT>(value)); return *this;}
    template<typename ConnectionPropertyNameOverridesKeyT = Aws::String, typename ConnectionPropertyNameOverridesValueT = Aws::String>
    ComputeEnvironmentConfiguration& AddConnectionPropertyNameOverrides(ConnectionPropertyNameOverridesKeyT&& key, ConnectionPropertyNameOverridesValueT&& value) {
      m_connectionPropertyNameOverridesHasBeenSet = true; m_connectionPropertyNameOverrides.emplace(std::forward<ConnectionPropertyNameOverridesKeyT>(key), std::forward<ConnectionPropertyNameOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The connection option name overrides for the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionOptionNameOverrides() const { return m_connectionOptionNameOverrides; }
    inline bool ConnectionOptionNameOverridesHasBeenSet() const { return m_connectionOptionNameOverridesHasBeenSet; }
    template<typename ConnectionOptionNameOverridesT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectionOptionNameOverrides(ConnectionOptionNameOverridesT&& value) { m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides = std::forward<ConnectionOptionNameOverridesT>(value); }
    template<typename ConnectionOptionNameOverridesT = Aws::Map<Aws::String, Aws::String>>
    ComputeEnvironmentConfiguration& WithConnectionOptionNameOverrides(ConnectionOptionNameOverridesT&& value) { SetConnectionOptionNameOverrides(std::forward<ConnectionOptionNameOverridesT>(value)); return *this;}
    template<typename ConnectionOptionNameOverridesKeyT = Aws::String, typename ConnectionOptionNameOverridesValueT = Aws::String>
    ComputeEnvironmentConfiguration& AddConnectionOptionNameOverrides(ConnectionOptionNameOverridesKeyT&& key, ConnectionOptionNameOverridesValueT&& value) {
      m_connectionOptionNameOverridesHasBeenSet = true; m_connectionOptionNameOverrides.emplace(std::forward<ConnectionOptionNameOverridesKeyT>(key), std::forward<ConnectionOptionNameOverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The connection properties that are required as overrides for the compute
     * environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionPropertiesRequiredOverrides() const { return m_connectionPropertiesRequiredOverrides; }
    inline bool ConnectionPropertiesRequiredOverridesHasBeenSet() const { return m_connectionPropertiesRequiredOverridesHasBeenSet; }
    template<typename ConnectionPropertiesRequiredOverridesT = Aws::Vector<Aws::String>>
    void SetConnectionPropertiesRequiredOverrides(ConnectionPropertiesRequiredOverridesT&& value) { m_connectionPropertiesRequiredOverridesHasBeenSet = true; m_connectionPropertiesRequiredOverrides = std::forward<ConnectionPropertiesRequiredOverridesT>(value); }
    template<typename ConnectionPropertiesRequiredOverridesT = Aws::Vector<Aws::String>>
    ComputeEnvironmentConfiguration& WithConnectionPropertiesRequiredOverrides(ConnectionPropertiesRequiredOverridesT&& value) { SetConnectionPropertiesRequiredOverrides(std::forward<ConnectionPropertiesRequiredOverridesT>(value)); return *this;}
    template<typename ConnectionPropertiesRequiredOverridesT = Aws::String>
    ComputeEnvironmentConfiguration& AddConnectionPropertiesRequiredOverrides(ConnectionPropertiesRequiredOverridesT&& value) { m_connectionPropertiesRequiredOverridesHasBeenSet = true; m_connectionPropertiesRequiredOverrides.emplace_back(std::forward<ConnectionPropertiesRequiredOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether <code>PhysicalConnectionProperties</code> are required for
     * the compute environment.</p>
     */
    inline bool GetPhysicalConnectionPropertiesRequired() const { return m_physicalConnectionPropertiesRequired; }
    inline bool PhysicalConnectionPropertiesRequiredHasBeenSet() const { return m_physicalConnectionPropertiesRequiredHasBeenSet; }
    inline void SetPhysicalConnectionPropertiesRequired(bool value) { m_physicalConnectionPropertiesRequiredHasBeenSet = true; m_physicalConnectionPropertiesRequired = value; }
    inline ComputeEnvironmentConfiguration& WithPhysicalConnectionPropertiesRequired(bool value) { SetPhysicalConnectionPropertiesRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ComputeEnvironment m_computeEnvironment{ComputeEnvironment::NOT_SET};
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

    bool m_physicalConnectionPropertiesRequired{false};
    bool m_physicalConnectionPropertiesRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
