/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the configuration that App Runner uses to run an App Runner service
   * using an image pulled from a source image repository.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ImageConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageConfiguration
  {
  public:
    AWS_APPRUNNER_API ImageConfiguration();
    AWS_APPRUNNER_API ImageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ImageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuntimeEnvironmentVariables() const{ return m_runtimeEnvironmentVariables; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline bool RuntimeEnvironmentVariablesHasBeenSet() const { return m_runtimeEnvironmentVariablesHasBeenSet; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline void SetRuntimeEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables = value; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline void SetRuntimeEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables = std::move(value); }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& WithRuntimeEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetRuntimeEnvironmentVariables(value); return *this;}

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& WithRuntimeEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetRuntimeEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, value); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const char* key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(Aws::String&& key, const char* value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const char* key, const char* value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, value); return *this; }


    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline const Aws::String& GetStartCommand() const{ return m_startCommand; }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline bool StartCommandHasBeenSet() const { return m_startCommandHasBeenSet; }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline void SetStartCommand(const Aws::String& value) { m_startCommandHasBeenSet = true; m_startCommand = value; }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline void SetStartCommand(Aws::String&& value) { m_startCommandHasBeenSet = true; m_startCommand = std::move(value); }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline void SetStartCommand(const char* value) { m_startCommandHasBeenSet = true; m_startCommand.assign(value); }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline ImageConfiguration& WithStartCommand(const Aws::String& value) { SetStartCommand(value); return *this;}

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline ImageConfiguration& WithStartCommand(Aws::String&& value) { SetStartCommand(std::move(value)); return *this;}

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline ImageConfiguration& WithStartCommand(const char* value) { SetStartCommand(value); return *this;}


    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline const Aws::String& GetPort() const{ return m_port; }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline void SetPort(const Aws::String& value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline void SetPort(Aws::String&& value) { m_portHasBeenSet = true; m_port = std::move(value); }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline void SetPort(const char* value) { m_portHasBeenSet = true; m_port.assign(value); }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline ImageConfiguration& WithPort(const Aws::String& value) { SetPort(value); return *this;}

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline ImageConfiguration& WithPort(Aws::String&& value) { SetPort(std::move(value)); return *this;}

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline ImageConfiguration& WithPort(const char* value) { SetPort(value); return *this;}


    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuntimeEnvironmentSecrets() const{ return m_runtimeEnvironmentSecrets; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline bool RuntimeEnvironmentSecretsHasBeenSet() const { return m_runtimeEnvironmentSecretsHasBeenSet; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline void SetRuntimeEnvironmentSecrets(const Aws::Map<Aws::String, Aws::String>& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets = value; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline void SetRuntimeEnvironmentSecrets(Aws::Map<Aws::String, Aws::String>&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets = std::move(value); }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& WithRuntimeEnvironmentSecrets(const Aws::Map<Aws::String, Aws::String>& value) { SetRuntimeEnvironmentSecrets(value); return *this;}

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& WithRuntimeEnvironmentSecrets(Aws::Map<Aws::String, Aws::String>&& value) { SetRuntimeEnvironmentSecrets(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& AddRuntimeEnvironmentSecrets(const Aws::String& key, const Aws::String& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, value); return *this; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& AddRuntimeEnvironmentSecrets(Aws::String&& key, const Aws::String& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& AddRuntimeEnvironmentSecrets(const Aws::String& key, Aws::String&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& AddRuntimeEnvironmentSecrets(Aws::String&& key, Aws::String&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& AddRuntimeEnvironmentSecrets(const char* key, Aws::String&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& AddRuntimeEnvironmentSecrets(Aws::String&& key, const char* value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline ImageConfiguration& AddRuntimeEnvironmentSecrets(const char* key, const char* value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_runtimeEnvironmentVariables;
    bool m_runtimeEnvironmentVariablesHasBeenSet = false;

    Aws::String m_startCommand;
    bool m_startCommandHasBeenSet = false;

    Aws::String m_port;
    bool m_portHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_runtimeEnvironmentSecrets;
    bool m_runtimeEnvironmentSecretsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
