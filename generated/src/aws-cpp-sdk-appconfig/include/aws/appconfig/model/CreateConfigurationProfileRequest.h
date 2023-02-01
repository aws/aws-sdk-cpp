/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appconfig/model/Validator.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class CreateConfigurationProfileRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateConfigurationProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationProfile"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline CreateConfigurationProfileRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A name for the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the configuration profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline CreateConfigurationProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }

    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }

    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }

    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }

    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline CreateConfigurationProfileRequest& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline CreateConfigurationProfileRequest& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>A URI to locate the configuration. You can specify the AppConfig hosted
     * configuration store, Systems Manager (SSM) document, an SSM Parameter Store
     * parameter, or an Amazon S3 object. For the hosted configuration store and for
     * feature flags, specify <code>hosted</code>. For an SSM document, specify either
     * the document name in the format
     * <code>ssm-document://&lt;Document_name&gt;</code> or the Amazon Resource Name
     * (ARN). For a parameter, specify either the parameter name in the format
     * <code>ssm-parameter://&lt;Parameter_name&gt;</code> or the ARN. For an Amazon S3
     * object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://my-bucket/my-app/us-east-1/my-config.json</code> </p>
     */
    inline CreateConfigurationProfileRequest& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline const Aws::String& GetRetrievalRoleArn() const{ return m_retrievalRoleArn; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline bool RetrievalRoleArnHasBeenSet() const { return m_retrievalRoleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline void SetRetrievalRoleArn(const Aws::String& value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn = value; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline void SetRetrievalRoleArn(Aws::String&& value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline void SetRetrievalRoleArn(const char* value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline CreateConfigurationProfileRequest& WithRetrievalRoleArn(const Aws::String& value) { SetRetrievalRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline CreateConfigurationProfileRequest& WithRetrievalRoleArn(Aws::String&& value) { SetRetrievalRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in the AppConfig hosted configuration
     * store. It is required for all other sources that store your configuration. </p>
     * 
     */
    inline CreateConfigurationProfileRequest& WithRetrievalRoleArn(const char* value) { SetRetrievalRoleArn(value); return *this;}


    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const{ return m_validators; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline bool ValidatorsHasBeenSet() const { return m_validatorsHasBeenSet; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(const Aws::Vector<Validator>& value) { m_validatorsHasBeenSet = true; m_validators = value; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(Aws::Vector<Validator>&& value) { m_validatorsHasBeenSet = true; m_validators = std::move(value); }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& WithValidators(const Aws::Vector<Validator>& value) { SetValidators(value); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& WithValidators(Aws::Vector<Validator>&& value) { SetValidators(std::move(value)); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& AddValidators(const Validator& value) { m_validatorsHasBeenSet = true; m_validators.push_back(value); return *this; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline CreateConfigurationProfileRequest& AddValidators(Validator&& value) { m_validatorsHasBeenSet = true; m_validators.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline CreateConfigurationProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline CreateConfigurationProfileRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline CreateConfigurationProfileRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline CreateConfigurationProfileRequest& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::String m_retrievalRoleArn;
    bool m_retrievalRoleArnHasBeenSet = false;

    Aws::Vector<Validator> m_validators;
    bool m_validatorsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
