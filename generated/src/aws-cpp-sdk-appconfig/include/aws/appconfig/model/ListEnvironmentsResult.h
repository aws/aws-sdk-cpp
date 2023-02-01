/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/Environment.h>
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
namespace AppConfig
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_APPCONFIG_API ListEnvironmentsResult();
    AWS_APPCONFIG_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The elements from this collection.</p>
     */
    inline const Aws::Vector<Environment>& GetItems() const{ return m_items; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline void SetItems(const Aws::Vector<Environment>& value) { m_items = value; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline void SetItems(Aws::Vector<Environment>&& value) { m_items = std::move(value); }

    /**
     * <p>The elements from this collection.</p>
     */
    inline ListEnvironmentsResult& WithItems(const Aws::Vector<Environment>& value) { SetItems(value); return *this;}

    /**
     * <p>The elements from this collection.</p>
     */
    inline ListEnvironmentsResult& WithItems(Aws::Vector<Environment>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The elements from this collection.</p>
     */
    inline ListEnvironmentsResult& AddItems(const Environment& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The elements from this collection.</p>
     */
    inline ListEnvironmentsResult& AddItems(Environment&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Environment> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
