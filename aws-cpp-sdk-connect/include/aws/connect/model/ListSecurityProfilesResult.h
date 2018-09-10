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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SecurityProfileSummary.h>
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
  class AWS_CONNECT_API ListSecurityProfilesResult
  {
  public:
    ListSecurityProfilesResult();
    ListSecurityProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSecurityProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>SecurityProfileSummary</code> objects.</p>
     */
    inline const Aws::Vector<SecurityProfileSummary>& GetSecurityProfileSummaryList() const{ return m_securityProfileSummaryList; }

    /**
     * <p>An array of <code>SecurityProfileSummary</code> objects.</p>
     */
    inline void SetSecurityProfileSummaryList(const Aws::Vector<SecurityProfileSummary>& value) { m_securityProfileSummaryList = value; }

    /**
     * <p>An array of <code>SecurityProfileSummary</code> objects.</p>
     */
    inline void SetSecurityProfileSummaryList(Aws::Vector<SecurityProfileSummary>&& value) { m_securityProfileSummaryList = std::move(value); }

    /**
     * <p>An array of <code>SecurityProfileSummary</code> objects.</p>
     */
    inline ListSecurityProfilesResult& WithSecurityProfileSummaryList(const Aws::Vector<SecurityProfileSummary>& value) { SetSecurityProfileSummaryList(value); return *this;}

    /**
     * <p>An array of <code>SecurityProfileSummary</code> objects.</p>
     */
    inline ListSecurityProfilesResult& WithSecurityProfileSummaryList(Aws::Vector<SecurityProfileSummary>&& value) { SetSecurityProfileSummaryList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>SecurityProfileSummary</code> objects.</p>
     */
    inline ListSecurityProfilesResult& AddSecurityProfileSummaryList(const SecurityProfileSummary& value) { m_securityProfileSummaryList.push_back(value); return *this; }

    /**
     * <p>An array of <code>SecurityProfileSummary</code> objects.</p>
     */
    inline ListSecurityProfilesResult& AddSecurityProfileSummaryList(SecurityProfileSummary&& value) { m_securityProfileSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListSecurityProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListSecurityProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string returned in the response. Use the value returned in the response as
     * the value of the NextToken in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListSecurityProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SecurityProfileSummary> m_securityProfileSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
