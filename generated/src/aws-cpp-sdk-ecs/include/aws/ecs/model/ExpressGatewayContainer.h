/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ExpressGatewayRepositoryCredentials.h>
#include <aws/ecs/model/ExpressGatewayServiceAwsLogsConfiguration.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/Secret.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Defines the configuration for the primary container in an Express service.
 * This container receives traffic from the Application Load Balancer and runs your
 * application code.</p> <p>The container configuration includes the container
 * image, port mapping, logging settings, environment variables, and secrets. The
 * container image is the only required parameter, with sensible defaults provided
 * for other settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExpressGatewayContainer">AWS
 * API Reference</a></p>
 */
class ExpressGatewayContainer {
 public:
  AWS_ECS_API ExpressGatewayContainer() = default;
  AWS_ECS_API ExpressGatewayContainer(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ExpressGatewayContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The image used to start a container. This string is passed directly to the
   * Docker daemon. Images in the Docker Hub registry are available by default. Other
   * repositories are specified with either <code>repository-url/image:tag</code> or
   * <code>repository-url/image@digest</code>.</p> <p>For Express services, the image
   * typically contains a web application that listens on the specified container
   * port. The image can be stored in Amazon ECR, Docker Hub, or any other container
   * registry accessible to your execution role.</p>
   */
  inline const Aws::String& GetImage() const { return m_image; }
  inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
  template <typename ImageT = Aws::String>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = Aws::String>
  ExpressGatewayContainer& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number on the container that receives traffic from the load
   * balancer. Default is 80.</p>
   */
  inline int GetContainerPort() const { return m_containerPort; }
  inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
  inline void SetContainerPort(int value) {
    m_containerPortHasBeenSet = true;
    m_containerPort = value;
  }
  inline ExpressGatewayContainer& WithContainerPort(int value) {
    SetContainerPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log configuration for the container.</p>
   */
  inline const ExpressGatewayServiceAwsLogsConfiguration& GetAwsLogsConfiguration() const { return m_awsLogsConfiguration; }
  inline bool AwsLogsConfigurationHasBeenSet() const { return m_awsLogsConfigurationHasBeenSet; }
  template <typename AwsLogsConfigurationT = ExpressGatewayServiceAwsLogsConfiguration>
  void SetAwsLogsConfiguration(AwsLogsConfigurationT&& value) {
    m_awsLogsConfigurationHasBeenSet = true;
    m_awsLogsConfiguration = std::forward<AwsLogsConfigurationT>(value);
  }
  template <typename AwsLogsConfigurationT = ExpressGatewayServiceAwsLogsConfiguration>
  ExpressGatewayContainer& WithAwsLogsConfiguration(AwsLogsConfigurationT&& value) {
    SetAwsLogsConfiguration(std::forward<AwsLogsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for repository credentials for private registry
   * authentication.</p>
   */
  inline const ExpressGatewayRepositoryCredentials& GetRepositoryCredentials() const { return m_repositoryCredentials; }
  inline bool RepositoryCredentialsHasBeenSet() const { return m_repositoryCredentialsHasBeenSet; }
  template <typename RepositoryCredentialsT = ExpressGatewayRepositoryCredentials>
  void SetRepositoryCredentials(RepositoryCredentialsT&& value) {
    m_repositoryCredentialsHasBeenSet = true;
    m_repositoryCredentials = std::forward<RepositoryCredentialsT>(value);
  }
  template <typename RepositoryCredentialsT = ExpressGatewayRepositoryCredentials>
  ExpressGatewayContainer& WithRepositoryCredentials(RepositoryCredentialsT&& value) {
    SetRepositoryCredentials(std::forward<RepositoryCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The command that is passed to the container.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
  inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
  template <typename CommandT = Aws::Vector<Aws::String>>
  void SetCommand(CommandT&& value) {
    m_commandHasBeenSet = true;
    m_command = std::forward<CommandT>(value);
  }
  template <typename CommandT = Aws::Vector<Aws::String>>
  ExpressGatewayContainer& WithCommand(CommandT&& value) {
    SetCommand(std::forward<CommandT>(value));
    return *this;
  }
  template <typename CommandT = Aws::String>
  ExpressGatewayContainer& AddCommand(CommandT&& value) {
    m_commandHasBeenSet = true;
    m_command.emplace_back(std::forward<CommandT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment variables to pass to the container.</p>
   */
  inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::Vector<KeyValuePair>>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::Vector<KeyValuePair>>
  ExpressGatewayContainer& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  template <typename EnvironmentT = KeyValuePair>
  ExpressGatewayContainer& AddEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment.emplace_back(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The secrets to pass to the container.</p>
   */
  inline const Aws::Vector<Secret>& GetSecrets() const { return m_secrets; }
  inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
  template <typename SecretsT = Aws::Vector<Secret>>
  void SetSecrets(SecretsT&& value) {
    m_secretsHasBeenSet = true;
    m_secrets = std::forward<SecretsT>(value);
  }
  template <typename SecretsT = Aws::Vector<Secret>>
  ExpressGatewayContainer& WithSecrets(SecretsT&& value) {
    SetSecrets(std::forward<SecretsT>(value));
    return *this;
  }
  template <typename SecretsT = Secret>
  ExpressGatewayContainer& AddSecrets(SecretsT&& value) {
    m_secretsHasBeenSet = true;
    m_secrets.emplace_back(std::forward<SecretsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_image;
  bool m_imageHasBeenSet = false;

  int m_containerPort{0};
  bool m_containerPortHasBeenSet = false;

  ExpressGatewayServiceAwsLogsConfiguration m_awsLogsConfiguration;
  bool m_awsLogsConfigurationHasBeenSet = false;

  ExpressGatewayRepositoryCredentials m_repositoryCredentials;
  bool m_repositoryCredentialsHasBeenSet = false;

  Aws::Vector<Aws::String> m_command;
  bool m_commandHasBeenSet = false;

  Aws::Vector<KeyValuePair> m_environment;
  bool m_environmentHasBeenSet = false;

  Aws::Vector<Secret> m_secrets;
  bool m_secretsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
