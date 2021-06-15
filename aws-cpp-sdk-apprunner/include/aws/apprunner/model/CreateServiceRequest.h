/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/SourceConfiguration.h>
#include <aws/apprunner/model/InstanceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/EncryptionConfiguration.h>
#include <aws/apprunner/model/HealthCheckConfiguration.h>
#include <aws/apprunner/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class AWS_APPRUNNER_API CreateServiceRequest : public AppRunnerRequest
  {
  public:
    CreateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline CreateServiceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline CreateServiceRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>A name for the new service. It must be unique across all the running App
     * Runner services in your AWS account in the AWS Region.</p>
     */
    inline CreateServiceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }

    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }

    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }

    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }

    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline CreateServiceRequest& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}

    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline CreateServiceRequest& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The runtime configuration of instances (scaling units) of the App Runner
     * service.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const{ return m_instanceConfiguration; }

    /**
     * <p>The runtime configuration of instances (scaling units) of the App Runner
     * service.</p>
     */
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }

    /**
     * <p>The runtime configuration of instances (scaling units) of the App Runner
     * service.</p>
     */
    inline void SetInstanceConfiguration(const InstanceConfiguration& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = value; }

    /**
     * <p>The runtime configuration of instances (scaling units) of the App Runner
     * service.</p>
     */
    inline void SetInstanceConfiguration(InstanceConfiguration&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::move(value); }

    /**
     * <p>The runtime configuration of instances (scaling units) of the App Runner
     * service.</p>
     */
    inline CreateServiceRequest& WithInstanceConfiguration(const InstanceConfiguration& value) { SetInstanceConfiguration(value); return *this;}

    /**
     * <p>The runtime configuration of instances (scaling units) of the App Runner
     * service.</p>
     */
    inline CreateServiceRequest& WithInstanceConfiguration(InstanceConfiguration&& value) { SetInstanceConfiguration(std::move(value)); return *this;}


    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateServiceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateServiceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateServiceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional list of metadata items that you can associate with your service
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateServiceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an AWS managed CMK.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an AWS managed CMK.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an AWS managed CMK.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an AWS managed CMK.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an AWS managed CMK.</p>
     */
    inline CreateServiceRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an AWS managed CMK.</p>
     */
    inline CreateServiceRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The settings for the health check that AWS App Runner performs to monitor the
     * health of your service.</p>
     */
    inline const HealthCheckConfiguration& GetHealthCheckConfiguration() const{ return m_healthCheckConfiguration; }

    /**
     * <p>The settings for the health check that AWS App Runner performs to monitor the
     * health of your service.</p>
     */
    inline bool HealthCheckConfigurationHasBeenSet() const { return m_healthCheckConfigurationHasBeenSet; }

    /**
     * <p>The settings for the health check that AWS App Runner performs to monitor the
     * health of your service.</p>
     */
    inline void SetHealthCheckConfiguration(const HealthCheckConfiguration& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = value; }

    /**
     * <p>The settings for the health check that AWS App Runner performs to monitor the
     * health of your service.</p>
     */
    inline void SetHealthCheckConfiguration(HealthCheckConfiguration&& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = std::move(value); }

    /**
     * <p>The settings for the health check that AWS App Runner performs to monitor the
     * health of your service.</p>
     */
    inline CreateServiceRequest& WithHealthCheckConfiguration(const HealthCheckConfiguration& value) { SetHealthCheckConfiguration(value); return *this;}

    /**
     * <p>The settings for the health check that AWS App Runner performs to monitor the
     * health of your service.</p>
     */
    inline CreateServiceRequest& WithHealthCheckConfiguration(HealthCheckConfiguration&& value) { SetHealthCheckConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const{ return m_autoScalingConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(const Aws::String& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(Aws::String&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline void SetAutoScalingConfigurationArn(const char* value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline CreateServiceRequest& WithAutoScalingConfigurationArn(const Aws::String& value) { SetAutoScalingConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline CreateServiceRequest& WithAutoScalingConfigurationArn(Aws::String&& value) { SetAutoScalingConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p>
     */
    inline CreateServiceRequest& WithAutoScalingConfigurationArn(const char* value) { SetAutoScalingConfigurationArn(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet;

    InstanceConfiguration m_instanceConfiguration;
    bool m_instanceConfigurationHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet;

    HealthCheckConfiguration m_healthCheckConfiguration;
    bool m_healthCheckConfigurationHasBeenSet;

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
