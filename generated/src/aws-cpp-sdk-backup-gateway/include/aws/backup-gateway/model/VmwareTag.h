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
    AWS_BACKUPGATEWAY_API VmwareTag() = default;
    AWS_BACKUPGATEWAY_API VmwareTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API VmwareTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The is the category of VMware.</p>
     */
    inline const Aws::String& GetVmwareCategory() const { return m_vmwareCategory; }
    inline bool VmwareCategoryHasBeenSet() const { return m_vmwareCategoryHasBeenSet; }
    template<typename VmwareCategoryT = Aws::String>
    void SetVmwareCategory(VmwareCategoryT&& value) { m_vmwareCategoryHasBeenSet = true; m_vmwareCategory = std::forward<VmwareCategoryT>(value); }
    template<typename VmwareCategoryT = Aws::String>
    VmwareTag& WithVmwareCategory(VmwareCategoryT&& value) { SetVmwareCategory(std::forward<VmwareCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a user-defined description of a VMware tag.</p>
     */
    inline const Aws::String& GetVmwareTagDescription() const { return m_vmwareTagDescription; }
    inline bool VmwareTagDescriptionHasBeenSet() const { return m_vmwareTagDescriptionHasBeenSet; }
    template<typename VmwareTagDescriptionT = Aws::String>
    void SetVmwareTagDescription(VmwareTagDescriptionT&& value) { m_vmwareTagDescriptionHasBeenSet = true; m_vmwareTagDescription = std::forward<VmwareTagDescriptionT>(value); }
    template<typename VmwareTagDescriptionT = Aws::String>
    VmwareTag& WithVmwareTagDescription(VmwareTagDescriptionT&& value) { SetVmwareTagDescription(std::forward<VmwareTagDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline const Aws::String& GetVmwareTagName() const { return m_vmwareTagName; }
    inline bool VmwareTagNameHasBeenSet() const { return m_vmwareTagNameHasBeenSet; }
    template<typename VmwareTagNameT = Aws::String>
    void SetVmwareTagName(VmwareTagNameT&& value) { m_vmwareTagNameHasBeenSet = true; m_vmwareTagName = std::forward<VmwareTagNameT>(value); }
    template<typename VmwareTagNameT = Aws::String>
    VmwareTag& WithVmwareTagName(VmwareTagNameT&& value) { SetVmwareTagName(std::forward<VmwareTagNameT>(value)); return *this;}
    ///@}
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
