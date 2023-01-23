/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
  class UpdatePermissionGroupResult
  {
  public:
    AWS_FINSPACEDATA_API UpdatePermissionGroupResult();
    AWS_FINSPACEDATA_API UpdatePermissionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API UpdatePermissionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the updated permission group.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }

    /**
     * <p>The unique identifier for the updated permission group.</p>
     */
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupId = value; }

    /**
     * <p>The unique identifier for the updated permission group.</p>
     */
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupId = std::move(value); }

    /**
     * <p>The unique identifier for the updated permission group.</p>
     */
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupId.assign(value); }

    /**
     * <p>The unique identifier for the updated permission group.</p>
     */
    inline UpdatePermissionGroupResult& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}

    /**
     * <p>The unique identifier for the updated permission group.</p>
     */
    inline UpdatePermissionGroupResult& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the updated permission group.</p>
     */
    inline UpdatePermissionGroupResult& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}

  private:

    Aws::String m_permissionGroupId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
