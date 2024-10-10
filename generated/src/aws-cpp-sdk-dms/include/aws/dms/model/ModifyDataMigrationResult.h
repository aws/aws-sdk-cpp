/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DataMigration.h>
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
  class ModifyDataMigrationResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the modified data migration.</p>
     */
    inline const DataMigration& GetDataMigration() const{ return m_dataMigration; }
    inline void SetDataMigration(const DataMigration& value) { m_dataMigration = value; }
    inline void SetDataMigration(DataMigration&& value) { m_dataMigration = std::move(value); }
    inline ModifyDataMigrationResult& WithDataMigration(const DataMigration& value) { SetDataMigration(value); return *this;}
    inline ModifyDataMigrationResult& WithDataMigration(DataMigration&& value) { SetDataMigration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ModifyDataMigrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ModifyDataMigrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ModifyDataMigrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataMigration m_dataMigration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
