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
  class AWS_DIRECTORYSERVICE_API IpRouteInfo
  {
  public:
    IpRouteInfo();
    IpRouteInfo(Aws::Utils::Json::JsonView jsonValue);
    IpRouteInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline IpRouteInfo& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline IpRouteInfo& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline IpRouteInfo& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }

    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline IpRouteInfo& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline IpRouteInfo& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline IpRouteInfo& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}


    /**
     * <p>The status of the IP address block.</p>
     */
    inline const IpRouteStatusMsg& GetIpRouteStatusMsg() const{ return m_ipRouteStatusMsg; }

    /**
     * <p>The status of the IP address block.</p>
     */
    inline bool IpRouteStatusMsgHasBeenSet() const { return m_ipRouteStatusMsgHasBeenSet; }

    /**
     * <p>The status of the IP address block.</p>
     */
    inline void SetIpRouteStatusMsg(const IpRouteStatusMsg& value) { m_ipRouteStatusMsgHasBeenSet = true; m_ipRouteStatusMsg = value; }

    /**
     * <p>The status of the IP address block.</p>
     */
    inline void SetIpRouteStatusMsg(IpRouteStatusMsg&& value) { m_ipRouteStatusMsgHasBeenSet = true; m_ipRouteStatusMsg = std::move(value); }

    /**
     * <p>The status of the IP address block.</p>
     */
    inline IpRouteInfo& WithIpRouteStatusMsg(const IpRouteStatusMsg& value) { SetIpRouteStatusMsg(value); return *this;}

    /**
     * <p>The status of the IP address block.</p>
     */
    inline IpRouteInfo& WithIpRouteStatusMsg(IpRouteStatusMsg&& value) { SetIpRouteStatusMsg(std::move(value)); return *this;}


    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline const Aws::Utils::DateTime& GetAddedDateTime() const{ return m_addedDateTime; }

    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline bool AddedDateTimeHasBeenSet() const { return m_addedDateTimeHasBeenSet; }

    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline void SetAddedDateTime(const Aws::Utils::DateTime& value) { m_addedDateTimeHasBeenSet = true; m_addedDateTime = value; }

    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline void SetAddedDateTime(Aws::Utils::DateTime&& value) { m_addedDateTimeHasBeenSet = true; m_addedDateTime = std::move(value); }

    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline IpRouteInfo& WithAddedDateTime(const Aws::Utils::DateTime& value) { SetAddedDateTime(value); return *this;}

    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline IpRouteInfo& WithAddedDateTime(Aws::Utils::DateTime&& value) { SetAddedDateTime(std::move(value)); return *this;}


    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline const Aws::String& GetIpRouteStatusReason() const{ return m_ipRouteStatusReason; }

    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline bool IpRouteStatusReasonHasBeenSet() const { return m_ipRouteStatusReasonHasBeenSet; }

    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline void SetIpRouteStatusReason(const Aws::String& value) { m_ipRouteStatusReasonHasBeenSet = true; m_ipRouteStatusReason = value; }

    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline void SetIpRouteStatusReason(Aws::String&& value) { m_ipRouteStatusReasonHasBeenSet = true; m_ipRouteStatusReason = std::move(value); }

    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline void SetIpRouteStatusReason(const char* value) { m_ipRouteStatusReasonHasBeenSet = true; m_ipRouteStatusReason.assign(value); }

    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline IpRouteInfo& WithIpRouteStatusReason(const Aws::String& value) { SetIpRouteStatusReason(value); return *this;}

    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline IpRouteInfo& WithIpRouteStatusReason(Aws::String&& value) { SetIpRouteStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline IpRouteInfo& WithIpRouteStatusReason(const char* value) { SetIpRouteStatusReason(value); return *this;}


    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline IpRouteInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline IpRouteInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline IpRouteInfo& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;

    IpRouteStatusMsg m_ipRouteStatusMsg;
    bool m_ipRouteStatusMsgHasBeenSet;

    Aws::Utils::DateTime m_addedDateTime;
    bool m_addedDateTimeHasBeenSet;

    Aws::String m_ipRouteStatusReason;
    bool m_ipRouteStatusReasonHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
