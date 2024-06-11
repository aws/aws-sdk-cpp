﻿/**
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
   * specifies the <i>principals</i> who have permission to work with
   * <i>resources</i> in your account, which you also list in the
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment.</p>
     */
    inline const Aws::String& GetAttachmentArn() const{ return m_attachmentArn; }
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }
    inline void SetAttachmentArn(const Aws::String& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = value; }
    inline void SetAttachmentArn(Aws::String&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::move(value); }
    inline void SetAttachmentArn(const char* value) { m_attachmentArnHasBeenSet = true; m_attachmentArn.assign(value); }
    inline Attachment& WithAttachmentArn(const Aws::String& value) { SetAttachmentArn(value); return *this;}
    inline Attachment& WithAttachmentArn(Aws::String&& value) { SetAttachmentArn(std::move(value)); return *this;}
    inline Attachment& WithAttachmentArn(const char* value) { SetAttachmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cross-account attachment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Attachment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Attachment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Attachment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principals included in the cross-account attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }
    inline Attachment& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}
    inline Attachment& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline Attachment& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    inline Attachment& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }
    inline Attachment& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resources included in the cross-account attachment.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline Attachment& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}
    inline Attachment& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}
    inline Attachment& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline Attachment& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that the cross-account attachment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Attachment& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Attachment& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the cross-account attachment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Attachment& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Attachment& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
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
