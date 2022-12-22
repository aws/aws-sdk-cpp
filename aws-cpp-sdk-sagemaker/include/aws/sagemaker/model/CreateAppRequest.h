/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateAppRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The domain ID.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The domain ID.</p>
     */
    inline CreateAppRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline CreateAppRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The domain ID.</p>
     */
    inline CreateAppRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }

    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }

    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }

    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }

    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }

    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline CreateAppRequest& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}

    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline CreateAppRequest& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}

    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline CreateAppRequest& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}


    /**
     * <p>The type of app.</p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }

    /**
     * <p>The type of app.</p>
     */
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }

    /**
     * <p>The type of app.</p>
     */
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }

    /**
     * <p>The type of app.</p>
     */
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }

    /**
     * <p>The type of app.</p>
     */
    inline CreateAppRequest& WithAppType(const AppType& value) { SetAppType(value); return *this;}

    /**
     * <p>The type of app.</p>
     */
    inline CreateAppRequest& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}


    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const{ return m_appName; }

    /**
     * <p>The name of the app.</p>
     */
    inline bool AppNameHasBeenSet() const { return m_appNameHasBeenSet; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(const Aws::String& value) { m_appNameHasBeenSet = true; m_appName = value; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(Aws::String&& value) { m_appNameHasBeenSet = true; m_appName = std::move(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetAppName(const char* value) { m_appNameHasBeenSet = true; m_appName.assign(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline CreateAppRequest& WithAppName(const Aws::String& value) { SetAppName(value); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline CreateAppRequest& WithAppName(Aws::String&& value) { SetAppName(std::move(value)); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline CreateAppRequest& WithAppName(const char* value) { SetAppName(value); return *this;}


    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAppRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAppRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAppRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateAppRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker image
     * created on the instance.</p>  <p>The value of <code>InstanceType</code>
     * passed as part of the <code>ResourceSpec</code> in the <code>CreateApp</code>
     * call overrides the value passed as part of the <code>ResourceSpec</code>
     * configured for the user profile or the domain. If <code>InstanceType</code> is
     * not specified in any of those three <code>ResourceSpec</code> values for a
     * <code>KernelGateway</code> app, the <code>CreateApp</code> call fails with a
     * request validation error.</p> 
     */
    inline const ResourceSpec& GetResourceSpec() const{ return m_resourceSpec; }

    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker image
     * created on the instance.</p>  <p>The value of <code>InstanceType</code>
     * passed as part of the <code>ResourceSpec</code> in the <code>CreateApp</code>
     * call overrides the value passed as part of the <code>ResourceSpec</code>
     * configured for the user profile or the domain. If <code>InstanceType</code> is
     * not specified in any of those three <code>ResourceSpec</code> values for a
     * <code>KernelGateway</code> app, the <code>CreateApp</code> call fails with a
     * request validation error.</p> 
     */
    inline bool ResourceSpecHasBeenSet() const { return m_resourceSpecHasBeenSet; }

    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker image
     * created on the instance.</p>  <p>The value of <code>InstanceType</code>
     * passed as part of the <code>ResourceSpec</code> in the <code>CreateApp</code>
     * call overrides the value passed as part of the <code>ResourceSpec</code>
     * configured for the user profile or the domain. If <code>InstanceType</code> is
     * not specified in any of those three <code>ResourceSpec</code> values for a
     * <code>KernelGateway</code> app, the <code>CreateApp</code> call fails with a
     * request validation error.</p> 
     */
    inline void SetResourceSpec(const ResourceSpec& value) { m_resourceSpecHasBeenSet = true; m_resourceSpec = value; }

    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker image
     * created on the instance.</p>  <p>The value of <code>InstanceType</code>
     * passed as part of the <code>ResourceSpec</code> in the <code>CreateApp</code>
     * call overrides the value passed as part of the <code>ResourceSpec</code>
     * configured for the user profile or the domain. If <code>InstanceType</code> is
     * not specified in any of those three <code>ResourceSpec</code> values for a
     * <code>KernelGateway</code> app, the <code>CreateApp</code> call fails with a
     * request validation error.</p> 
     */
    inline void SetResourceSpec(ResourceSpec&& value) { m_resourceSpecHasBeenSet = true; m_resourceSpec = std::move(value); }

    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker image
     * created on the instance.</p>  <p>The value of <code>InstanceType</code>
     * passed as part of the <code>ResourceSpec</code> in the <code>CreateApp</code>
     * call overrides the value passed as part of the <code>ResourceSpec</code>
     * configured for the user profile or the domain. If <code>InstanceType</code> is
     * not specified in any of those three <code>ResourceSpec</code> values for a
     * <code>KernelGateway</code> app, the <code>CreateApp</code> call fails with a
     * request validation error.</p> 
     */
    inline CreateAppRequest& WithResourceSpec(const ResourceSpec& value) { SetResourceSpec(value); return *this;}

    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker image
     * created on the instance.</p>  <p>The value of <code>InstanceType</code>
     * passed as part of the <code>ResourceSpec</code> in the <code>CreateApp</code>
     * call overrides the value passed as part of the <code>ResourceSpec</code>
     * configured for the user profile or the domain. If <code>InstanceType</code> is
     * not specified in any of those three <code>ResourceSpec</code> values for a
     * <code>KernelGateway</code> app, the <code>CreateApp</code> call fails with a
     * request validation error.</p> 
     */
    inline CreateAppRequest& WithResourceSpec(ResourceSpec&& value) { SetResourceSpec(std::move(value)); return *this;}


    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline CreateAppRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline CreateAppRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline CreateAppRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceSpec m_resourceSpec;
    bool m_resourceSpecHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
