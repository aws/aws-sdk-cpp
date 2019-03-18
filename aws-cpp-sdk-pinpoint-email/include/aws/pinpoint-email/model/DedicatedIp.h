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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/WarmupStatus.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Contains information about a dedicated IP address that is associated with
   * your Amazon Pinpoint account.</p> <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DedicatedIp">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API DedicatedIp
  {
  public:
    DedicatedIp();
    DedicatedIp(Aws::Utils::Json::JsonView jsonValue);
    DedicatedIp& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline DedicatedIp& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline DedicatedIp& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>An IP address that is reserved for use by your Amazon Pinpoint account.</p>
     */
    inline DedicatedIp& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * <p>The warm-up status of a dedicated IP address. The status can have one of the
     * following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The IP address
     * isn't ready to use because the dedicated IP warm-up process is ongoing.</p>
     * </li> <li> <p> <code>DONE</code> – The dedicated IP warm-up process is complete,
     * and the IP address is ready to use.</p> </li> </ul>
     */
    inline const WarmupStatus& GetWarmupStatus() const{ return m_warmupStatus; }

    /**
     * <p>The warm-up status of a dedicated IP address. The status can have one of the
     * following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The IP address
     * isn't ready to use because the dedicated IP warm-up process is ongoing.</p>
     * </li> <li> <p> <code>DONE</code> – The dedicated IP warm-up process is complete,
     * and the IP address is ready to use.</p> </li> </ul>
     */
    inline bool WarmupStatusHasBeenSet() const { return m_warmupStatusHasBeenSet; }

    /**
     * <p>The warm-up status of a dedicated IP address. The status can have one of the
     * following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The IP address
     * isn't ready to use because the dedicated IP warm-up process is ongoing.</p>
     * </li> <li> <p> <code>DONE</code> – The dedicated IP warm-up process is complete,
     * and the IP address is ready to use.</p> </li> </ul>
     */
    inline void SetWarmupStatus(const WarmupStatus& value) { m_warmupStatusHasBeenSet = true; m_warmupStatus = value; }

    /**
     * <p>The warm-up status of a dedicated IP address. The status can have one of the
     * following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The IP address
     * isn't ready to use because the dedicated IP warm-up process is ongoing.</p>
     * </li> <li> <p> <code>DONE</code> – The dedicated IP warm-up process is complete,
     * and the IP address is ready to use.</p> </li> </ul>
     */
    inline void SetWarmupStatus(WarmupStatus&& value) { m_warmupStatusHasBeenSet = true; m_warmupStatus = std::move(value); }

    /**
     * <p>The warm-up status of a dedicated IP address. The status can have one of the
     * following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The IP address
     * isn't ready to use because the dedicated IP warm-up process is ongoing.</p>
     * </li> <li> <p> <code>DONE</code> – The dedicated IP warm-up process is complete,
     * and the IP address is ready to use.</p> </li> </ul>
     */
    inline DedicatedIp& WithWarmupStatus(const WarmupStatus& value) { SetWarmupStatus(value); return *this;}

    /**
     * <p>The warm-up status of a dedicated IP address. The status can have one of the
     * following values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> – The IP address
     * isn't ready to use because the dedicated IP warm-up process is ongoing.</p>
     * </li> <li> <p> <code>DONE</code> – The dedicated IP warm-up process is complete,
     * and the IP address is ready to use.</p> </li> </ul>
     */
    inline DedicatedIp& WithWarmupStatus(WarmupStatus&& value) { SetWarmupStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates how complete the dedicated IP warm-up process is. When this value
     * equals 1, the address has completed the warm-up process and is ready for
     * use.</p>
     */
    inline int GetWarmupPercentage() const{ return m_warmupPercentage; }

    /**
     * <p>Indicates how complete the dedicated IP warm-up process is. When this value
     * equals 1, the address has completed the warm-up process and is ready for
     * use.</p>
     */
    inline bool WarmupPercentageHasBeenSet() const { return m_warmupPercentageHasBeenSet; }

    /**
     * <p>Indicates how complete the dedicated IP warm-up process is. When this value
     * equals 1, the address has completed the warm-up process and is ready for
     * use.</p>
     */
    inline void SetWarmupPercentage(int value) { m_warmupPercentageHasBeenSet = true; m_warmupPercentage = value; }

    /**
     * <p>Indicates how complete the dedicated IP warm-up process is. When this value
     * equals 1, the address has completed the warm-up process and is ready for
     * use.</p>
     */
    inline DedicatedIp& WithWarmupPercentage(int value) { SetWarmupPercentage(value); return *this;}


    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline DedicatedIp& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline DedicatedIp& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool that the IP address is associated with.</p>
     */
    inline DedicatedIp& WithPoolName(const char* value) { SetPoolName(value); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet;

    WarmupStatus m_warmupStatus;
    bool m_warmupStatusHasBeenSet;

    int m_warmupPercentage;
    bool m_warmupPercentageHasBeenSet;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
