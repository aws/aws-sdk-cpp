/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/InstanceProfile.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class ModifyInstanceProfileResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyInstanceProfileResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyInstanceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyInstanceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The instance profile that was modified.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const{ return m_instanceProfile; }

    /**
     * <p>The instance profile that was modified.</p>
     */
    inline void SetInstanceProfile(const InstanceProfile& value) { m_instanceProfile = value; }

    /**
     * <p>The instance profile that was modified.</p>
     */
    inline void SetInstanceProfile(InstanceProfile&& value) { m_instanceProfile = std::move(value); }

    /**
     * <p>The instance profile that was modified.</p>
     */
    inline ModifyInstanceProfileResult& WithInstanceProfile(const InstanceProfile& value) { SetInstanceProfile(value); return *this;}

    /**
     * <p>The instance profile that was modified.</p>
     */
    inline ModifyInstanceProfileResult& WithInstanceProfile(InstanceProfile&& value) { SetInstanceProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ModifyInstanceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ModifyInstanceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ModifyInstanceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InstanceProfile m_instanceProfile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
