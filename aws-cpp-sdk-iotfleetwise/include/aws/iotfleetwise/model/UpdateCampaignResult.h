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
    AWS_IOTFLEETWISE_API UpdateCampaignResult();
    AWS_IOTFLEETWISE_API UpdateCampaignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API UpdateCampaignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline UpdateCampaignResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline UpdateCampaignResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the campaign. </p>
     */
    inline UpdateCampaignResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the updated campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the updated campaign.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the updated campaign.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the updated campaign.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the updated campaign.</p>
     */
    inline UpdateCampaignResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the updated campaign.</p>
     */
    inline UpdateCampaignResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the updated campaign.</p>
     */
    inline UpdateCampaignResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of a campaign. The status can be one of:</p> <ul> <li> <p>
     * <code>CREATING</code> - Amazon Web Services IoT FleetWise is processing your
     * request to create the campaign. </p> </li> <li> <p>
     * <code>WAITING_FOR_APPROVAL</code> - After a campaign is created, it enters the
     * <code>WAITING_FOR_APPROVAL</code> state. To allow Amazon Web Services IoT
     * FleetWise to deploy the campaign to the target vehicle or fleet, use the API
     * operation to approve the campaign. </p> </li> <li> <p> <code>RUNNING</code> -
     * The campaign is active. </p> </li> <li> <p> <code>SUSPENDED</code> - The
     * campaign is suspended. To resume the campaign, use the API operation. </p> </li>
     * </ul>
     */
    inline const CampaignStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of a campaign. The status can be one of:</p> <ul> <li> <p>
     * <code>CREATING</code> - Amazon Web Services IoT FleetWise is processing your
     * request to create the campaign. </p> </li> <li> <p>
     * <code>WAITING_FOR_APPROVAL</code> - After a campaign is created, it enters the
     * <code>WAITING_FOR_APPROVAL</code> state. To allow Amazon Web Services IoT
     * FleetWise to deploy the campaign to the target vehicle or fleet, use the API
     * operation to approve the campaign. </p> </li> <li> <p> <code>RUNNING</code> -
     * The campaign is active. </p> </li> <li> <p> <code>SUSPENDED</code> - The
     * campaign is suspended. To resume the campaign, use the API operation. </p> </li>
     * </ul>
     */
    inline void SetStatus(const CampaignStatus& value) { m_status = value; }

    /**
     * <p>The state of a campaign. The status can be one of:</p> <ul> <li> <p>
     * <code>CREATING</code> - Amazon Web Services IoT FleetWise is processing your
     * request to create the campaign. </p> </li> <li> <p>
     * <code>WAITING_FOR_APPROVAL</code> - After a campaign is created, it enters the
     * <code>WAITING_FOR_APPROVAL</code> state. To allow Amazon Web Services IoT
     * FleetWise to deploy the campaign to the target vehicle or fleet, use the API
     * operation to approve the campaign. </p> </li> <li> <p> <code>RUNNING</code> -
     * The campaign is active. </p> </li> <li> <p> <code>SUSPENDED</code> - The
     * campaign is suspended. To resume the campaign, use the API operation. </p> </li>
     * </ul>
     */
    inline void SetStatus(CampaignStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The state of a campaign. The status can be one of:</p> <ul> <li> <p>
     * <code>CREATING</code> - Amazon Web Services IoT FleetWise is processing your
     * request to create the campaign. </p> </li> <li> <p>
     * <code>WAITING_FOR_APPROVAL</code> - After a campaign is created, it enters the
     * <code>WAITING_FOR_APPROVAL</code> state. To allow Amazon Web Services IoT
     * FleetWise to deploy the campaign to the target vehicle or fleet, use the API
     * operation to approve the campaign. </p> </li> <li> <p> <code>RUNNING</code> -
     * The campaign is active. </p> </li> <li> <p> <code>SUSPENDED</code> - The
     * campaign is suspended. To resume the campaign, use the API operation. </p> </li>
     * </ul>
     */
    inline UpdateCampaignResult& WithStatus(const CampaignStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of a campaign. The status can be one of:</p> <ul> <li> <p>
     * <code>CREATING</code> - Amazon Web Services IoT FleetWise is processing your
     * request to create the campaign. </p> </li> <li> <p>
     * <code>WAITING_FOR_APPROVAL</code> - After a campaign is created, it enters the
     * <code>WAITING_FOR_APPROVAL</code> state. To allow Amazon Web Services IoT
     * FleetWise to deploy the campaign to the target vehicle or fleet, use the API
     * operation to approve the campaign. </p> </li> <li> <p> <code>RUNNING</code> -
     * The campaign is active. </p> </li> <li> <p> <code>SUSPENDED</code> - The
     * campaign is suspended. To resume the campaign, use the API operation. </p> </li>
     * </ul>
     */
    inline UpdateCampaignResult& WithStatus(CampaignStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    CampaignStatus m_status;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
