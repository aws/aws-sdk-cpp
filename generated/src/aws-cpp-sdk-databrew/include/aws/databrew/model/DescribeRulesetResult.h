/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/Rule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{
  class DescribeRulesetResult
  {
  public:
    AWS_GLUEDATABREW_API DescribeRulesetResult();
    AWS_GLUEDATABREW_API DescribeRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline DescribeRulesetResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline DescribeRulesetResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource (dataset) that the ruleset is
     * associated with.</p>
     */
    inline DescribeRulesetResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rules = value; }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rules = std::move(value); }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline DescribeRulesetResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline DescribeRulesetResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline DescribeRulesetResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline DescribeRulesetResult& AddRules(Rule&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDate = value; }

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDate = std::move(value); }

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline DescribeRulesetResult& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the ruleset was created.</p>
     */
    inline DescribeRulesetResult& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline DescribeRulesetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline DescribeRulesetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the ruleset.</p>
     */
    inline DescribeRulesetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline DescribeRulesetResult& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline DescribeRulesetResult& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who last modified the ruleset.</p>
     */
    inline DescribeRulesetResult& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The modification date and time of the ruleset.</p>
     */
    inline DescribeRulesetResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline DescribeRulesetResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline DescribeRulesetResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset.</p>
     */
    inline DescribeRulesetResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags that have been applied to the ruleset.</p>
     */
    inline DescribeRulesetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_targetArn;

    Aws::Vector<Rule> m_rules;

    Aws::Utils::DateTime m_createDate;

    Aws::String m_createdBy;

    Aws::String m_lastModifiedBy;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_resourceArn;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
