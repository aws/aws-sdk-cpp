/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PortalStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class CreatePortalResult
  {
  public:
    AWS_IOTSITEWISE_API CreatePortalResult() = default;
    AWS_IOTSITEWISE_API CreatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the created portal.</p>
     */
    inline const Aws::String& GetPortalId() const { return m_portalId; }
    template<typename PortalIdT = Aws::String>
    void SetPortalId(PortalIdT&& value) { m_portalIdHasBeenSet = true; m_portalId = std::forward<PortalIdT>(value); }
    template<typename PortalIdT = Aws::String>
    CreatePortalResult& WithPortalId(PortalIdT&& value) { SetPortalId(std::forward<PortalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline const Aws::String& GetPortalArn() const { return m_portalArn; }
    template<typename PortalArnT = Aws::String>
    void SetPortalArn(PortalArnT&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::forward<PortalArnT>(value); }
    template<typename PortalArnT = Aws::String>
    CreatePortalResult& WithPortalArn(PortalArnT&& value) { SetPortalArn(std::forward<PortalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline const Aws::String& GetPortalStartUrl() const { return m_portalStartUrl; }
    template<typename PortalStartUrlT = Aws::String>
    void SetPortalStartUrl(PortalStartUrlT&& value) { m_portalStartUrlHasBeenSet = true; m_portalStartUrl = std::forward<PortalStartUrlT>(value); }
    template<typename PortalStartUrlT = Aws::String>
    CreatePortalResult& WithPortalStartUrl(PortalStartUrlT&& value) { SetPortalStartUrl(std::forward<PortalStartUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const { return m_portalStatus; }
    template<typename PortalStatusT = PortalStatus>
    void SetPortalStatus(PortalStatusT&& value) { m_portalStatusHasBeenSet = true; m_portalStatus = std::forward<PortalStatusT>(value); }
    template<typename PortalStatusT = PortalStatus>
    CreatePortalResult& WithPortalStatus(PortalStatusT&& value) { SetPortalStatus(std::forward<PortalStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetSsoApplicationId() const { return m_ssoApplicationId; }
    template<typename SsoApplicationIdT = Aws::String>
    void SetSsoApplicationId(SsoApplicationIdT&& value) { m_ssoApplicationIdHasBeenSet = true; m_ssoApplicationId = std::forward<SsoApplicationIdT>(value); }
    template<typename SsoApplicationIdT = Aws::String>
    CreatePortalResult& WithSsoApplicationId(SsoApplicationIdT&& value) { SetSsoApplicationId(std::forward<SsoApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePortalResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_portalStartUrl;
    bool m_portalStartUrlHasBeenSet = false;

    PortalStatus m_portalStatus;
    bool m_portalStatusHasBeenSet = false;

    Aws::String m_ssoApplicationId;
    bool m_ssoApplicationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
