﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeImagePermissionsResult
  {
  public:
    AWS_APPSTREAM_API DescribeImagePermissionsResult();
    AWS_APPSTREAM_API DescribeImagePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeImagePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the private image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeImagePermissionsResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeImagePermissionsResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeImagePermissionsResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions for a private image that you own. </p>
     */
    inline const Aws::Vector<SharedImagePermissions>& GetSharedImagePermissionsList() const{ return m_sharedImagePermissionsList; }
    inline void SetSharedImagePermissionsList(const Aws::Vector<SharedImagePermissions>& value) { m_sharedImagePermissionsList = value; }
    inline void SetSharedImagePermissionsList(Aws::Vector<SharedImagePermissions>&& value) { m_sharedImagePermissionsList = std::move(value); }
    inline DescribeImagePermissionsResult& WithSharedImagePermissionsList(const Aws::Vector<SharedImagePermissions>& value) { SetSharedImagePermissionsList(value); return *this;}
    inline DescribeImagePermissionsResult& WithSharedImagePermissionsList(Aws::Vector<SharedImagePermissions>&& value) { SetSharedImagePermissionsList(std::move(value)); return *this;}
    inline DescribeImagePermissionsResult& AddSharedImagePermissionsList(const SharedImagePermissions& value) { m_sharedImagePermissionsList.push_back(value); return *this; }
    inline DescribeImagePermissionsResult& AddSharedImagePermissionsList(SharedImagePermissions&& value) { m_sharedImagePermissionsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeImagePermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeImagePermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeImagePermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeImagePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeImagePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeImagePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::Vector<SharedImagePermissions> m_sharedImagePermissionsList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
