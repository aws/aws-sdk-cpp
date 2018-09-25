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
#include <aws/ds/model/DirectoryDescription.h>
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
  /**
   * <p>Contains the results of the <a>DescribeDirectories</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeDirectoriesResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DescribeDirectoriesResult
  {
  public:
    DescribeDirectoriesResult();
    DescribeDirectoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDirectoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of <a>DirectoryDescription</a> objects that were retrieved.</p>
     * <p>It is possible that this list contains less than the number of items
     * specified in the <code>Limit</code> member of the request. This occurs if there
     * are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline const Aws::Vector<DirectoryDescription>& GetDirectoryDescriptions() const{ return m_directoryDescriptions; }

    /**
     * <p>The list of <a>DirectoryDescription</a> objects that were retrieved.</p>
     * <p>It is possible that this list contains less than the number of items
     * specified in the <code>Limit</code> member of the request. This occurs if there
     * are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline void SetDirectoryDescriptions(const Aws::Vector<DirectoryDescription>& value) { m_directoryDescriptions = value; }

    /**
     * <p>The list of <a>DirectoryDescription</a> objects that were retrieved.</p>
     * <p>It is possible that this list contains less than the number of items
     * specified in the <code>Limit</code> member of the request. This occurs if there
     * are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline void SetDirectoryDescriptions(Aws::Vector<DirectoryDescription>&& value) { m_directoryDescriptions = std::move(value); }

    /**
     * <p>The list of <a>DirectoryDescription</a> objects that were retrieved.</p>
     * <p>It is possible that this list contains less than the number of items
     * specified in the <code>Limit</code> member of the request. This occurs if there
     * are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline DescribeDirectoriesResult& WithDirectoryDescriptions(const Aws::Vector<DirectoryDescription>& value) { SetDirectoryDescriptions(value); return *this;}

    /**
     * <p>The list of <a>DirectoryDescription</a> objects that were retrieved.</p>
     * <p>It is possible that this list contains less than the number of items
     * specified in the <code>Limit</code> member of the request. This occurs if there
     * are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline DescribeDirectoriesResult& WithDirectoryDescriptions(Aws::Vector<DirectoryDescription>&& value) { SetDirectoryDescriptions(std::move(value)); return *this;}

    /**
     * <p>The list of <a>DirectoryDescription</a> objects that were retrieved.</p>
     * <p>It is possible that this list contains less than the number of items
     * specified in the <code>Limit</code> member of the request. This occurs if there
     * are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline DescribeDirectoriesResult& AddDirectoryDescriptions(const DirectoryDescription& value) { m_directoryDescriptions.push_back(value); return *this; }

    /**
     * <p>The list of <a>DirectoryDescription</a> objects that were retrieved.</p>
     * <p>It is possible that this list contains less than the number of items
     * specified in the <code>Limit</code> member of the request. This occurs if there
     * are less than the requested number of items left to retrieve, or if the
     * limitations of the operation have been exceeded.</p>
     */
    inline DescribeDirectoriesResult& AddDirectoryDescriptions(DirectoryDescription&& value) { m_directoryDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline DescribeDirectoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline DescribeDirectoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDirectories</a> to retrieve the next set of items.</p>
     */
    inline DescribeDirectoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DirectoryDescription> m_directoryDescriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
