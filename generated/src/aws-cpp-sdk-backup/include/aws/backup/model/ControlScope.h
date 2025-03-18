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
    AWS_BACKUP_API ControlScope() = default;
    AWS_BACKUP_API ControlScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ControlScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the only Amazon Web Services resource that you want your control
     * scope to contain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComplianceResourceIds() const { return m_complianceResourceIds; }
    inline bool ComplianceResourceIdsHasBeenSet() const { return m_complianceResourceIdsHasBeenSet; }
    template<typename ComplianceResourceIdsT = Aws::Vector<Aws::String>>
    void SetComplianceResourceIds(ComplianceResourceIdsT&& value) { m_complianceResourceIdsHasBeenSet = true; m_complianceResourceIds = std::forward<ComplianceResourceIdsT>(value); }
    template<typename ComplianceResourceIdsT = Aws::Vector<Aws::String>>
    ControlScope& WithComplianceResourceIds(ComplianceResourceIdsT&& value) { SetComplianceResourceIds(std::forward<ComplianceResourceIdsT>(value)); return *this;}
    template<typename ComplianceResourceIdsT = Aws::String>
    ControlScope& AddComplianceResourceIds(ComplianceResourceIdsT&& value) { m_complianceResourceIdsHasBeenSet = true; m_complianceResourceIds.emplace_back(std::forward<ComplianceResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes whether the control scope includes one or more types of resources,
     * such as <code>EFS</code> or <code>RDS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComplianceResourceTypes() const { return m_complianceResourceTypes; }
    inline bool ComplianceResourceTypesHasBeenSet() const { return m_complianceResourceTypesHasBeenSet; }
    template<typename ComplianceResourceTypesT = Aws::Vector<Aws::String>>
    void SetComplianceResourceTypes(ComplianceResourceTypesT&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes = std::forward<ComplianceResourceTypesT>(value); }
    template<typename ComplianceResourceTypesT = Aws::Vector<Aws::String>>
    ControlScope& WithComplianceResourceTypes(ComplianceResourceTypesT&& value) { SetComplianceResourceTypes(std::forward<ComplianceResourceTypesT>(value)); return *this;}
    template<typename ComplianceResourceTypesT = Aws::String>
    ControlScope& AddComplianceResourceTypes(ComplianceResourceTypesT&& value) { m_complianceResourceTypesHasBeenSet = true; m_complianceResourceTypes.emplace_back(std::forward<ComplianceResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag key-value pair applied to those Amazon Web Services resources that
     * you want to trigger an evaluation for a rule. A maximum of one key-value pair
     * can be provided. The tag value is optional, but it cannot be an empty string if
     * you are creating or editing a framework from the console (though the value can
     * be an empty string when included in a CloudFormation template).</p> <p>The
     * structure to assign a tag is:
     * <code>[{"Key":"string","Value":"string"}]</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ControlScope& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ControlScope& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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
