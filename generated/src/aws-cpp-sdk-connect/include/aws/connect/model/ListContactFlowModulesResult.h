/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowModuleSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListContactFlowModulesResult
  {
  public:
    AWS_CONNECT_API ListContactFlowModulesResult();
    AWS_CONNECT_API ListContactFlowModulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactFlowModulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the flow module.</p>
     */
    inline const Aws::Vector<ContactFlowModuleSummary>& GetContactFlowModulesSummaryList() const{ return m_contactFlowModulesSummaryList; }

    /**
     * <p>Information about the flow module.</p>
     */
    inline void SetContactFlowModulesSummaryList(const Aws::Vector<ContactFlowModuleSummary>& value) { m_contactFlowModulesSummaryList = value; }

    /**
     * <p>Information about the flow module.</p>
     */
    inline void SetContactFlowModulesSummaryList(Aws::Vector<ContactFlowModuleSummary>&& value) { m_contactFlowModulesSummaryList = std::move(value); }

    /**
     * <p>Information about the flow module.</p>
     */
    inline ListContactFlowModulesResult& WithContactFlowModulesSummaryList(const Aws::Vector<ContactFlowModuleSummary>& value) { SetContactFlowModulesSummaryList(value); return *this;}

    /**
     * <p>Information about the flow module.</p>
     */
    inline ListContactFlowModulesResult& WithContactFlowModulesSummaryList(Aws::Vector<ContactFlowModuleSummary>&& value) { SetContactFlowModulesSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the flow module.</p>
     */
    inline ListContactFlowModulesResult& AddContactFlowModulesSummaryList(const ContactFlowModuleSummary& value) { m_contactFlowModulesSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the flow module.</p>
     */
    inline ListContactFlowModulesResult& AddContactFlowModulesSummaryList(ContactFlowModuleSummary&& value) { m_contactFlowModulesSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListContactFlowModulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContactFlowModulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListContactFlowModulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContactFlowModuleSummary> m_contactFlowModulesSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
