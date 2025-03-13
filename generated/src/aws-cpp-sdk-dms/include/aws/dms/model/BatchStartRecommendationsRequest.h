/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/StartRecommendationsRequestEntry.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class BatchStartRecommendationsRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchStartRecommendations"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Provides information about source databases to analyze. After this analysis,
     * Fleet Advisor recommends target engines for each source database.</p>
     */
    inline const Aws::Vector<StartRecommendationsRequestEntry>& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Vector<StartRecommendationsRequestEntry>>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Vector<StartRecommendationsRequestEntry>>
    BatchStartRecommendationsRequest& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    template<typename DataT = StartRecommendationsRequestEntry>
    BatchStartRecommendationsRequest& AddData(DataT&& value) { m_dataHasBeenSet = true; m_data.emplace_back(std::forward<DataT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StartRecommendationsRequestEntry> m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
