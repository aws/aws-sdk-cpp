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
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyDataMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the modified data migration.</p>
     */
    inline const DataMigration& GetDataMigration() const { return m_dataMigration; }
    template<typename DataMigrationT = DataMigration>
    void SetDataMigration(DataMigrationT&& value) { m_dataMigrationHasBeenSet = true; m_dataMigration = std::forward<DataMigrationT>(value); }
    template<typename DataMigrationT = DataMigration>
    ModifyDataMigrationResult& WithDataMigration(DataMigrationT&& value) { SetDataMigration(std::forward<DataMigrationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ModifyDataMigrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataMigration m_dataMigration;
    bool m_dataMigrationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
