/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/LocalPortDetails.h>
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
   * Details about the port probe finding.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/PortProbeDetail">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API PortProbeDetail
  {
  public:
    PortProbeDetail();
    PortProbeDetail(Aws::Utils::Json::JsonView jsonValue);
    PortProbeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Local port information of the connection.
     */
    inline const LocalPortDetails& GetLocalPortDetails() const{ return m_localPortDetails; }

    /**
     * Local port information of the connection.
     */
    inline bool LocalPortDetailsHasBeenSet() const { return m_localPortDetailsHasBeenSet; }

    /**
     * Local port information of the connection.
     */
    inline void SetLocalPortDetails(const LocalPortDetails& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = value; }

    /**
     * Local port information of the connection.
     */
    inline void SetLocalPortDetails(LocalPortDetails&& value) { m_localPortDetailsHasBeenSet = true; m_localPortDetails = std::move(value); }

    /**
     * Local port information of the connection.
     */
    inline PortProbeDetail& WithLocalPortDetails(const LocalPortDetails& value) { SetLocalPortDetails(value); return *this;}

    /**
     * Local port information of the connection.
     */
    inline PortProbeDetail& WithLocalPortDetails(LocalPortDetails&& value) { SetLocalPortDetails(std::move(value)); return *this;}


    /**
     * Remote IP information of the connection.
     */
    inline const RemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }

    /**
     * Remote IP information of the connection.
     */
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }

    /**
     * Remote IP information of the connection.
     */
    inline void SetRemoteIpDetails(const RemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }

    /**
     * Remote IP information of the connection.
     */
    inline void SetRemoteIpDetails(RemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }

    /**
     * Remote IP information of the connection.
     */
    inline PortProbeDetail& WithRemoteIpDetails(const RemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}

    /**
     * Remote IP information of the connection.
     */
    inline PortProbeDetail& WithRemoteIpDetails(RemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}

  private:

    LocalPortDetails m_localPortDetails;
    bool m_localPortDetailsHasBeenSet;

    RemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
