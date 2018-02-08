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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/DirectoryConfig.h>
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
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API DescribeDirectoryConfigsResult
  {
  public:
    DescribeDirectoryConfigsResult();
    DescribeDirectoryConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDirectoryConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline const Aws::Vector<DirectoryConfig>& GetDirectoryConfigs() const{ return m_directoryConfigs; }

    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline void SetDirectoryConfigs(const Aws::Vector<DirectoryConfig>& value) { m_directoryConfigs = value; }

    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline void SetDirectoryConfigs(Aws::Vector<DirectoryConfig>&& value) { m_directoryConfigs = std::move(value); }

    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline DescribeDirectoryConfigsResult& WithDirectoryConfigs(const Aws::Vector<DirectoryConfig>& value) { SetDirectoryConfigs(value); return *this;}

    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline DescribeDirectoryConfigsResult& WithDirectoryConfigs(Aws::Vector<DirectoryConfig>&& value) { SetDirectoryConfigs(std::move(value)); return *this;}

    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline DescribeDirectoryConfigsResult& AddDirectoryConfigs(const DirectoryConfig& value) { m_directoryConfigs.push_back(value); return *this; }

    /**
     * <p>Information about the directory configurations. Note that although the
     * response syntax in this topic includes the account password, this password is
     * not returned in the actual response. </p>
     */
    inline DescribeDirectoryConfigsResult& AddDirectoryConfigs(DirectoryConfig&& value) { m_directoryConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeDirectoryConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeDirectoryConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeDirectoryConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DirectoryConfig> m_directoryConfigs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
