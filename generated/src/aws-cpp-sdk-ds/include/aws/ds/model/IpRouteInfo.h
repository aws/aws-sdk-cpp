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
    AWS_DIRECTORYSERVICE_API IpRouteInfo() = default;
    AWS_DIRECTORYSERVICE_API IpRouteInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API IpRouteInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier (ID) of the directory associated with the IP addresses.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    IpRouteInfo& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address block in the <a>IpRoute</a>.</p>
     */
    inline const Aws::String& GetCidrIp() const { return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    template<typename CidrIpT = Aws::String>
    void SetCidrIp(CidrIpT&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::forward<CidrIpT>(value); }
    template<typename CidrIpT = Aws::String>
    IpRouteInfo& WithCidrIp(CidrIpT&& value) { SetCidrIp(std::forward<CidrIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the IP address block.</p>
     */
    inline IpRouteStatusMsg GetIpRouteStatusMsg() const { return m_ipRouteStatusMsg; }
    inline bool IpRouteStatusMsgHasBeenSet() const { return m_ipRouteStatusMsgHasBeenSet; }
    inline void SetIpRouteStatusMsg(IpRouteStatusMsg value) { m_ipRouteStatusMsgHasBeenSet = true; m_ipRouteStatusMsg = value; }
    inline IpRouteInfo& WithIpRouteStatusMsg(IpRouteStatusMsg value) { SetIpRouteStatusMsg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the address block was added to the directory.</p>
     */
    inline const Aws::Utils::DateTime& GetAddedDateTime() const { return m_addedDateTime; }
    inline bool AddedDateTimeHasBeenSet() const { return m_addedDateTimeHasBeenSet; }
    template<typename AddedDateTimeT = Aws::Utils::DateTime>
    void SetAddedDateTime(AddedDateTimeT&& value) { m_addedDateTimeHasBeenSet = true; m_addedDateTime = std::forward<AddedDateTimeT>(value); }
    template<typename AddedDateTimeT = Aws::Utils::DateTime>
    IpRouteInfo& WithAddedDateTime(AddedDateTimeT&& value) { SetAddedDateTime(std::forward<AddedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the IpRouteStatusMsg.</p>
     */
    inline const Aws::String& GetIpRouteStatusReason() const { return m_ipRouteStatusReason; }
    inline bool IpRouteStatusReasonHasBeenSet() const { return m_ipRouteStatusReasonHasBeenSet; }
    template<typename IpRouteStatusReasonT = Aws::String>
    void SetIpRouteStatusReason(IpRouteStatusReasonT&& value) { m_ipRouteStatusReasonHasBeenSet = true; m_ipRouteStatusReason = std::forward<IpRouteStatusReasonT>(value); }
    template<typename IpRouteStatusReasonT = Aws::String>
    IpRouteInfo& WithIpRouteStatusReason(IpRouteStatusReasonT&& value) { SetIpRouteStatusReason(std::forward<IpRouteStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the <a>IpRouteInfo</a>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpRouteInfo& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;

    IpRouteStatusMsg m_ipRouteStatusMsg{IpRouteStatusMsg::NOT_SET};
    bool m_ipRouteStatusMsgHasBeenSet = false;

    Aws::Utils::DateTime m_addedDateTime{};
    bool m_addedDateTimeHasBeenSet = false;

    Aws::String m_ipRouteStatusReason;
    bool m_ipRouteStatusReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
