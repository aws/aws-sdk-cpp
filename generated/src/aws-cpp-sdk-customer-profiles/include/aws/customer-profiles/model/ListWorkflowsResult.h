/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListWorkflowsItem.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListWorkflowsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListWorkflowsResult();
    AWS_CUSTOMERPROFILES_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List containing workflow details.</p>
     */
    inline const Aws::Vector<ListWorkflowsItem>& GetItems() const{ return m_items; }

    /**
     * <p>List containing workflow details.</p>
     */
    inline void SetItems(const Aws::Vector<ListWorkflowsItem>& value) { m_items = value; }

    /**
     * <p>List containing workflow details.</p>
     */
    inline void SetItems(Aws::Vector<ListWorkflowsItem>&& value) { m_items = std::move(value); }

    /**
     * <p>List containing workflow details.</p>
     */
    inline ListWorkflowsResult& WithItems(const Aws::Vector<ListWorkflowsItem>& value) { SetItems(value); return *this;}

    /**
     * <p>List containing workflow details.</p>
     */
    inline ListWorkflowsResult& WithItems(Aws::Vector<ListWorkflowsItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List containing workflow details.</p>
     */
    inline ListWorkflowsResult& AddItems(const ListWorkflowsItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List containing workflow details.</p>
     */
    inline ListWorkflowsResult& AddItems(ListWorkflowsItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListWorkflowsItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
