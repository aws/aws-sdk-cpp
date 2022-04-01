﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/Category.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API ListSkillsStoreCategoriesResult
  {
  public:
    ListSkillsStoreCategoriesResult();
    ListSkillsStoreCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSkillsStoreCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of categories.</p>
     */
    inline const Aws::Vector<Category>& GetCategoryList() const{ return m_categoryList; }

    /**
     * <p>The list of categories.</p>
     */
    inline void SetCategoryList(const Aws::Vector<Category>& value) { m_categoryList = value; }

    /**
     * <p>The list of categories.</p>
     */
    inline void SetCategoryList(Aws::Vector<Category>&& value) { m_categoryList = std::move(value); }

    /**
     * <p>The list of categories.</p>
     */
    inline ListSkillsStoreCategoriesResult& WithCategoryList(const Aws::Vector<Category>& value) { SetCategoryList(value); return *this;}

    /**
     * <p>The list of categories.</p>
     */
    inline ListSkillsStoreCategoriesResult& WithCategoryList(Aws::Vector<Category>&& value) { SetCategoryList(std::move(value)); return *this;}

    /**
     * <p>The list of categories.</p>
     */
    inline ListSkillsStoreCategoriesResult& AddCategoryList(const Category& value) { m_categoryList.push_back(value); return *this; }

    /**
     * <p>The list of categories.</p>
     */
    inline ListSkillsStoreCategoriesResult& AddCategoryList(Category&& value) { m_categoryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The tokens used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSkillsStoreCategoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSkillsStoreCategoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListSkillsStoreCategoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Category> m_categoryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
