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
  class CreateMigrationProjectResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateMigrationProjectResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CreateMigrationProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateMigrationProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The migration project that was created.</p>
     */
    inline const MigrationProject& GetMigrationProject() const { return m_migrationProject; }
    template<typename MigrationProjectT = MigrationProject>
    void SetMigrationProject(MigrationProjectT&& value) { m_migrationProjectHasBeenSet = true; m_migrationProject = std::forward<MigrationProjectT>(value); }
    template<typename MigrationProjectT = MigrationProject>
    CreateMigrationProjectResult& WithMigrationProject(MigrationProjectT&& value) { SetMigrationProject(std::forward<MigrationProjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMigrationProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MigrationProject m_migrationProject;
    bool m_migrationProjectHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
