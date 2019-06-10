/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecipeSummary.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API ListRecipesResult
  {
  public:
    ListRecipesResult();
    ListRecipesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRecipesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of available recipes.</p>
     */
    inline const Aws::Vector<RecipeSummary>& GetRecipes() const{ return m_recipes; }

    /**
     * <p>The list of available recipes.</p>
     */
    inline void SetRecipes(const Aws::Vector<RecipeSummary>& value) { m_recipes = value; }

    /**
     * <p>The list of available recipes.</p>
     */
    inline void SetRecipes(Aws::Vector<RecipeSummary>&& value) { m_recipes = std::move(value); }

    /**
     * <p>The list of available recipes.</p>
     */
    inline ListRecipesResult& WithRecipes(const Aws::Vector<RecipeSummary>& value) { SetRecipes(value); return *this;}

    /**
     * <p>The list of available recipes.</p>
     */
    inline ListRecipesResult& WithRecipes(Aws::Vector<RecipeSummary>&& value) { SetRecipes(std::move(value)); return *this;}

    /**
     * <p>The list of available recipes.</p>
     */
    inline ListRecipesResult& AddRecipes(const RecipeSummary& value) { m_recipes.push_back(value); return *this; }

    /**
     * <p>The list of available recipes.</p>
     */
    inline ListRecipesResult& AddRecipes(RecipeSummary&& value) { m_recipes.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline ListRecipesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline ListRecipesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of recipes.</p>
     */
    inline ListRecipesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RecipeSummary> m_recipes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
