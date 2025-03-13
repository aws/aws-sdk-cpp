/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/Activity.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class DetachInstancesResult
  {
  public:
    AWS_AUTOSCALING_API DetachInstancesResult() = default;
    AWS_AUTOSCALING_API DetachInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DetachInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline const Aws::Vector<Activity>& GetActivities() const { return m_activities; }
    template<typename ActivitiesT = Aws::Vector<Activity>>
    void SetActivities(ActivitiesT&& value) { m_activitiesHasBeenSet = true; m_activities = std::forward<ActivitiesT>(value); }
    template<typename ActivitiesT = Aws::Vector<Activity>>
    DetachInstancesResult& WithActivities(ActivitiesT&& value) { SetActivities(std::forward<ActivitiesT>(value)); return *this;}
    template<typename ActivitiesT = Activity>
    DetachInstancesResult& AddActivities(ActivitiesT&& value) { m_activitiesHasBeenSet = true; m_activities.emplace_back(std::forward<ActivitiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DetachInstancesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Activity> m_activities;
    bool m_activitiesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
