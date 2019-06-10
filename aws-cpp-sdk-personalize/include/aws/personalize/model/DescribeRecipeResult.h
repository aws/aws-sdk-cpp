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
#include <aws/personalize/model/Recipe.h>
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
  class AWS_PERSONALIZE_API DescribeRecipeResult
  {
  public:
    DescribeRecipeResult();
    DescribeRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the recipe.</p>
     */
    inline const Recipe& GetRecipe() const{ return m_recipe; }

    /**
     * <p>An object that describes the recipe.</p>
     */
    inline void SetRecipe(const Recipe& value) { m_recipe = value; }

    /**
     * <p>An object that describes the recipe.</p>
     */
    inline void SetRecipe(Recipe&& value) { m_recipe = std::move(value); }

    /**
     * <p>An object that describes the recipe.</p>
     */
    inline DescribeRecipeResult& WithRecipe(const Recipe& value) { SetRecipe(value); return *this;}

    /**
     * <p>An object that describes the recipe.</p>
     */
    inline DescribeRecipeResult& WithRecipe(Recipe&& value) { SetRecipe(std::move(value)); return *this;}

  private:

    Recipe m_recipe;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
