/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/LocalPortDetails.h>
#include <aws/guardduty/model/LocalIpDetails.h>
#include <aws/guardduty/model/RemoteIpDetails.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the port probe details.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/PortProbeDetail">AWS
   * API Reference</a></p>
   */
  class PortProbeDetail
  {
  public:
    AWS_GUARDDUTY_API PortProbeDetail() = default;
    AWS_GUARDDUTY_API PortProbeDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API PortProbeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The local port information of the connection.</p>
     */
    inline const LocalPortDetails& GetLocalPortDetails() const { return m_localPortDetails; }
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }
    template<typename LocalPortDetailsT = LocalPortDetails>
    void SetLocalPortDetails(LocalPortDetailsT&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::forward<LocalPortDetailsT>(value); }
    template<typename LocalPortDetailsT = LocalPortDetails>
    PortProbeDetail& WithLocalPortDetails(LocalPortDetailsT&& value) { SetLocalPortDetails(std::forward<LocalPortDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local IP information of the connection.</p>
     */
    inline const LocalIpDetails& GetLocalIpDetails() const { return m_localIpDetails; }
    inline bool LocalIpDetailsHasBeenSet() const { return m_localIpDetailsHasBeenSet; }
    template<typename LocalIpDetailsT = LocalIpDetails>
    void SetLocalIpDetails(LocalIpDetailsT&& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = std::forward<LocalIpDetailsT>(value); }
    template<typename LocalIpDetailsT = LocalIpDetails>
    PortProbeDetail& WithLocalIpDetails(LocalIpDetailsT&& value) { SetLocalIpDetails(std::forward<LocalIpDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const { return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    template<typename RemoteIpDetailsT = RemoteIpDetails>
    void SetRemoteIpDetails(RemoteIpDetailsT&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::forward<RemoteIpDetailsT>(value); }
    template<typename RemoteIpDetailsT = RemoteIpDetails>
    PortProbeDetail& WithRemoteIpDetails(RemoteIpDetailsT&& value) { SetRemoteIpDetails(std::forward<RemoteIpDetailsT>(value)); return *this;}
    ///@}
  private:

    LocalPortDetails m_localPortDetails;
    bool m_localPortDetailsHasBeenSet = false;

    LocalIpDetails m_localIpDetails;
    bool m_localIpDetailsHasBeenSet = false;

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
