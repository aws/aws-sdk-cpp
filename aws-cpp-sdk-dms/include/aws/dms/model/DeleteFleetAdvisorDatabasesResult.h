/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DeleteFleetAdvisorDatabasesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorDatabasesResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabaseIds() const{ return m_databaseIds; }

    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline void SetDatabaseIds(const Aws::Vector<Aws::String>& value) { m_databaseIds = value; }

    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline void SetDatabaseIds(Aws::Vector<Aws::String>&& value) { m_databaseIds = std::move(value); }

    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline DeleteFleetAdvisorDatabasesResult& WithDatabaseIds(const Aws::Vector<Aws::String>& value) { SetDatabaseIds(value); return *this;}

    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline DeleteFleetAdvisorDatabasesResult& WithDatabaseIds(Aws::Vector<Aws::String>&& value) { SetDatabaseIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline DeleteFleetAdvisorDatabasesResult& AddDatabaseIds(const Aws::String& value) { m_databaseIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline DeleteFleetAdvisorDatabasesResult& AddDatabaseIds(Aws::String&& value) { m_databaseIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline DeleteFleetAdvisorDatabasesResult& AddDatabaseIds(const char* value) { m_databaseIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_databaseIds;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
