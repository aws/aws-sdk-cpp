/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Contains metadata about the ruleset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/RulesetItem">AWS
   * API Reference</a></p>
   */
  class RulesetItem
  {
  public:
    AWS_GLUEDATABREW_API RulesetItem();
    AWS_GLUEDATABREW_API RulesetItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API RulesetItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline RulesetItem& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline RulesetItem& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the ruleset.</p>
     */
    inline RulesetItem& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline RulesetItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline RulesetItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline RulesetItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline RulesetItem& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline RulesetItem& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline RulesetItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ruleset.</p>
     */
    inline RulesetItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ruleset.</p>
     */
    inline RulesetItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline RulesetItem& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline RulesetItem& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline RulesetItem& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline RulesetItem& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline RulesetItem& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The name of the ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline RulesetItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ruleset.</p>
     */
    inline RulesetItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ruleset.</p>
     */
    inline RulesetItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline RulesetItem& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline RulesetItem& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline RulesetItem& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The number of rules that are defined in the ruleset.</p>
     */
    inline int GetRuleCount() const{ return m_ruleCount; }

    /**
     * <p>The number of rules that are defined in the ruleset.</p>
     */
    inline bool RuleCountHasBeenSet() const { return m_ruleCountHasBeenSet; }

    /**
     * <p>The number of rules that are defined in the ruleset.</p>
     */
    inline void SetRuleCount(int value) { m_ruleCountHasBeenSet = true; m_ruleCount = value; }

    /**
     * <p>The number of rules that are defined in the ruleset.</p>
     */
    inline RulesetItem& WithRuleCount(int value) { SetRuleCount(value); return *this;}


    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline RulesetItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline RulesetItem& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline RulesetItem& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline RulesetItem& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_ruleCount;
    bool m_ruleCountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
