/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ResourceConfigurationSchemaType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Returns information about the resource being evaluated. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_CONFIGSERVICE_API ResourceDetails();
    AWS_CONFIGSERVICE_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline ResourceDetails& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline ResourceDetails& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline ResourceDetails& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline ResourceDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline ResourceDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline ResourceDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline const Aws::String& GetResourceConfiguration() const{ return m_resourceConfiguration; }

    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline bool ResourceConfigurationHasBeenSet() const { return m_resourceConfigurationHasBeenSet; }

    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline void SetResourceConfiguration(const Aws::String& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = value; }

    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline void SetResourceConfiguration(Aws::String&& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = std::move(value); }

    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline void SetResourceConfiguration(const char* value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration.assign(value); }

    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline ResourceDetails& WithResourceConfiguration(const Aws::String& value) { SetResourceConfiguration(value); return *this;}

    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline ResourceDetails& WithResourceConfiguration(Aws::String&& value) { SetResourceConfiguration(std::move(value)); return *this;}

    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline ResourceDetails& WithResourceConfiguration(const char* value) { SetResourceConfiguration(value); return *this;}


    /**
     * <p>The schema type of the resource configuration.</p>
     */
    inline const ResourceConfigurationSchemaType& GetResourceConfigurationSchemaType() const{ return m_resourceConfigurationSchemaType; }

    /**
     * <p>The schema type of the resource configuration.</p>
     */
    inline bool ResourceConfigurationSchemaTypeHasBeenSet() const { return m_resourceConfigurationSchemaTypeHasBeenSet; }

    /**
     * <p>The schema type of the resource configuration.</p>
     */
    inline void SetResourceConfigurationSchemaType(const ResourceConfigurationSchemaType& value) { m_resourceConfigurationSchemaTypeHasBeenSet = true; m_resourceConfigurationSchemaType = value; }

    /**
     * <p>The schema type of the resource configuration.</p>
     */
    inline void SetResourceConfigurationSchemaType(ResourceConfigurationSchemaType&& value) { m_resourceConfigurationSchemaTypeHasBeenSet = true; m_resourceConfigurationSchemaType = std::move(value); }

    /**
     * <p>The schema type of the resource configuration.</p>
     */
    inline ResourceDetails& WithResourceConfigurationSchemaType(const ResourceConfigurationSchemaType& value) { SetResourceConfigurationSchemaType(value); return *this;}

    /**
     * <p>The schema type of the resource configuration.</p>
     */
    inline ResourceDetails& WithResourceConfigurationSchemaType(ResourceConfigurationSchemaType&& value) { SetResourceConfigurationSchemaType(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceConfiguration;
    bool m_resourceConfigurationHasBeenSet = false;

    ResourceConfigurationSchemaType m_resourceConfigurationSchemaType;
    bool m_resourceConfigurationSchemaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
