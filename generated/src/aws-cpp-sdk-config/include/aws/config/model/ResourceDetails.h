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
   * <p>Returns information about the resource being evaluated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_CONFIGSERVICE_API ResourceDetails() = default;
    AWS_CONFIGSERVICE_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique resource ID for an evaluation.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResourceDetails& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource being evaluated.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceDetails& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource definition to be evaluated as per the resource configuration
     * schema type.</p>
     */
    inline const Aws::String& GetResourceConfiguration() const { return m_resourceConfiguration; }
    inline bool ResourceConfigurationHasBeenSet() const { return m_resourceConfigurationHasBeenSet; }
    template<typename ResourceConfigurationT = Aws::String>
    void SetResourceConfiguration(ResourceConfigurationT&& value) { m_resourceConfigurationHasBeenSet = true; m_resourceConfiguration = std::forward<ResourceConfigurationT>(value); }
    template<typename ResourceConfigurationT = Aws::String>
    ResourceDetails& WithResourceConfiguration(ResourceConfigurationT&& value) { SetResourceConfiguration(std::forward<ResourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema type of the resource configuration.</p>  <p>You can find the
     * <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
     * type schema</a>, or <code>CFN_RESOURCE_SCHEMA</code>, in "<i>Amazon Web Services
     * public extensions</i>" within the CloudFormation registry or with the following
     * CLI commmand: <code>aws cloudformation describe-type --type-name
     * "AWS::S3::Bucket" --type RESOURCE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-view">Managing
     * extensions through the CloudFormation registry</a> and <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the CloudFormation
     * User Guide.</p> 
     */
    inline ResourceConfigurationSchemaType GetResourceConfigurationSchemaType() const { return m_resourceConfigurationSchemaType; }
    inline bool ResourceConfigurationSchemaTypeHasBeenSet() const { return m_resourceConfigurationSchemaTypeHasBeenSet; }
    inline void SetResourceConfigurationSchemaType(ResourceConfigurationSchemaType value) { m_resourceConfigurationSchemaTypeHasBeenSet = true; m_resourceConfigurationSchemaType = value; }
    inline ResourceDetails& WithResourceConfigurationSchemaType(ResourceConfigurationSchemaType value) { SetResourceConfigurationSchemaType(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceConfiguration;
    bool m_resourceConfigurationHasBeenSet = false;

    ResourceConfigurationSchemaType m_resourceConfigurationSchemaType{ResourceConfigurationSchemaType::NOT_SET};
    bool m_resourceConfigurationSchemaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
