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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/PortProbeDetail.h>
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

  class AWS_GUARDDUTY_API PortProbeAction
  {
  public:
    PortProbeAction();
    PortProbeAction(Aws::Utils::Json::JsonView jsonValue);
    PortProbeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Port probe blocked information.</p>
     */
    inline bool GetBlocked() const{ return m_blocked; }

    /**
     * <p>Port probe blocked information.</p>
     */
    inline bool BlockedHasBeenSet() const { return m_blockedHasBeenSet; }

    /**
     * <p>Port probe blocked information.</p>
     */
    inline void SetBlocked(bool value) { m_blockedHasBeenSet = true; m_blocked = value; }

    /**
     * <p>Port probe blocked information.</p>
     */
    inline PortProbeAction& WithBlocked(bool value) { SetBlocked(value); return *this;}


    /**
     * <p>A list of port probe details objects.</p>
     */
    inline const Aws::Vector<PortProbeDetail>& GetPortProbeDetails() const{ return m_portProbeDetails; }

    /**
     * <p>A list of port probe details objects.</p>
     */
    inline bool PortProbeDetailsHasBeenSet() const { return m_portProbeDetailsHasBeenSet; }

    /**
     * <p>A list of port probe details objects.</p>
     */
    inline void SetPortProbeDetails(const Aws::Vector<PortProbeDetail>& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails = value; }

    /**
     * <p>A list of port probe details objects.</p>
     */
    inline void SetPortProbeDetails(Aws::Vector<PortProbeDetail>&& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails = std::move(value); }

    /**
     * <p>A list of port probe details objects.</p>
     */
    inline PortProbeAction& WithPortProbeDetails(const Aws::Vector<PortProbeDetail>& value) { SetPortProbeDetails(value); return *this;}

    /**
     * <p>A list of port probe details objects.</p>
     */
    inline PortProbeAction& WithPortProbeDetails(Aws::Vector<PortProbeDetail>&& value) { SetPortProbeDetails(std::move(value)); return *this;}

    /**
     * <p>A list of port probe details objects.</p>
     */
    inline PortProbeAction& AddPortProbeDetails(const PortProbeDetail& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails.push_back(value); return *this; }

    /**
     * <p>A list of port probe details objects.</p>
     */
    inline PortProbeAction& AddPortProbeDetails(PortProbeDetail&& value) { m_portProbeDetailsHasBeenSet = true; m_portProbeDetails.push_back(std::move(value)); return *this; }

  private:

    bool m_blocked;
    bool m_blockedHasBeenSet;

    Aws::Vector<PortProbeDetail> m_portProbeDetails;
    bool m_portProbeDetailsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
