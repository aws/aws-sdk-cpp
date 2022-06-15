/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/model/PermissionGroup.h>
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
  class AWS_FINSPACEDATA_API GetPermissionGroupResult
  {
  public:
    GetPermissionGroupResult();
    GetPermissionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPermissionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PermissionGroup& GetPermissionGroup() const{ return m_permissionGroup; }

    
    inline void SetPermissionGroup(const PermissionGroup& value) { m_permissionGroup = value; }

    
    inline void SetPermissionGroup(PermissionGroup&& value) { m_permissionGroup = std::move(value); }

    
    inline GetPermissionGroupResult& WithPermissionGroup(const PermissionGroup& value) { SetPermissionGroup(value); return *this;}

    
    inline GetPermissionGroupResult& WithPermissionGroup(PermissionGroup&& value) { SetPermissionGroup(std::move(value)); return *this;}

  private:

    PermissionGroup m_permissionGroup;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
