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
    AWS_DETECTIVE_API DatasourcePackageIngestDetail() = default;
    AWS_DETECTIVE_API DatasourcePackageIngestDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API DatasourcePackageIngestDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details on which data source packages are ingested for a member account.</p>
     */
    inline DatasourcePackageIngestState GetDatasourcePackageIngestState() const { return m_datasourcePackageIngestState; }
    inline bool DatasourcePackageIngestStateHasBeenSet() const { return m_datasourcePackageIngestStateHasBeenSet; }
    inline void SetDatasourcePackageIngestState(DatasourcePackageIngestState value) { m_datasourcePackageIngestStateHasBeenSet = true; m_datasourcePackageIngestState = value; }
    inline DatasourcePackageIngestDetail& WithDatasourcePackageIngestState(DatasourcePackageIngestState value) { SetDatasourcePackageIngestState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date a data source package was enabled for this account</p>
     */
    inline const Aws::Map<DatasourcePackageIngestState, TimestampForCollection>& GetLastIngestStateChange() const { return m_lastIngestStateChange; }
    inline bool LastIngestStateChangeHasBeenSet() const { return m_lastIngestStateChangeHasBeenSet; }
    template<typename LastIngestStateChangeT = Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>
    void SetLastIngestStateChange(LastIngestStateChangeT&& value) { m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange = std::forward<LastIngestStateChangeT>(value); }
    template<typename LastIngestStateChangeT = Aws::Map<DatasourcePackageIngestState, TimestampForCollection>>
    DatasourcePackageIngestDetail& WithLastIngestStateChange(LastIngestStateChangeT&& value) { SetLastIngestStateChange(std::forward<LastIngestStateChangeT>(value)); return *this;}
    inline DatasourcePackageIngestDetail& AddLastIngestStateChange(DatasourcePackageIngestState key, TimestampForCollection value) {
      m_lastIngestStateChangeHasBeenSet = true; m_lastIngestStateChange.emplace(key, value); return *this;
    }
    ///@}
  private:

    DatasourcePackageIngestState m_datasourcePackageIngestState{DatasourcePackageIngestState::NOT_SET};
    bool m_datasourcePackageIngestStateHasBeenSet = false;

    Aws::Map<DatasourcePackageIngestState, TimestampForCollection> m_lastIngestStateChange;
    bool m_lastIngestStateChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
