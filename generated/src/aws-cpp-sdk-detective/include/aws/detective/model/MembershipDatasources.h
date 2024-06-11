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
    AWS_DETECTIVE_API MembershipDatasources();
    AWS_DETECTIVE_API MembershipDatasources(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API MembershipDatasources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account identifier of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline MembershipDatasources& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline MembershipDatasources& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline MembershipDatasources& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the organization behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }
    inline MembershipDatasources& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}
    inline MembershipDatasources& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}
    inline MembershipDatasources& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on when a data source package was added to a behavior graph.</p>
     */
    inline const Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>& GetDatasourcePackageIngestHistory() const{ return m_datasourcePackageIngestHistory; }
    inline bool DatasourcePackageIngestHistoryHasBeenSet() const { return m_datasourcePackageIngestHistoryHasBeenSet; }
    inline void SetDatasourcePackageIngestHistory(const Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>& value) { m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory = value; }
    inline void SetDatasourcePackageIngestHistory(Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>&& value) { m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory = std::move(value); }
    inline MembershipDatasources& WithDatasourcePackageIngestHistory(const Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>& value) { SetDatasourcePackageIngestHistory(value); return *this;}
    inline MembershipDatasources& WithDatasourcePackageIngestHistory(Aws::Map<DatasourcePackage, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>&& value) { SetDatasourcePackageIngestHistory(std::move(value)); return *this;}
    inline MembershipDatasources& AddDatasourcePackageIngestHistory(const DatasourcePackage& key, const Aws::Map<DatasourcePackageIngestState, TimestampForCollection>& value) { m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory.emplace(key, value); return *this; }
    inline MembershipDatasources& AddDatasourcePackageIngestHistory(DatasourcePackage&& key, const Aws::Map<DatasourcePackageIngestState, TimestampForCollection>& value) { m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory.emplace(std::move(key), value); return *this; }
    inline MembershipDatasources& AddDatasourcePackageIngestHistory(const DatasourcePackage& key, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>&& value) { m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory.emplace(key, std::move(value)); return *this; }
    inline MembershipDatasources& AddDatasourcePackageIngestHistory(DatasourcePackage&& key, Aws::Map<DatasourcePackageIngestState, TimestampForCollection>&& value) { m_datasourcePackageIngestHistoryHasBeenSet = true; m_datasourcePackageIngestHistory.emplace(std::move(key), std::move(value)); return *this; }
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
