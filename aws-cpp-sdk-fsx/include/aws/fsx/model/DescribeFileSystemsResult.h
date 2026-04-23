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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileSystem.h>
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
namespace FSx
{
namespace Model
{
  /**
   * <p>The response object for <code>DescribeFileSystems</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DescribeFileSystemsResult
  {
  public:
    DescribeFileSystemsResult();
    DescribeFileSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFileSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of file system descriptions.</p>
     */
    inline const Aws::Vector<FileSystem>& GetFileSystems() const{ return m_fileSystems; }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline void SetFileSystems(const Aws::Vector<FileSystem>& value) { m_fileSystems = value; }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline void SetFileSystems(Aws::Vector<FileSystem>&& value) { m_fileSystems = std::move(value); }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& WithFileSystems(const Aws::Vector<FileSystem>& value) { SetFileSystems(value); return *this;}

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& WithFileSystems(Aws::Vector<FileSystem>&& value) { SetFileSystems(std::move(value)); return *this;}

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& AddFileSystems(const FileSystem& value) { m_fileSystems.push_back(value); return *this; }

    /**
     * <p>An array of file system descriptions.</p>
     */
    inline DescribeFileSystemsResult& AddFileSystems(FileSystem&& value) { m_fileSystems.push_back(std::move(value)); return *this; }


    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline DescribeFileSystemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline DescribeFileSystemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Present if there are more file systems than returned in the response
     * (String). You can use the <code>NextToken</code> value in the later request to
     * fetch the descriptions. </p>
     */
    inline DescribeFileSystemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FileSystem> m_fileSystems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
