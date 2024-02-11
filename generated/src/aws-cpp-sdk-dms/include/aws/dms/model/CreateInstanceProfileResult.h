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
  class CreateInstanceProfileResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateInstanceProfileResult();
    AWS_DATABASEMIGRATIONSERVICE_API CreateInstanceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateInstanceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The instance profile that was created.</p>
     */
    inline const InstanceProfile& GetInstanceProfile() const{ return m_instanceProfile; }

    /**
     * <p>The instance profile that was created.</p>
     */
    inline void SetInstanceProfile(const InstanceProfile& value) { m_instanceProfile = value; }

    /**
     * <p>The instance profile that was created.</p>
     */
    inline void SetInstanceProfile(InstanceProfile&& value) { m_instanceProfile = std::move(value); }

    /**
     * <p>The instance profile that was created.</p>
     */
    inline CreateInstanceProfileResult& WithInstanceProfile(const InstanceProfile& value) { SetInstanceProfile(value); return *this;}

    /**
     * <p>The instance profile that was created.</p>
     */
    inline CreateInstanceProfileResult& WithInstanceProfile(InstanceProfile&& value) { SetInstanceProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateInstanceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateInstanceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateInstanceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InstanceProfile m_instanceProfile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
