/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CreateEnvironmentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the name and type-specific configuration of the new environment.
 * Source and operating-policy settings belong to
 * configuration.codeConfiguration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateEnvironmentInput">AWS
 * API Reference</a></p>
 */
class CreateEnvironmentRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API CreateEnvironmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The customer-visible name of the environment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateEnvironmentRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific configuration. Omission creates a code environment with the
   * default operating policy and no sources.</p>
   */
  inline const CreateEnvironmentConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = CreateEnvironmentConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CreateEnvironmentConfiguration>
  CreateEnvironmentRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  CreateEnvironmentConfiguration m_configuration;
  bool m_nameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
