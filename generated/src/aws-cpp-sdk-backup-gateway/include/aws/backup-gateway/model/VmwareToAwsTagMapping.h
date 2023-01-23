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
    AWS_BACKUPGATEWAY_API VmwareToAwsTagMapping();
    AWS_BACKUPGATEWAY_API VmwareToAwsTagMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API VmwareToAwsTagMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline const Aws::String& GetAwsTagKey() const{ return m_awsTagKey; }

    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline bool AwsTagKeyHasBeenSet() const { return m_awsTagKeyHasBeenSet; }

    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline void SetAwsTagKey(const Aws::String& value) { m_awsTagKeyHasBeenSet = true; m_awsTagKey = value; }

    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline void SetAwsTagKey(Aws::String&& value) { m_awsTagKeyHasBeenSet = true; m_awsTagKey = std::move(value); }

    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline void SetAwsTagKey(const char* value) { m_awsTagKeyHasBeenSet = true; m_awsTagKey.assign(value); }

    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline VmwareToAwsTagMapping& WithAwsTagKey(const Aws::String& value) { SetAwsTagKey(value); return *this;}

    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline VmwareToAwsTagMapping& WithAwsTagKey(Aws::String&& value) { SetAwsTagKey(std::move(value)); return *this;}

    /**
     * <p>The key part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline VmwareToAwsTagMapping& WithAwsTagKey(const char* value) { SetAwsTagKey(value); return *this;}


    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline const Aws::String& GetAwsTagValue() const{ return m_awsTagValue; }

    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline bool AwsTagValueHasBeenSet() const { return m_awsTagValueHasBeenSet; }

    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline void SetAwsTagValue(const Aws::String& value) { m_awsTagValueHasBeenSet = true; m_awsTagValue = value; }

    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline void SetAwsTagValue(Aws::String&& value) { m_awsTagValueHasBeenSet = true; m_awsTagValue = std::move(value); }

    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline void SetAwsTagValue(const char* value) { m_awsTagValueHasBeenSet = true; m_awsTagValue.assign(value); }

    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline VmwareToAwsTagMapping& WithAwsTagValue(const Aws::String& value) { SetAwsTagValue(value); return *this;}

    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline VmwareToAwsTagMapping& WithAwsTagValue(Aws::String&& value) { SetAwsTagValue(std::move(value)); return *this;}

    /**
     * <p>The value part of the Amazon Web Services tag's key-value pair.</p>
     */
    inline VmwareToAwsTagMapping& WithAwsTagValue(const char* value) { SetAwsTagValue(value); return *this;}


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
    inline VmwareToAwsTagMapping& WithVmwareCategory(const Aws::String& value) { SetVmwareCategory(value); return *this;}

    /**
     * <p>The is the category of VMware.</p>
     */
    inline VmwareToAwsTagMapping& WithVmwareCategory(Aws::String&& value) { SetVmwareCategory(std::move(value)); return *this;}

    /**
     * <p>The is the category of VMware.</p>
     */
    inline VmwareToAwsTagMapping& WithVmwareCategory(const char* value) { SetVmwareCategory(value); return *this;}


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
    inline VmwareToAwsTagMapping& WithVmwareTagName(const Aws::String& value) { SetVmwareTagName(value); return *this;}

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline VmwareToAwsTagMapping& WithVmwareTagName(Aws::String&& value) { SetVmwareTagName(std::move(value)); return *this;}

    /**
     * <p>This is the user-defined name of a VMware tag.</p>
     */
    inline VmwareToAwsTagMapping& WithVmwareTagName(const char* value) { SetVmwareTagName(value); return *this;}

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
