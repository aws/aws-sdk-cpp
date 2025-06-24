/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/CampaignStatus.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class UpdateCampaignResult
  {
  public:
    AWS_IOTFLEETWISE_API UpdateCampaignResult() = default;
    AWS_IOTFLEETWISE_API UpdateCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API UpdateCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateCampaignResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the updated campaign.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCampaignResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a campaign. The status can be one of:</p> <ul> <li> <p>
     * <code>CREATING</code> - Amazon Web Services IoT FleetWise is processing your
     * request to create the campaign. </p> </li> <li> <p>
     * <code>WAITING_FOR_APPROVAL</code> - After you create a campaign, it enters this
     * state. Use the API operation to approve the campaign for deployment to the
     * target vehicle or fleet. </p> </li> <li> <p> <code>RUNNING</code> - The campaign
     * is active. </p> </li> <li> <p> <code>SUSPENDED</code> - The campaign is
     * suspended. To resume the campaign, use the API operation. </p> </li> </ul>
     */
    inline CampaignStatus GetStatus() const { return m_status; }
    inline void SetStatus(CampaignStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateCampaignResult& WithStatus(CampaignStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCampaignResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CampaignStatus m_status{CampaignStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
