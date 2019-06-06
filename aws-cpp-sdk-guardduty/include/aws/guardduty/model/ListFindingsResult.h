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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{
  class AWS_GUARDDUTY_API ListFindingsResult
  {
  public:
    ListFindingsResult();
    ListFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIds = value; }

    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIds = std::move(value); }

    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline ListFindingsResult& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline ListFindingsResult& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline ListFindingsResult& AddFindingIds(const Aws::String& value) { m_findingIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline ListFindingsResult& AddFindingIds(Aws::String&& value) { m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the findings you are listing.</p>
     */
    inline ListFindingsResult& AddFindingIds(const char* value) { m_findingIds.push_back(value); return *this; }


    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline ListFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline ListFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination parameter to be used on the next list operation to retrieve more
     * items.</p>
     */
    inline ListFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_findingIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
