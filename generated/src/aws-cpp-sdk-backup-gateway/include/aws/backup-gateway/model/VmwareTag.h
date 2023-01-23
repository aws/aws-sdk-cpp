/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BackupGateway
{
namespace Model
{

  /**
   * <p>A VMware tag is a tag attached to a specific virtual machine. A <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_Tag.html">tag</a>
   * is a key-value pair you can use to manage, filter, and search for your
   * resources.</p> <p>The content of VMware tags can be matched to Amazon Web
   * Services tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/VmwareTag">AWS
   * API Reference</a></p>
   */
  class VmwareTag
  {
  public:
    AWS_BACKUPGATEWAY_API VmwareTag();
    AWS_BACKUPGATEWAY_API VmwareTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API VmwareTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The is the category of VMware.</p>
     */
    inline const Aws::String& GetVmwareCategory() const{ return m_vmwareCategory; }

    /**
     * <p>The is the category of VMware.</p>
     */
    inline bool VmwareCategoryHasBeenSet() const { return m_vmwareCategoryHasBeenSet; }

    /**
     * <p>The is the category of VMware.</p>
     */
    inline void SetVmwareCategory(const Aws::String& value) { m_vmwareCategoryHasBeenSet = true; m_vmwareCategory = value; }

    /**
     * <p>The is the category of VMware.</p>
     */
    inline void SetVmwareCategory(Aws::String&& value) { m_vmwareCategoryHasBeenSet = true; m_vmwareCategory = std::move(value); }

    /**
     * <p>The is the category of VMware.</p>
     */
    inline void SetVmwareCategory(const char* value) { m_vmwareCategoryHasBeenSet = true; m_vmwareCategory.assign(value); }

    /**
     * <p>The is the category of VMware.</p>
     */
    inline VmwareTag& WithVmwareCategory(const Aws::String& value) { SetVmwareCategory(value); return *this;}

    /**
     * <p>The is the category of VMware.</p>
     */
    inline VmwareTag& WithVmwareCategory(Aws::String&& value) { SetVmwareCategory(std::move(value)); return *this;}

    /**
     * <p>The is the category of VMware.</p>
     */
    inline VmwareTag& WithVmwareCategory(const char* value) { SetVmwareCategory(value); return *this;}


    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline const Aws::String& GetVmwareTagDescription() const{ return m_vmwareTagDescription; }

    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline bool VmwareTagDescriptionHasBeenSet() const { return m_vmwareTagDescriptionHasBeenSet; }

    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline void SetVmwareTagDescription(const Aws::String& value) { m_vmwareTagDescriptionHasBeenSet = true; m_vmwareTagDescription = value; }

    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline void SetVmwareTagDescription(Aws::String&& value) { m_vmwareTagDescriptionHasBeenSet = true; m_vmwareTagDescription = std::move(value); }

    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline void SetVmwareTagDescription(const char* value) { m_vmwareTagDescriptionHasBeenSet = true; m_vmwareTagDescription.assign(value); }

    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline VmwareTag& WithVmwareTagDescription(const Aws::String& value) { SetVmwareTagDescription(value); return *this;}

    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline VmwareTag& WithVmwareTagDescription(Aws::String&& value) { SetVmwareTagDescription(std::move(value)); return *this;}

    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline VmwareTag& WithVmwareTagDescription(const char* value) { SetVmwareTagDescription(value); return *this;}


    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline const Aws::String& GetVmwareTagName() const{ return m_vmwareTagName; }

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline bool VmwareTagNameHasBeenSet() const { return m_vmwareTagNameHasBeenSet; }

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline void SetVmwareTagName(const Aws::String& value) { m_vmwareTagNameHasBeenSet = true; m_vmwareTagName = value; }

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline void SetVmwareTagName(Aws::String&& value) { m_vmwareTagNameHasBeenSet = true; m_vmwareTagName = std::move(value); }

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline void SetVmwareTagName(const char* value) { m_vmwareTagNameHasBeenSet = true; m_vmwareTagName.assign(value); }

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline VmwareTag& WithVmwareTagName(const Aws::String& value) { SetVmwareTagName(value); return *this;}

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline VmwareTag& WithVmwareTagName(Aws::String&& value) { SetVmwareTagName(std::move(value)); return *this;}

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline VmwareTag& WithVmwareTagName(const char* value) { SetVmwareTagName(value); return *this;}

  private:

    Aws::String m_vmwareCategory;
    bool m_vmwareCategoryHasBeenSet = false;

    Aws::String m_vmwareTagDescription;
    bool m_vmwareTagDescriptionHasBeenSet = false;

    Aws::String m_vmwareTagName;
    bool m_vmwareTagNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
