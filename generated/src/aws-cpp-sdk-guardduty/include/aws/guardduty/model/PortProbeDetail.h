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
    AWS_GUARDDUTY_API PortProbeDetail();
    AWS_GUARDDUTY_API PortProbeDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API PortProbeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The local port information of the connection.</p>
     */
    inline const LocalPortDetails& GetLocalPortDetails() const{ return m_localPortDetails; }
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }
    inline void SetLocalPortDetails(const LocalPortDetails& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = value; }
    inline void SetLocalPortDetails(LocalPortDetails&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::move(value); }
    inline PortProbeDetail& WithLocalPortDetails(const LocalPortDetails& value) { SetLocalPortDetails(value); return *this;}
    inline PortProbeDetail& WithLocalPortDetails(LocalPortDetails&& value) { SetLocalPortDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local IP information of the connection.</p>
     */
    inline const LocalIpDetails& GetLocalIpDetails() const{ return m_localIpDetails; }
    inline bool LocalIpDetailsHasBeenSet() const { return m_localIpDetailsHasBeenSet; }
    inline void SetLocalIpDetails(const LocalIpDetails& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = value; }
    inline void SetLocalIpDetails(LocalIpDetails&& value) { m_localIpDetailsHasBeenSet = true; m_localIpDetails = std::move(value); }
    inline PortProbeDetail& WithLocalIpDetails(const LocalIpDetails& value) { SetLocalIpDetails(value); return *this;}
    inline PortProbeDetail& WithLocalIpDetails(LocalIpDetails&& value) { SetLocalIpDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remote IP information of the connection.</p>
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }
    inline PortProbeDetail& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}
    inline PortProbeDetail& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}
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
