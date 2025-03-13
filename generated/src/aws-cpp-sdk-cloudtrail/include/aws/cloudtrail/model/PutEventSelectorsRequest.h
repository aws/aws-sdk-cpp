/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/EventSelector.h>
#include <aws/cloudtrail/model/AdvancedEventSelector.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class PutEventSelectorsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API PutEventSelectorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEventSelectors"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name of the trail or trail ARN. If you specify a trail name,
     * the string must meet the following requirements:</p> <ul> <li> <p>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-)</p> </li> <li> <p>Start with a letter or number, and end with a letter or
     * number</p> </li> <li> <p>Be between 3 and 128 characters</p> </li> <li> <p>Have
     * no adjacent periods, underscores or dashes. Names like
     * <code>my-_namespace</code> and <code>my--namespace</code> are not valid.</p>
     * </li> <li> <p>Not be in IP address format (for example, 192.168.5.4)</p> </li>
     * </ul> <p>If you specify a trail ARN, it must be in the following format.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailName() const { return m_trailName; }
    inline bool TrailNameHasBeenSet() const { return m_trailNameHasBeenSet; }
    template<typename TrailNameT = Aws::String>
    void SetTrailName(TrailNameT&& value) { m_trailNameHasBeenSet = true; m_trailName = std::forward<TrailNameT>(value); }
    template<typename TrailNameT = Aws::String>
    PutEventSelectorsRequest& WithTrailName(TrailNameT&& value) { SetTrailName(std::forward<TrailNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the settings for your event selectors. You can use event selectors
     * to log management events and data events for the following resource types:</p>
     * <ul> <li> <p> <code>AWS::DynamoDB::Table</code> </p> </li> <li> <p>
     * <code>AWS::Lambda::Function</code> </p> </li> <li> <p>
     * <code>AWS::S3::Object</code> </p> </li> </ul> <p>You can't use event selectors
     * to log network activity events.</p> <p>You can configure up to five event
     * selectors for a trail. You can use either <code>EventSelectors</code> or
     * <code>AdvancedEventSelectors</code> in a <code>PutEventSelectors</code> request,
     * but not both. If you apply <code>EventSelectors</code> to a trail, any existing
     * <code>AdvancedEventSelectors</code> are overwritten.</p>
     */
    inline const Aws::Vector<EventSelector>& GetEventSelectors() const { return m_eventSelectors; }
    inline bool EventSelectorsHasBeenSet() const { return m_eventSelectorsHasBeenSet; }
    template<typename EventSelectorsT = Aws::Vector<EventSelector>>
    void SetEventSelectors(EventSelectorsT&& value) { m_eventSelectorsHasBeenSet = true; m_eventSelectors = std::forward<EventSelectorsT>(value); }
    template<typename EventSelectorsT = Aws::Vector<EventSelector>>
    PutEventSelectorsRequest& WithEventSelectors(EventSelectorsT&& value) { SetEventSelectors(std::forward<EventSelectorsT>(value)); return *this;}
    template<typename EventSelectorsT = EventSelector>
    PutEventSelectorsRequest& AddEventSelectors(EventSelectorsT&& value) { m_eventSelectorsHasBeenSet = true; m_eventSelectors.emplace_back(std::forward<EventSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the settings for advanced event selectors. You can use advanced
     * event selectors to log management events, data events for all resource types,
     * and network activity events.</p> <p>You can add advanced event selectors, and
     * conditions for your advanced event selectors, up to a maximum of 500 values for
     * all conditions and selectors on a trail. You can use either
     * <code>AdvancedEventSelectors</code> or <code>EventSelectors</code>, but not
     * both. If you apply <code>AdvancedEventSelectors</code> to a trail, any existing
     * <code>EventSelectors</code> are overwritten. For more information about advanced
     * event selectors, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-data-events-with-cloudtrail.html">Logging
     * data events</a> and <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/logging-network-events-with-cloudtrail.html">Logging
     * network activity events</a> in the <i>CloudTrail User Guide</i>. </p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value); }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    PutEventSelectorsRequest& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value)); return *this;}
    template<typename AdvancedEventSelectorsT = AdvancedEventSelector>
    PutEventSelectorsRequest& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trailName;
    bool m_trailNameHasBeenSet = false;

    Aws::Vector<EventSelector> m_eventSelectors;
    bool m_eventSelectorsHasBeenSet = false;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
    bool m_advancedEventSelectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
