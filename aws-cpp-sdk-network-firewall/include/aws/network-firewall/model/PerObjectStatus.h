/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/PerObjectSyncStatus.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PerObjectStatus">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKFIREWALL_API PerObjectStatus
  {
  public:
    PerObjectStatus();
    PerObjectStatus(Aws::Utils::Json::JsonView jsonValue);
    PerObjectStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const PerObjectSyncStatus& GetSyncStatus() const{ return m_syncStatus; }

    /**
     * <p/>
     */
    inline bool SyncStatusHasBeenSet() const { return m_syncStatusHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSyncStatus(const PerObjectSyncStatus& value) { m_syncStatusHasBeenSet = true; m_syncStatus = value; }

    /**
     * <p/>
     */
    inline void SetSyncStatus(PerObjectSyncStatus&& value) { m_syncStatusHasBeenSet = true; m_syncStatus = std::move(value); }

    /**
     * <p/>
     */
    inline PerObjectStatus& WithSyncStatus(const PerObjectSyncStatus& value) { SetSyncStatus(value); return *this;}

    /**
     * <p/>
     */
    inline PerObjectStatus& WithSyncStatus(PerObjectSyncStatus&& value) { SetSyncStatus(std::move(value)); return *this;}

  private:

    PerObjectSyncStatus m_syncStatus;
    bool m_syncStatusHasBeenSet;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
