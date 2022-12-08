/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/databrew/model/RecipeStep.h>
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
  class DescribeRecipeResult
  {
  public:
    AWS_GLUEDATABREW_API DescribeRecipeResult();
    AWS_GLUEDATABREW_API DescribeRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DescribeRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier (user name) of the user who created the recipe.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The identifier (user name) of the user who created the recipe.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The identifier (user name) of the user who created the recipe.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The identifier (user name) of the user who created the recipe.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The identifier (user name) of the user who created the recipe.</p>
     */
    inline DescribeRecipeResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The identifier (user name) of the user who created the recipe.</p>
     */
    inline DescribeRecipeResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (user name) of the user who created the recipe.</p>
     */
    inline DescribeRecipeResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDate = value; }

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDate = std::move(value); }

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline DescribeRecipeResult& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the recipe was created.</p>
     */
    inline DescribeRecipeResult& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The identifier (user name) of the user who last modified the recipe.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The identifier (user name) of the user who last modified the recipe.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedBy = value; }

    /**
     * <p>The identifier (user name) of the user who last modified the recipe.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedBy = std::move(value); }

    /**
     * <p>The identifier (user name) of the user who last modified the recipe.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedBy.assign(value); }

    /**
     * <p>The identifier (user name) of the user who last modified the recipe.</p>
     */
    inline DescribeRecipeResult& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The identifier (user name) of the user who last modified the recipe.</p>
     */
    inline DescribeRecipeResult& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (user name) of the user who last modified the recipe.</p>
     */
    inline DescribeRecipeResult& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time that the recipe was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time that the recipe was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date and time that the recipe was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time that the recipe was last modified.</p>
     */
    inline DescribeRecipeResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time that the recipe was last modified.</p>
     */
    inline DescribeRecipeResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The name of the project associated with this recipe.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project associated with this recipe.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }

    /**
     * <p>The name of the project associated with this recipe.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }

    /**
     * <p>The name of the project associated with this recipe.</p>
     */
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }

    /**
     * <p>The name of the project associated with this recipe.</p>
     */
    inline DescribeRecipeResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project associated with this recipe.</p>
     */
    inline DescribeRecipeResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project associated with this recipe.</p>
     */
    inline DescribeRecipeResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The identifier (user name) of the user who last published the recipe.</p>
     */
    inline const Aws::String& GetPublishedBy() const{ return m_publishedBy; }

    /**
     * <p>The identifier (user name) of the user who last published the recipe.</p>
     */
    inline void SetPublishedBy(const Aws::String& value) { m_publishedBy = value; }

    /**
     * <p>The identifier (user name) of the user who last published the recipe.</p>
     */
    inline void SetPublishedBy(Aws::String&& value) { m_publishedBy = std::move(value); }

    /**
     * <p>The identifier (user name) of the user who last published the recipe.</p>
     */
    inline void SetPublishedBy(const char* value) { m_publishedBy.assign(value); }

    /**
     * <p>The identifier (user name) of the user who last published the recipe.</p>
     */
    inline DescribeRecipeResult& WithPublishedBy(const Aws::String& value) { SetPublishedBy(value); return *this;}

    /**
     * <p>The identifier (user name) of the user who last published the recipe.</p>
     */
    inline DescribeRecipeResult& WithPublishedBy(Aws::String&& value) { SetPublishedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier (user name) of the user who last published the recipe.</p>
     */
    inline DescribeRecipeResult& WithPublishedBy(const char* value) { SetPublishedBy(value); return *this;}


    /**
     * <p>The date and time when the recipe was last published.</p>
     */
    inline const Aws::Utils::DateTime& GetPublishedDate() const{ return m_publishedDate; }

    /**
     * <p>The date and time when the recipe was last published.</p>
     */
    inline void SetPublishedDate(const Aws::Utils::DateTime& value) { m_publishedDate = value; }

    /**
     * <p>The date and time when the recipe was last published.</p>
     */
    inline void SetPublishedDate(Aws::Utils::DateTime&& value) { m_publishedDate = std::move(value); }

    /**
     * <p>The date and time when the recipe was last published.</p>
     */
    inline DescribeRecipeResult& WithPublishedDate(const Aws::Utils::DateTime& value) { SetPublishedDate(value); return *this;}

    /**
     * <p>The date and time when the recipe was last published.</p>
     */
    inline DescribeRecipeResult& WithPublishedDate(Aws::Utils::DateTime&& value) { SetPublishedDate(std::move(value)); return *this;}


    /**
     * <p>The description of the recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the recipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the recipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the recipe.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the recipe.</p>
     */
    inline DescribeRecipeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the recipe.</p>
     */
    inline DescribeRecipeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the recipe.</p>
     */
    inline DescribeRecipeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the recipe.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the recipe.</p>
     */
    inline DescribeRecipeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline DescribeRecipeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recipe.</p>
     */
    inline DescribeRecipeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline const Aws::Vector<RecipeStep>& GetSteps() const{ return m_steps; }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline void SetSteps(const Aws::Vector<RecipeStep>& value) { m_steps = value; }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline void SetSteps(Aws::Vector<RecipeStep>&& value) { m_steps = std::move(value); }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline DescribeRecipeResult& WithSteps(const Aws::Vector<RecipeStep>& value) { SetSteps(value); return *this;}

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline DescribeRecipeResult& WithSteps(Aws::Vector<RecipeStep>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline DescribeRecipeResult& AddSteps(const RecipeStep& value) { m_steps.push_back(value); return *this; }

    /**
     * <p>One or more steps to be performed by the recipe. Each step consists of an
     * action, and the conditions under which the action should succeed.</p>
     */
    inline DescribeRecipeResult& AddSteps(RecipeStep&& value) { m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata tags associated with this project.</p>
     */
    inline DescribeRecipeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ARN of the recipe.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the recipe.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The ARN of the recipe.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the recipe.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the recipe.</p>
     */
    inline DescribeRecipeResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the recipe.</p>
     */
    inline DescribeRecipeResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the recipe.</p>
     */
    inline DescribeRecipeResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The recipe version identifier.</p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }

    /**
     * <p>The recipe version identifier.</p>
     */
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersion = value; }

    /**
     * <p>The recipe version identifier.</p>
     */
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersion = std::move(value); }

    /**
     * <p>The recipe version identifier.</p>
     */
    inline void SetRecipeVersion(const char* value) { m_recipeVersion.assign(value); }

    /**
     * <p>The recipe version identifier.</p>
     */
    inline DescribeRecipeResult& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}

    /**
     * <p>The recipe version identifier.</p>
     */
    inline DescribeRecipeResult& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}

    /**
     * <p>The recipe version identifier.</p>
     */
    inline DescribeRecipeResult& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}

  private:

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_createDate;

    Aws::String m_lastModifiedBy;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_projectName;

    Aws::String m_publishedBy;

    Aws::Utils::DateTime m_publishedDate;

    Aws::String m_description;

    Aws::String m_name;

    Aws::Vector<RecipeStep> m_steps;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_resourceArn;

    Aws::String m_recipeVersion;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
