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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/AccountModification.h>
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
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API DescribeAccountModificationsResult
  {
  public:
    DescribeAccountModificationsResult();
    DescribeAccountModificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAccountModificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline const Aws::Vector<AccountModification>& GetAccountModifications() const{ return m_accountModifications; }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline void SetAccountModifications(const Aws::Vector<AccountModification>& value) { m_accountModifications = value; }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline void SetAccountModifications(Aws::Vector<AccountModification>&& value) { m_accountModifications = std::move(value); }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& WithAccountModifications(const Aws::Vector<AccountModification>& value) { SetAccountModifications(value); return *this;}

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& WithAccountModifications(Aws::Vector<AccountModification>&& value) { SetAccountModifications(std::move(value)); return *this;}

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& AddAccountModifications(const AccountModification& value) { m_accountModifications.push_back(value); return *this; }

    /**
     * <p>The list of modifications to the configuration of BYOL.</p>
     */
    inline DescribeAccountModificationsResult& AddAccountModifications(AccountModification&& value) { m_accountModifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline DescribeAccountModificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline DescribeAccountModificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline DescribeAccountModificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccountModification> m_accountModifications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
