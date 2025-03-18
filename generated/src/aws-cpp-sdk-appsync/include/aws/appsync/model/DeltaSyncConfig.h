/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a Delta Sync configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DeltaSyncConfig">AWS
   * API Reference</a></p>
   */
  class DeltaSyncConfig
  {
  public:
    AWS_APPSYNC_API DeltaSyncConfig() = default;
    AWS_APPSYNC_API DeltaSyncConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DeltaSyncConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of minutes that an Item is stored in the data source.</p>
     */
    inline long long GetBaseTableTTL() const { return m_baseTableTTL; }
    inline bool BaseTableTTLHasBeenSet() const { return m_baseTableTTLHasBeenSet; }
    inline void SetBaseTableTTL(long long value) { m_baseTableTTLHasBeenSet = true; m_baseTableTTL = value; }
    inline DeltaSyncConfig& WithBaseTableTTL(long long value) { SetBaseTableTTL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Delta Sync table name.</p>
     */
    inline const Aws::String& GetDeltaSyncTableName() const { return m_deltaSyncTableName; }
    inline bool DeltaSyncTableNameHasBeenSet() const { return m_deltaSyncTableNameHasBeenSet; }
    template<typename DeltaSyncTableNameT = Aws::String>
    void SetDeltaSyncTableName(DeltaSyncTableNameT&& value) { m_deltaSyncTableNameHasBeenSet = true; m_deltaSyncTableName = std::forward<DeltaSyncTableNameT>(value); }
    template<typename DeltaSyncTableNameT = Aws::String>
    DeltaSyncConfig& WithDeltaSyncTableName(DeltaSyncTableNameT&& value) { SetDeltaSyncTableName(std::forward<DeltaSyncTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes that a Delta Sync log entry is stored in the Delta Sync
     * table.</p>
     */
    inline long long GetDeltaSyncTableTTL() const { return m_deltaSyncTableTTL; }
    inline bool DeltaSyncTableTTLHasBeenSet() const { return m_deltaSyncTableTTLHasBeenSet; }
    inline void SetDeltaSyncTableTTL(long long value) { m_deltaSyncTableTTLHasBeenSet = true; m_deltaSyncTableTTL = value; }
    inline DeltaSyncConfig& WithDeltaSyncTableTTL(long long value) { SetDeltaSyncTableTTL(value); return *this;}
    ///@}
  private:

    long long m_baseTableTTL{0};
    bool m_baseTableTTLHasBeenSet = false;

    Aws::String m_deltaSyncTableName;
    bool m_deltaSyncTableNameHasBeenSet = false;

    long long m_deltaSyncTableTTL{0};
    bool m_deltaSyncTableTTLHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
