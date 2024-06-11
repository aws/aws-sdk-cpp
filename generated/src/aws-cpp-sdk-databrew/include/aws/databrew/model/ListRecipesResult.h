﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/Recipe.h>
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
  class ListRecipesResult
  {
  public:
    AWS_GLUEDATABREW_API ListRecipesResult();
    AWS_GLUEDATABREW_API ListRecipesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API ListRecipesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of recipes that are defined.</p>
     */
    inline const Aws::Vector<Recipe>& GetRecipes() const{ return m_recipes; }
    inline void SetRecipes(const Aws::Vector<Recipe>& value) { m_recipes = value; }
    inline void SetRecipes(Aws::Vector<Recipe>&& value) { m_recipes = std::move(value); }
    inline ListRecipesResult& WithRecipes(const Aws::Vector<Recipe>& value) { SetRecipes(value); return *this;}
    inline ListRecipesResult& WithRecipes(Aws::Vector<Recipe>&& value) { SetRecipes(std::move(value)); return *this;}
    inline ListRecipesResult& AddRecipes(const Recipe& value) { m_recipes.push_back(value); return *this; }
    inline ListRecipesResult& AddRecipes(Recipe&& value) { m_recipes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecipesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecipesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecipesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecipesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecipesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecipesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Recipe> m_recipes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
