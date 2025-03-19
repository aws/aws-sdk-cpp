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
   * <p>This displays the mapping of on-premises VMware tags to the corresponding
   * Amazon Web Services tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/VmwareToAwsTagMapping">AWS
   * API Reference</a></p>
   */
  class VmwareToAwsTagMapping
  {
  public:
    AWS_BACKUPGATEWAY_API VmwareToAwsTagMapping() = default;
    AWS_BACKUPGATEWAY_API VmwareToAwsTagMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API VmwareToAwsTagMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline const Aws::String& GetAwsTagKey() const { return m_awsTagKey; }
    inline bool AwsTagKeyHasBeenSet() const { return m_awsTagKeyHasBeenSet; }
    template<typename AwsTagKeyT = Aws::String>
    void SetAwsTagKey(AwsTagKeyT&& value) { m_awsTagKeyHasBeenSet = true; m_awsTagKey = std::forward<AwsTagKeyT>(value); }
    template<typename AwsTagKeyT = Aws::String>
    VmwareToAwsTagMapping& WithAwsTagKey(AwsTagKeyT&& value) { SetAwsTagKey(std::forward<AwsTagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline const Aws::String& GetAwsTagValue() const { return m_awsTagValue; }
    inline bool AwsTagValueHasBeenSet() const { return m_awsTagValueHasBeenSet; }
    template<typename AwsTagValueT = Aws::String>
    void SetAwsTagValue(AwsTagValueT&& value) { m_awsTagValueHasBeenSet = true; m_awsTagValue = std::forward<AwsTagValueT>(value); }
    template<typename AwsTagValueT = Aws::String>
    VmwareToAwsTagMapping& WithAwsTagValue(AwsTagValueT&& value) { SetAwsTagValue(std::forward<AwsTagValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The is the category of VMware.</p>
     */
    inline const Aws::String& GetVmwareCategory() const { return m_vmwareCategory; }
    inline bool VmwareCategoryHasBeenSet() const { return m_vmwareCategoryHasBeenSet; }
    template<typename VmwareCategoryT = Aws::String>
    void SetVmwareCategory(VmwareCategoryT&& value) { m_vmwareCategoryHasBeenSet = true; m_vmwareCategory = std::forward<VmwareCategoryT>(value); }
    template<typename VmwareCategoryT = Aws::String>
    VmwareToAwsTagMapping& WithVmwareCategory(VmwareCategoryT&& value) { SetVmwareCategory(std::forward<VmwareCategoryT>(value)); return *this;}
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
    VmwareToAwsTagMapping& WithVmwareTagName(VmwareTagNameT&& value) { SetVmwareTagName(std::forward<VmwareTagNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsTagKey;
    bool m_awsTagKeyHasBeenSet = false;

    Aws::String m_awsTagValue;
    bool m_awsTagValueHasBeenSet = false;

    Aws::String m_vmwareCategory;
    bool m_vmwareCategoryHasBeenSet = false;

    Aws::String m_vmwareTagName;
    bool m_vmwareTagNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
