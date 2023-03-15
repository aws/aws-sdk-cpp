﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/PermissionGroup.h>
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
namespace FinSpaceData
{
namespace Model
{
  class GetPermissionGroupResult
  {
  public:
    AWS_FINSPACEDATA_API GetPermissionGroupResult();
    AWS_FINSPACEDATA_API GetPermissionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API GetPermissionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PermissionGroup& GetPermissionGroup() const{ return m_permissionGroup; }

    
    inline void SetPermissionGroup(const PermissionGroup& value) { m_permissionGroup = value; }

    
    inline void SetPermissionGroup(PermissionGroup&& value) { m_permissionGroup = std::move(value); }

    
    inline GetPermissionGroupResult& WithPermissionGroup(const PermissionGroup& value) { SetPermissionGroup(value); return *this;}

    
    inline GetPermissionGroupResult& WithPermissionGroup(PermissionGroup&& value) { SetPermissionGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPermissionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPermissionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPermissionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PermissionGroup m_permissionGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
