/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class DeleteDataProviderRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteDataProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataProvider"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the data provider to delete.</p>
     */
    inline const Aws::String& GetDataProviderIdentifier() const { return m_dataProviderIdentifier; }
    inline bool DataProviderIdentifierHasBeenSet() const { return m_dataProviderIdentifierHasBeenSet; }
    template<typename DataProviderIdentifierT = Aws::String>
    void SetDataProviderIdentifier(DataProviderIdentifierT&& value) { m_dataProviderIdentifierHasBeenSet = true; m_dataProviderIdentifier = std::forward<DataProviderIdentifierT>(value); }
    template<typename DataProviderIdentifierT = Aws::String>
    DeleteDataProviderRequest& WithDataProviderIdentifier(DataProviderIdentifierT&& value) { SetDataProviderIdentifier(std::forward<DataProviderIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataProviderIdentifier;
    bool m_dataProviderIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
