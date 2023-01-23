/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutResourceConfigRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutResourceConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourceConfig"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline PutResourceConfigRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline PutResourceConfigRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource. The custom resource type must be registered with
     * CloudFormation. </p>  <p>You cannot use the organization names “amzn”,
     * “amazon”, “alexa”, “custom” with custom resource types. It is the first part of
     * the ResourceType up to the first ::.</p> 
     */
    inline PutResourceConfigRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }

    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline bool SchemaVersionIdHasBeenSet() const { return m_schemaVersionIdHasBeenSet; }

    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = value; }

    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::move(value); }

    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId.assign(value); }

    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline PutResourceConfigRequest& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}

    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline PutResourceConfigRequest& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}

    /**
     * <p>Version of the schema registered for the ResourceType in CloudFormation.</p>
     */
    inline PutResourceConfigRequest& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}


    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline PutResourceConfigRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline PutResourceConfigRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the resource.</p>
     */
    inline PutResourceConfigRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>Name of the resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>Name of the resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>Name of the resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>Name of the resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>Name of the resource.</p>
     */
    inline PutResourceConfigRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>Name of the resource.</p>
     */
    inline PutResourceConfigRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>Name of the resource.</p>
     */
    inline PutResourceConfigRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline PutResourceConfigRequest& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline PutResourceConfigRequest& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration object of the resource in valid JSON format. It must match
     * the schema registered with CloudFormation.</p>  <p>The configuration JSON
     * must not exceed 64 KB.</p> 
     */
    inline PutResourceConfigRequest& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>  <p>This field is not to be
     * confused with the Amazon Web Services-wide tag feature for Amazon Web Services
     * resources. Tags for <code>PutResourceConfig</code> are tags that you supply for
     * the configuration items of your custom resources.</p> 
     */
    inline PutResourceConfigRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
