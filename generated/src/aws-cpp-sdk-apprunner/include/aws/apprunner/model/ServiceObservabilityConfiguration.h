/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
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
   * <p>Describes the observability configuration of an App Runner service. These are
   * additional observability features, like tracing, that you choose to enable.
   * They're configured in a separate resource that you associate with your
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ServiceObservabilityConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceObservabilityConfiguration
  {
  public:
    AWS_APPRUNNER_API ServiceObservabilityConfiguration();
    AWS_APPRUNNER_API ServiceObservabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ServiceObservabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When <code>true</code>, an observability configuration resource is associated
     * with the service, and an <code>ObservabilityConfigurationArn</code> is
     * specified.</p>
     */
    inline bool GetObservabilityEnabled() const{ return m_observabilityEnabled; }

    /**
     * <p>When <code>true</code>, an observability configuration resource is associated
     * with the service, and an <code>ObservabilityConfigurationArn</code> is
     * specified.</p>
     */
    inline bool ObservabilityEnabledHasBeenSet() const { return m_observabilityEnabledHasBeenSet; }

    /**
     * <p>When <code>true</code>, an observability configuration resource is associated
     * with the service, and an <code>ObservabilityConfigurationArn</code> is
     * specified.</p>
     */
    inline void SetObservabilityEnabled(bool value) { m_observabilityEnabledHasBeenSet = true; m_observabilityEnabled = value; }

    /**
     * <p>When <code>true</code>, an observability configuration resource is associated
     * with the service, and an <code>ObservabilityConfigurationArn</code> is
     * specified.</p>
     */
    inline ServiceObservabilityConfiguration& WithObservabilityEnabled(bool value) { SetObservabilityEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline const Aws::String& GetObservabilityConfigurationArn() const{ return m_observabilityConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline bool ObservabilityConfigurationArnHasBeenSet() const { return m_observabilityConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline void SetObservabilityConfigurationArn(const Aws::String& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline void SetObservabilityConfigurationArn(Aws::String&& value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline void SetObservabilityConfigurationArn(const char* value) { m_observabilityConfigurationArnHasBeenSet = true; m_observabilityConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline ServiceObservabilityConfiguration& WithObservabilityConfigurationArn(const Aws::String& value) { SetObservabilityConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline ServiceObservabilityConfiguration& WithObservabilityConfigurationArn(Aws::String&& value) { SetObservabilityConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the observability configuration that is
     * associated with the service. Specified only when
     * <code>ObservabilityEnabled</code> is <code>true</code>.</p> <p>Specify an ARN
     * with a name and a revision number to associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:observabilityconfiguration/xray-tracing</code>
     * </p>
     */
    inline ServiceObservabilityConfiguration& WithObservabilityConfigurationArn(const char* value) { SetObservabilityConfigurationArn(value); return *this;}

  private:

    bool m_observabilityEnabled;
    bool m_observabilityEnabledHasBeenSet = false;

    Aws::String m_observabilityConfigurationArn;
    bool m_observabilityConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
