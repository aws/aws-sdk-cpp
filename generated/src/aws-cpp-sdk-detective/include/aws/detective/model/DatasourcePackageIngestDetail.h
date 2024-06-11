/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/model/DatasourcePackageIngestState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Details about the data source packages ingested by your behavior
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/DatasourcePackageIngestDetail">AWS
   * API Reference</a></p>
   */
  class DatasourcePackageIngestDetail
  {
  public:
    AWS_DETECTIVE_API DatasourcePackageIngestDetail();
    AWS_DETECTIVE_API DatasourcePackageIngestDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API DatasourcePackageIngestDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details on which data source packages are ingested for a member account.</p>
     */
    inline const DatasourcePackageIngestState& GetDatasourcePackageIngestState() const{ return m_datasourcePackageIngestState; }
    inline bool DatasourcePackageIngestStateHasBeenSet() const { return m_datasourcePackageIngestStateHasBeenSet; }
    inline void SetDatasourcePackageIngestState(const DatasourcePackageIngestState& value) { m_datasourcePackageIngestStateHasBeenSet = true; m_datasourcePackageIngestState = value; }
    inline void SetDatasourcePackageIngestState(DatasourcePackageIngestState&& value) { m_datasourcePackageIngestStateHasBeenSet = true; m_datasourcePackageIngestState = std::move(value); }
    inline DatasourcePackageIngestDetail& WithDatasourcePackageIngestState(const DatasourcePackageIngestState& value) { SetDatasourcePackageIngestState(value); return *this;}
    inline DatasourcePackageIngestDetail& WithDatasourcePackageIngestState(DatasourcePackageIngestState&& value) { SetDatasourcePackageIngestState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date a data source package was enabled for this account</p>
     */
    inline const Aws::Map<DatasourcePackageIngestState, TimestampForCollection>& GetLastIngestStateChange() const{ return m_lastIngestStateChange; }
    inline bool LastIngestStateChangeHasBeenSet() const { return m_lastIngestStateChangeHasBeenSet; }
    inline void SetLastIngestStateChange(const Aws::Map<DatasourcePackageIngestState, TimestampForCollection>& value) { m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange = value; }
    inline void SetLastIngestStateChange(Aws::Map<DatasourcePackageIngestState, TimestampForCollection>&& value) { m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange = std::move(value); }
    inline DatasourcePackageIngestDetail& WithLastIngestStateChange(const Aws::Map<DatasourcePackageIngestState, TimestampForCollection>& value) { SetLastIngestStateChange(value); return *this;}
    inline DatasourcePackageIngestDetail& WithLastIngestStateChange(Aws::Map<DatasourcePackageIngestState, TimestampForCollection>&& value) { SetLastIngestStateChange(std::move(value)); return *this;}
    inline DatasourcePackageIngestDetail& AddLastIngestStateChange(const DatasourcePackageIngestState& key, const TimestampForCollection& value) { m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange.emplace(key, value); return *this; }
    inline DatasourcePackageIngestDetail& AddLastIngestStateChange(DatasourcePackageIngestState&& key, const TimestampForCollection& value) { m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange.emplace(std::move(key), value); return *this; }
    inline DatasourcePackageIngestDetail& AddLastIngestStateChange(const DatasourcePackageIngestState& key, TimestampForCollection&& value) { m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange.emplace(key, std::move(value)); return *this; }
    inline DatasourcePackageIngestDetail& AddLastIngestStateChange(DatasourcePackageIngestState&& key, TimestampForCollection&& value) { m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange.emplace(std::move(key), std::move(value)); return *this; }
    ///@}
  private:

    DatasourcePackageIngestState m_datasourcePackageIngestState;
    bool m_datasourcePackageIngestStateHasBeenSet = false;

    Aws::Map<DatasourcePackageIngestState, TimestampForCollection> m_lastIngestStateChange;
    bool m_lastIngestStateChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
