/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/detective/model/DatasourcePackage.h>
#include <aws/detective/model/DatasourcePackageIngestState.h>
#include <aws/detective/model/TimestampForCollection.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Detective
{
namespace Model
{

  /**
   * <p>Details on data source packages for members of the behavior
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/MembershipDatasources">AWS
   * API Reference</a></p>
   */
  class MembershipDatasources
  {
  public:
    AWS_DETECTIVE_API MembershipDatasources() = default;
    AWS_DETECTIVE_API MembershipDatasources(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API MembershipDatasources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account identifier of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MembershipDatasources& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    MembershipDatasources& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on when a data source package was added to a behavior graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>& GetDatasourcePackageIngestHistory() const { return m_datasourcePackageIngestHistory; }
    inline bool DatasourcePackageIngestHistoryHasBeenSet() const { return m_datasourcePackageIngestHistoryHasBeenSet; }
    template<typename DatasourcePackageIngestHistoryT = Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>>
    void SetDatasourcePackageIngestHistory(DatasourcePackageIngestHistoryT&& value) { m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory = std::forward<DatasourcePackageIngestHistoryT>(value); }
    template<typename DatasourcePackageIngestHistoryT = Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>>
    MembershipDatasources& WithDatasourcePackageIngestHistory(DatasourcePackageIngestHistoryT&& value) { SetDatasourcePackageIngestHistory(std::forward<DatasourcePackageIngestHistoryT>(value)); return *this;}
    inline MembershipDatasources& AddDatasourcePackageIngestHistory(DatasourcePackage key, Aws::Map<DatasourcePackageIngestState, TimestampForCollection> value) {
      m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>> m_datasourcePackageIngestHistory;
    bool m_datasourcePackageIngestHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
