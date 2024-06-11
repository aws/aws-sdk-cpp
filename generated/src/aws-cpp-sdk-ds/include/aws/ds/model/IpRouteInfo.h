/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/IpRouteStatusMsg.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Information about one or more IP address blocks.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/IpRouteInfo">AWS
   * API Reference</a></p>
   */
  class IpRouteInfo
  {
  public:
    AWS_DIRECTORYSERVICE_API IpRouteInfo();
    AWS_DIRECTORYSERVICE_API IpRouteInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API IpRouteInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline IpRouteInfo& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline IpRouteInfo& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline IpRouteInfo& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }
    inline IpRouteInfo& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}
    inline IpRouteInfo& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}
    inline IpRouteInfo& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the IP address block.</p>
     */
    inline const IpRouteStatusMsg& GetIpRouteStatusMsg() const{ return m_ipRouteStatusMsg; }
    inline bool IpRouteStatusMsgHasBeenSet() const { return m_ipRouteStatusMsgHasBeenSet; }
    inline void SetIpRouteStatusMsg(const IpRouteStatusMsg& value) { m_ipRouteStatusMsgHasBeenSet = true; m_ipRouteStatusMsg = value; }
    inline void SetIpRouteStatusMsg(IpRouteStatusMsg&& value) { m_ipRouteStatusMsgHasBeenSet = true; m_ipRouteStatusMsg = std::move(value); }
    inline IpRouteInfo& WithIpRouteStatusMsg(const IpRouteStatusMsg& value) { SetIpRouteStatusMsg(value); return *this;}
    inline IpRouteInfo& WithIpRouteStatusMsg(IpRouteStatusMsg&& value) { SetIpRouteStatusMsg(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline const Aws::Utils::DateTime& GetAddedDateTime() const{ return m_addedDateTime; }
    inline bool AddedDateTimeHasBeenSet() const { return m_addedDateTimeHasBeenSet; }
    inline void SetAddedDateTime(const Aws::Utils::DateTime& value) { m_addedDateTimeHasBeenSet = true; m_addedDateTime = value; }
    inline void SetAddedDateTime(Aws::Utils::DateTime&& value) { m_addedDateTimeHasBeenSet = true; m_addedDateTime = std::move(value); }
    inline IpRouteInfo& WithAddedDateTime(const Aws::Utils::DateTime& value) { SetAddedDateTime(value); return *this;}
    inline IpRouteInfo& WithAddedDateTime(Aws::Utils::DateTime&& value) { SetAddedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline const Aws::String& GetIpRouteStatusReason() const{ return m_ipRouteStatusReason; }
    inline bool IpRouteStatusReasonHasBeenSet() const { return m_ipRouteStatusReasonHasBeenSet; }
    inline void SetIpRouteStatusReason(const Aws::String& value) { m_ipRouteStatusReasonHasBeenSet = true; m_ipRouteStatusReason = value; }
    inline void SetIpRouteStatusReason(Aws::String&& value) { m_ipRouteStatusReasonHasBeenSet = true; m_ipRouteStatusReason = std::move(value); }
    inline void SetIpRouteStatusReason(const char* value) { m_ipRouteStatusReasonHasBeenSet = true; m_ipRouteStatusReason.assign(value); }
    inline IpRouteInfo& WithIpRouteStatusReason(const Aws::String& value) { SetIpRouteStatusReason(value); return *this;}
    inline IpRouteInfo& WithIpRouteStatusReason(Aws::String&& value) { SetIpRouteStatusReason(std::move(value)); return *this;}
    inline IpRouteInfo& WithIpRouteStatusReason(const char* value) { SetIpRouteStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline IpRouteInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline IpRouteInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline IpRouteInfo& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;

    IpRouteStatusMsg m_ipRouteStatusMsg;
    bool m_ipRouteStatusMsgHasBeenSet = false;

    Aws::Utils::DateTime m_addedDateTime;
    bool m_addedDateTimeHasBeenSet = false;

    Aws::String m_ipRouteStatusReason;
    bool m_ipRouteStatusReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
