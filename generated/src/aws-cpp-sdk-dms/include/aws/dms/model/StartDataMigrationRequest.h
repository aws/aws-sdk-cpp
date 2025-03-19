/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/StartReplicationMigrationTypeValue.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class StartDataMigrationRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartDataMigrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataMigration"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier (name or ARN) of the data migration to start.</p>
     */
    inline const Aws::String& GetDataMigrationIdentifier() const { return m_dataMigrationIdentifier; }
    inline bool DataMigrationIdentifierHasBeenSet() const { return m_dataMigrationIdentifierHasBeenSet; }
    template<typename DataMigrationIdentifierT = Aws::String>
    void SetDataMigrationIdentifier(DataMigrationIdentifierT&& value) { m_dataMigrationIdentifierHasBeenSet = true; m_dataMigrationIdentifier = std::forward<DataMigrationIdentifierT>(value); }
    template<typename DataMigrationIdentifierT = Aws::String>
    StartDataMigrationRequest& WithDataMigrationIdentifier(DataMigrationIdentifierT&& value) { SetDataMigrationIdentifier(std::forward<DataMigrationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the start type for the data migration. Valid values include
     * <code>start-replication</code>, <code>reload-target</code>, and
     * <code>resume-processing</code>.</p>
     */
    inline StartReplicationMigrationTypeValue GetStartType() const { return m_startType; }
    inline bool StartTypeHasBeenSet() const { return m_startTypeHasBeenSet; }
    inline void SetStartType(StartReplicationMigrationTypeValue value) { m_startTypeHasBeenSet = true; m_startType = value; }
    inline StartDataMigrationRequest& WithStartType(StartReplicationMigrationTypeValue value) { SetStartType(value); return *this;}
    ///@}
  private:

    Aws::String m_dataMigrationIdentifier;
    bool m_dataMigrationIdentifierHasBeenSet = false;

    StartReplicationMigrationTypeValue m_startType{StartReplicationMigrationTypeValue::NOT_SET};
    bool m_startTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
