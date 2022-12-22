/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/HostRole.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Host">AWS API
   * Reference</a></p>
   */
  class Host
  {
  public:
    AWS_SSMSAP_API Host();
    AWS_SSMSAP_API Host(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Host& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetHostName() const{ return m_hostName; }

    /**
     * <p/>
     */
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHostName(const Aws::String& value) { m_hostNameHasBeenSet = true; m_hostName = value; }

    /**
     * <p/>
     */
    inline void SetHostName(Aws::String&& value) { m_hostNameHasBeenSet = true; m_hostName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetHostName(const char* value) { m_hostNameHasBeenSet = true; m_hostName.assign(value); }

    /**
     * <p/>
     */
    inline Host& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}

    /**
     * <p/>
     */
    inline Host& WithHostName(Aws::String&& value) { SetHostName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Host& WithHostName(const char* value) { SetHostName(value); return *this;}


    /**
     * <p/>
     */
    inline const HostRole& GetHostRole() const{ return m_hostRole; }

    /**
     * <p/>
     */
    inline bool HostRoleHasBeenSet() const { return m_hostRoleHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHostRole(const HostRole& value) { m_hostRoleHasBeenSet = true; m_hostRole = value; }

    /**
     * <p/>
     */
    inline void SetHostRole(HostRole&& value) { m_hostRoleHasBeenSet = true; m_hostRole = std::move(value); }

    /**
     * <p/>
     */
    inline Host& WithHostRole(const HostRole& value) { SetHostRole(value); return *this;}

    /**
     * <p/>
     */
    inline Host& WithHostRole(HostRole&& value) { SetHostRole(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetHostIp() const{ return m_hostIp; }

    /**
     * <p/>
     */
    inline bool HostIpHasBeenSet() const { return m_hostIpHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHostIp(const Aws::String& value) { m_hostIpHasBeenSet = true; m_hostIp = value; }

    /**
     * <p/>
     */
    inline void SetHostIp(Aws::String&& value) { m_hostIpHasBeenSet = true; m_hostIp = std::move(value); }

    /**
     * <p/>
     */
    inline void SetHostIp(const char* value) { m_hostIpHasBeenSet = true; m_hostIp.assign(value); }

    /**
     * <p/>
     */
    inline Host& WithHostIp(const Aws::String& value) { SetHostIp(value); return *this;}

    /**
     * <p/>
     */
    inline Host& WithHostIp(Aws::String&& value) { SetHostIp(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Host& WithHostIp(const char* value) { SetHostIp(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p/>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p/>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p/>
     */
    inline Host& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p/>
     */
    inline Host& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Host& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    HostRole m_hostRole;
    bool m_hostRoleHasBeenSet = false;

    Aws::String m_hostIp;
    bool m_hostIpHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
