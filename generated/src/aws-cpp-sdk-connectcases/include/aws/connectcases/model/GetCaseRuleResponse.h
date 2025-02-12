/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connectcases/model/CaseRuleDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Detailed case rule information. In the Amazon Connect admin website, case
   * rules are known as <i>case field conditions</i>. For more information about case
   * field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCaseRuleResponse">AWS
   * API Reference</a></p>
   */
  class GetCaseRuleResponse
  {
  public:
    AWS_CONNECTCASES_API GetCaseRuleResponse();
    AWS_CONNECTCASES_API GetCaseRuleResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API GetCaseRuleResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the case rule.</p>
     */
    inline const Aws::String& GetCaseRuleArn() const{ return m_caseRuleArn; }
    inline bool CaseRuleArnHasBeenSet() const { return m_caseRuleArnHasBeenSet; }
    inline void SetCaseRuleArn(const Aws::String& value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn = value; }
    inline void SetCaseRuleArn(Aws::String&& value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn = std::move(value); }
    inline void SetCaseRuleArn(const char* value) { m_caseRuleArnHasBeenSet = true; m_caseRuleArn.assign(value); }
    inline GetCaseRuleResponse& WithCaseRuleArn(const Aws::String& value) { SetCaseRuleArn(value); return *this;}
    inline GetCaseRuleResponse& WithCaseRuleArn(Aws::String&& value) { SetCaseRuleArn(std::move(value)); return *this;}
    inline GetCaseRuleResponse& WithCaseRuleArn(const char* value) { SetCaseRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const{ return m_caseRuleId; }
    inline bool CaseRuleIdHasBeenSet() const { return m_caseRuleIdHasBeenSet; }
    inline void SetCaseRuleId(const Aws::String& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = value; }
    inline void SetCaseRuleId(Aws::String&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::move(value); }
    inline void SetCaseRuleId(const char* value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId.assign(value); }
    inline GetCaseRuleResponse& WithCaseRuleId(const Aws::String& value) { SetCaseRuleId(value); return *this;}
    inline GetCaseRuleResponse& WithCaseRuleId(Aws::String&& value) { SetCaseRuleId(std::move(value)); return *this;}
    inline GetCaseRuleResponse& WithCaseRuleId(const char* value) { SetCaseRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline GetCaseRuleResponse& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline GetCaseRuleResponse& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource has been deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline GetCaseRuleResponse& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of a case rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline GetCaseRuleResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetCaseRuleResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetCaseRuleResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the resource was created or last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline GetCaseRuleResponse& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetCaseRuleResponse& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the case rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetCaseRuleResponse& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetCaseRuleResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetCaseRuleResponse& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents what rule type should take place, under what conditions.</p>
     */
    inline const CaseRuleDetails& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const CaseRuleDetails& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(CaseRuleDetails&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline GetCaseRuleResponse& WithRule(const CaseRuleDetails& value) { SetRule(value); return *this;}
    inline GetCaseRuleResponse& WithRule(CaseRuleDetails&& value) { SetRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline GetCaseRuleResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetCaseRuleResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetCaseRuleResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline GetCaseRuleResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline GetCaseRuleResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCaseRuleResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetCaseRuleResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCaseRuleResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline GetCaseRuleResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_caseRuleArn;
    bool m_caseRuleArnHasBeenSet = false;

    Aws::String m_caseRuleId;
    bool m_caseRuleIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_deleted;
    bool m_deletedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CaseRuleDetails m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
