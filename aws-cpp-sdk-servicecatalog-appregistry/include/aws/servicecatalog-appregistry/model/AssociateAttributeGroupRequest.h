/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class AssociateAttributeGroupRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API AssociateAttributeGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAttributeGroup"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or ID of the application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The name or ID of the application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The name or ID of the application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The name or ID of the application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The name or ID of the application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The name or ID of the application.</p>
     */
    inline AssociateAttributeGroupRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The name or ID of the application.</p>
     */
    inline AssociateAttributeGroupRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The name or ID of the application.</p>
     */
    inline AssociateAttributeGroupRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline const Aws::String& GetAttributeGroup() const{ return m_attributeGroup; }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline bool AttributeGroupHasBeenSet() const { return m_attributeGroupHasBeenSet; }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline void SetAttributeGroup(const Aws::String& value) { m_attributeGroupHasBeenSet = true; m_attributeGroup = value; }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline void SetAttributeGroup(Aws::String&& value) { m_attributeGroupHasBeenSet = true; m_attributeGroup = std::move(value); }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline void SetAttributeGroup(const char* value) { m_attributeGroupHasBeenSet = true; m_attributeGroup.assign(value); }

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline AssociateAttributeGroupRequest& WithAttributeGroup(const Aws::String& value) { SetAttributeGroup(value); return *this;}

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline AssociateAttributeGroupRequest& WithAttributeGroup(Aws::String&& value) { SetAttributeGroup(std::move(value)); return *this;}

    /**
     * <p>The name or ID of the attribute group that holds the attributes to describe
     * the application.</p>
     */
    inline AssociateAttributeGroupRequest& WithAttributeGroup(const char* value) { SetAttributeGroup(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_attributeGroup;
    bool m_attributeGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
