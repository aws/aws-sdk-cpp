/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppVisibility.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/EntitlementAttribute.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateEntitlementRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateEntitlementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEntitlement"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the entitlement.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateEntitlementRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEntitlementRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEntitlementRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline CreateEntitlementRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline CreateEntitlementRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline CreateEntitlementRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the entitlement.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEntitlementRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEntitlementRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEntitlementRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether all or selected apps are entitled.</p>
     */
    inline const AppVisibility& GetAppVisibility() const{ return m_appVisibility; }
    inline bool AppVisibilityHasBeenSet() const { return m_appVisibilityHasBeenSet; }
    inline void SetAppVisibility(const AppVisibility& value) { m_appVisibilityHasBeenSet = true; m_appVisibility = value; }
    inline void SetAppVisibility(AppVisibility&& value) { m_appVisibilityHasBeenSet = true; m_appVisibility = std::move(value); }
    inline CreateEntitlementRequest& WithAppVisibility(const AppVisibility& value) { SetAppVisibility(value); return *this;}
    inline CreateEntitlementRequest& WithAppVisibility(AppVisibility&& value) { SetAppVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline const Aws::Vector<EntitlementAttribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<EntitlementAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<EntitlementAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline CreateEntitlementRequest& WithAttributes(const Aws::Vector<EntitlementAttribute>& value) { SetAttributes(value); return *this;}
    inline CreateEntitlementRequest& WithAttributes(Aws::Vector<EntitlementAttribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline CreateEntitlementRequest& AddAttributes(const EntitlementAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline CreateEntitlementRequest& AddAttributes(EntitlementAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AppVisibility m_appVisibility;
    bool m_appVisibilityHasBeenSet = false;

    Aws::Vector<EntitlementAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
