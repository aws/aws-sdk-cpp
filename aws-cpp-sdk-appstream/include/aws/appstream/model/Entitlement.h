/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppVisibility.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/EntitlementAttribute.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Specifies an entitlement. Entitlements control access to specific
   * applications within a stack, based on user attributes. Entitlements apply to
   * SAML 2.0 federated user identities. Amazon AppStream 2.0 user pool and streaming
   * URL users are entitled to all applications in a stack. Entitlements don't apply
   * to the desktop stream view application, or to applications managed by a dynamic
   * app provider using the Dynamic Application Framework.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Entitlement">AWS
   * API Reference</a></p>
   */
  class Entitlement
  {
  public:
    AWS_APPSTREAM_API Entitlement();
    AWS_APPSTREAM_API Entitlement(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Entitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the entitlement.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the entitlement.</p>
     */
    inline Entitlement& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the entitlement.</p>
     */
    inline Entitlement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the entitlement.</p>
     */
    inline Entitlement& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline Entitlement& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline Entitlement& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack with which the entitlement is associated.</p>
     */
    inline Entitlement& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The description of the entitlement.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the entitlement.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the entitlement.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the entitlement.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the entitlement.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the entitlement.</p>
     */
    inline Entitlement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the entitlement.</p>
     */
    inline Entitlement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the entitlement.</p>
     */
    inline Entitlement& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether all or selected apps are entitled.</p>
     */
    inline const AppVisibility& GetAppVisibility() const{ return m_appVisibility; }

    /**
     * <p>Specifies whether all or selected apps are entitled.</p>
     */
    inline bool AppVisibilityHasBeenSet() const { return m_appVisibilityHasBeenSet; }

    /**
     * <p>Specifies whether all or selected apps are entitled.</p>
     */
    inline void SetAppVisibility(const AppVisibility& value) { m_appVisibilityHasBeenSet = true; m_appVisibility = value; }

    /**
     * <p>Specifies whether all or selected apps are entitled.</p>
     */
    inline void SetAppVisibility(AppVisibility&& value) { m_appVisibilityHasBeenSet = true; m_appVisibility = std::move(value); }

    /**
     * <p>Specifies whether all or selected apps are entitled.</p>
     */
    inline Entitlement& WithAppVisibility(const AppVisibility& value) { SetAppVisibility(value); return *this;}

    /**
     * <p>Specifies whether all or selected apps are entitled.</p>
     */
    inline Entitlement& WithAppVisibility(AppVisibility&& value) { SetAppVisibility(std::move(value)); return *this;}


    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline const Aws::Vector<EntitlementAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline void SetAttributes(const Aws::Vector<EntitlementAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline void SetAttributes(Aws::Vector<EntitlementAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline Entitlement& WithAttributes(const Aws::Vector<EntitlementAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline Entitlement& WithAttributes(Aws::Vector<EntitlementAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline Entitlement& AddAttributes(const EntitlementAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes of the entitlement.</p>
     */
    inline Entitlement& AddAttributes(EntitlementAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the entitlement was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time when the entitlement was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time when the entitlement was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time when the entitlement was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time when the entitlement was created.</p>
     */
    inline Entitlement& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time when the entitlement was created.</p>
     */
    inline Entitlement& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time when the entitlement was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the entitlement was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time when the entitlement was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time when the entitlement was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the entitlement was last modified.</p>
     */
    inline Entitlement& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the entitlement was last modified.</p>
     */
    inline Entitlement& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
