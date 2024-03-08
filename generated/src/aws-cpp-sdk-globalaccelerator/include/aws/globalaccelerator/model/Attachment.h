/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/globalaccelerator/model/Resource.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A cross-account attachment in Global Accelerator. A cross-account attachment
   * specifies the <i>principals</i> who have permission to add to accelerators in
   * their own account the resources in your account that you also list in the
   * attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_GLOBALACCELERATOR_API Attachment();
    AWS_GLOBALACCELERATOR_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline const Aws::String& GetAttachmentArn() const{ return m_attachmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline void SetAttachmentArn(const Aws::String& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline void SetAttachmentArn(Aws::String&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline void SetAttachmentArn(const char* value) { m_attachmentArnHasBeenSet = true; m_attachmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline Attachment& WithAttachmentArn(const Aws::String& value) { SetAttachmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline Attachment& WithAttachmentArn(Aws::String&& value) { SetAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline Attachment& WithAttachmentArn(const char* value) { SetAttachmentArn(value); return *this;}


    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline Attachment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline Attachment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline Attachment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline Attachment& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline Attachment& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline Attachment& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline Attachment& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline Attachment& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline Attachment& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline Attachment& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline Attachment& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline Attachment& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time that the cross-account attachment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the cross-account attachment was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the cross-account attachment was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the cross-account attachment was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the cross-account attachment was last modified.</p>
     */
    inline Attachment& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the cross-account attachment was last modified.</p>
     */
    inline Attachment& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the cross-account attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that the cross-account attachment was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that the cross-account attachment was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that the cross-account attachment was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that the cross-account attachment was created.</p>
     */
    inline Attachment& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that the cross-account attachment was created.</p>
     */
    inline Attachment& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_attachmentArn;
    bool m_attachmentArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
