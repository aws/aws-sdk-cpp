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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/SharedDirectory.h>
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
namespace DirectoryService
{
namespace Model
{
  class AWS_DIRECTORYSERVICE_API DescribeSharedDirectoriesResult
  {
  public:
    DescribeSharedDirectoriesResult();
    DescribeSharedDirectoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSharedDirectoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline const Aws::Vector<SharedDirectory>& GetSharedDirectories() const{ return m_sharedDirectories; }

    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline void SetSharedDirectories(const Aws::Vector<SharedDirectory>& value) { m_sharedDirectories = value; }

    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline void SetSharedDirectories(Aws::Vector<SharedDirectory>&& value) { m_sharedDirectories = std::move(value); }

    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline DescribeSharedDirectoriesResult& WithSharedDirectories(const Aws::Vector<SharedDirectory>& value) { SetSharedDirectories(value); return *this;}

    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline DescribeSharedDirectoriesResult& WithSharedDirectories(Aws::Vector<SharedDirectory>&& value) { SetSharedDirectories(std::move(value)); return *this;}

    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline DescribeSharedDirectoriesResult& AddSharedDirectories(const SharedDirectory& value) { m_sharedDirectories.push_back(value); return *this; }

    /**
     * <p>A list of all shared directories in your account.</p>
     */
    inline DescribeSharedDirectoriesResult& AddSharedDirectories(SharedDirectory&& value) { m_sharedDirectories.push_back(std::move(value)); return *this; }


    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline DescribeSharedDirectoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline DescribeSharedDirectoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, token that indicates that more results are available. Pass this
     * value for the <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeSharedDirectories</a> to retrieve the next set of items.</p>
     */
    inline DescribeSharedDirectoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SharedDirectory> m_sharedDirectories;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
