/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/MigrationProject.h>
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
  class ModifyMigrationProjectResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyMigrationProjectResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyMigrationProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyMigrationProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The migration project that was modified.</p>
     */
    inline const MigrationProject& GetMigrationProject() const{ return m_migrationProject; }

    /**
     * <p>The migration project that was modified.</p>
     */
    inline void SetMigrationProject(const MigrationProject& value) { m_migrationProject = value; }

    /**
     * <p>The migration project that was modified.</p>
     */
    inline void SetMigrationProject(MigrationProject&& value) { m_migrationProject = std::move(value); }

    /**
     * <p>The migration project that was modified.</p>
     */
    inline ModifyMigrationProjectResult& WithMigrationProject(const MigrationProject& value) { SetMigrationProject(value); return *this;}

    /**
     * <p>The migration project that was modified.</p>
     */
    inline ModifyMigrationProjectResult& WithMigrationProject(MigrationProject&& value) { SetMigrationProject(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ModifyMigrationProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ModifyMigrationProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ModifyMigrationProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MigrationProject m_migrationProject;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
