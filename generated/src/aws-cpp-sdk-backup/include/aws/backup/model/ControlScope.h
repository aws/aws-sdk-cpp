/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>A framework consists of one or more controls. Each control has its own
   * control scope. The control scope can include one or more resource types, a
   * combination of a tag key and value, or a combination of one resource type and
   * one resource ID. If no scope is specified, evaluations for the rule are
   * triggered when any resource in your recording group changes in
   * configuration.</p>  <p>To set a control scope that includes all of a
   * particular resource, leave the <code>ControlScope</code> empty or do not pass it
   * when calling <code>CreateFramework</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ControlScope">AWS
   * API Reference</a></p>
   */
  class ControlScope
  {
  public:
    AWS_BACKUP_API ControlScope();
    AWS_BACKUP_API ControlScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ControlScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComplianceResourceIds() const{ return m_complianceResourceIds; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline bool ComplianceResourceIdsHasBeenSet() const { return m_complianceResourceIdsHasBeenSet; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline void SetComplianceResourceIds(const Aws::Vector<Aws::String>& value) { m_complianceResourceIdsHasBeenSet = true; m_complianceResourceIds = value; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline void SetComplianceResourceIds(Aws::Vector<Aws::String>&& value) { m_complianceResourceIdsHasBeenSet = true; m_complianceResourceIds = std::move(value); }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline ControlScope& WithComplianceResourceIds(const Aws::Vector<Aws::String>& value) { SetComplianceResourceIds(value); return *this;}

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline ControlScope& WithComplianceResourceIds(Aws::Vector<Aws::String>&& value) { SetComplianceResourceIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline ControlScope& AddComplianceResourceIds(const Aws::String& value) { m_complianceResourceIdsHasBeenSet = true; m_complianceResourceIds.push_back(value); return *this; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline ControlScope& AddComplianceResourceIds(Aws::String&& value) { m_complianceResourceIdsHasBeenSet = true; m_complianceResourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline ControlScope& AddComplianceResourceIds(const char* value) { m_complianceResourceIdsHasBeenSet = true; m_complianceResourceIds.push_back(value); return *this; }


    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComplianceResourceTypes() const{ return m_complianceResourceTypes; }

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline bool ComplianceResourceTypesHasBeenSet() const { return m_complianceResourceTypesHasBeenSet; }

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline void SetComplianceResourceTypes(const Aws::Vector<Aws::String>& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes = value; }

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline void SetComplianceResourceTypes(Aws::Vector<Aws::String>&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes = std::move(value); }

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline ControlScope& WithComplianceResourceTypes(const Aws::Vector<Aws::String>& value) { SetComplianceResourceTypes(value); return *this;}

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline ControlScope& WithComplianceResourceTypes(Aws::Vector<Aws::String>&& value) { SetComplianceResourceTypes(std::move(value)); return *this;}

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline ControlScope& AddComplianceResourceTypes(const Aws::String& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.push_back(value); return *this; }

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline ControlScope& AddComplianceResourceTypes(Aws::String&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline ControlScope& AddComplianceResourceTypes(const char* value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.push_back(value); return *this; }


    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string.
     * The structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline ControlScope& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_complianceResourceIds;
    bool m_complianceResourceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_complianceResourceTypes;
    bool m_complianceResourceTypesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
