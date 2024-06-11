﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceHealthState.h>
#include <aws/lightsail/model/InstanceHealthReason.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes information about the health of the instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceHealthSummary">AWS
   * API Reference</a></p>
   */
  class InstanceHealthSummary
  {
  public:
    AWS_LIGHTSAIL_API InstanceHealthSummary();
    AWS_LIGHTSAIL_API InstanceHealthSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceHealthSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }
    inline InstanceHealthSummary& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}
    inline InstanceHealthSummary& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}
    inline InstanceHealthSummary& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the overall instance health. Valid values are below.</p>
     */
    inline const InstanceHealthState& GetInstanceHealth() const{ return m_instanceHealth; }
    inline bool InstanceHealthHasBeenSet() const { return m_instanceHealthHasBeenSet; }
    inline void SetInstanceHealth(const InstanceHealthState& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = value; }
    inline void SetInstanceHealth(InstanceHealthState&& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = std::move(value); }
    inline InstanceHealthSummary& WithInstanceHealth(const InstanceHealthState& value) { SetInstanceHealth(value); return *this;}
    inline InstanceHealthSummary& WithInstanceHealth(InstanceHealthState&& value) { SetInstanceHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>More information about the instance health. If the
     * <code>instanceHealth</code> is <code>healthy</code>, then an
     * <code>instanceHealthReason</code> value is not provided.</p> <p>If <b>
     * <code>instanceHealth</code> </b> is <code>initial</code>, the <b>
     * <code>instanceHealthReason</code> </b> value can be one of the following:</p>
     * <ul> <li> <p> <b> <code>Lb.RegistrationInProgress</code> </b> - The target
     * instance is in the process of being registered with the load balancer.</p> </li>
     * <li> <p> <b> <code>Lb.InitialHealthChecking</code> </b> - The Lightsail load
     * balancer is still sending the target instance the minimum number of health
     * checks required to determine its health status.</p> </li> </ul> <p>If <b>
     * <code>instanceHealth</code> </b> is <code>unhealthy</code>, the <b>
     * <code>instanceHealthReason</code> </b> value can be one of the following:</p>
     * <ul> <li> <p> <b> <code>Instance.ResponseCodeMismatch</code> </b> - The health
     * checks did not return an expected HTTP code.</p> </li> <li> <p> <b>
     * <code>Instance.Timeout</code> </b> - The health check requests timed out.</p>
     * </li> <li> <p> <b> <code>Instance.FailedHealthChecks</code> </b> - The health
     * checks failed because the connection to the target instance timed out, the
     * target instance response was malformed, or the target instance failed the health
     * check for an unknown reason.</p> </li> <li> <p> <b>
     * <code>Lb.InternalError</code> </b> - The health checks failed due to an internal
     * error.</p> </li> </ul> <p>If <b> <code>instanceHealth</code> </b> is
     * <code>unused</code>, the <b> <code>instanceHealthReason</code> </b> value can be
     * one of the following:</p> <ul> <li> <p> <b> <code>Instance.NotRegistered</code>
     * </b> - The target instance is not registered with the target group.</p> </li>
     * <li> <p> <b> <code>Instance.NotInUse</code> </b> - The target group is not used
     * by any load balancer, or the target instance is in an Availability Zone that is
     * not enabled for its load balancer.</p> </li> <li> <p> <b>
     * <code>Instance.IpUnusable</code> </b> - The target IP address is reserved for
     * use by a Lightsail load balancer.</p> </li> <li> <p> <b>
     * <code>Instance.InvalidState</code> </b> - The target is in the stopped or
     * terminated state.</p> </li> </ul> <p>If <b> <code>instanceHealth</code> </b> is
     * <code>draining</code>, the <b> <code>instanceHealthReason</code> </b> value can
     * be one of the following:</p> <ul> <li> <p> <b>
     * <code>Instance.DeregistrationInProgress</code> </b> - The target instance is in
     * the process of being deregistered and the deregistration delay period has not
     * expired.</p> </li> </ul>
     */
    inline const InstanceHealthReason& GetInstanceHealthReason() const{ return m_instanceHealthReason; }
    inline bool InstanceHealthReasonHasBeenSet() const { return m_instanceHealthReasonHasBeenSet; }
    inline void SetInstanceHealthReason(const InstanceHealthReason& value) { m_instanceHealthReasonHasBeenSet = true; m_instanceHealthReason = value; }
    inline void SetInstanceHealthReason(InstanceHealthReason&& value) { m_instanceHealthReasonHasBeenSet = true; m_instanceHealthReason = std::move(value); }
    inline InstanceHealthSummary& WithInstanceHealthReason(const InstanceHealthReason& value) { SetInstanceHealthReason(value); return *this;}
    inline InstanceHealthSummary& WithInstanceHealthReason(InstanceHealthReason&& value) { SetInstanceHealthReason(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    InstanceHealthState m_instanceHealth;
    bool m_instanceHealthHasBeenSet = false;

    InstanceHealthReason m_instanceHealthReason;
    bool m_instanceHealthReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
