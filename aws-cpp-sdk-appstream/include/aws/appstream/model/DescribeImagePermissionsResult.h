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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/SharedImagePermissions.h>
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
  class AWS_APPSTREAM_API DescribeImagePermissionsResult
  {
  public:
    DescribeImagePermissionsResult();
    DescribeImagePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeImagePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the private image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the private image.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the private image.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the private image.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the private image.</p>
     */
    inline DescribeImagePermissionsResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the private image.</p>
     */
    inline DescribeImagePermissionsResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the private image.</p>
     */
    inline DescribeImagePermissionsResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline const Aws::Vector<SharedImagePermissions>& GetSharedImagePermissionsList() const{ return m_sharedImagePermissionsList; }

    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline void SetSharedImagePermissionsList(const Aws::Vector<SharedImagePermissions>& value) { m_sharedImagePermissionsList = value; }

    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline void SetSharedImagePermissionsList(Aws::Vector<SharedImagePermissions>&& value) { m_sharedImagePermissionsList = std::move(value); }

    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline DescribeImagePermissionsResult& WithSharedImagePermissionsList(const Aws::Vector<SharedImagePermissions>& value) { SetSharedImagePermissionsList(value); return *this;}

    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline DescribeImagePermissionsResult& WithSharedImagePermissionsList(Aws::Vector<SharedImagePermissions>&& value) { SetSharedImagePermissionsList(std::move(value)); return *this;}

    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline DescribeImagePermissionsResult& AddSharedImagePermissionsList(const SharedImagePermissions& value) { m_sharedImagePermissionsList.push_back(value); return *this; }

    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline DescribeImagePermissionsResult& AddSharedImagePermissionsList(SharedImagePermissions&& value) { m_sharedImagePermissionsList.push_back(std::move(value)); return *this; }


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
    inline DescribeImagePermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeImagePermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeImagePermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_name;

    Aws::Vector<SharedImagePermissions> m_sharedImagePermissionsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
