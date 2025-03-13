/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/Activity.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
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
  class TerminateInstanceInAutoScalingGroupResult
  {
  public:
    AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupResult() = default;
    AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A scaling activity.</p>
     */
    inline const Activity& GetActivity() const { return m_activity; }
    template<typename ActivityT = Activity>
    void SetActivity(ActivityT&& value) { m_activityHasBeenSet = true; m_activity = std::forward<ActivityT>(value); }
    template<typename ActivityT = Activity>
    TerminateInstanceInAutoScalingGroupResult& WithActivity(ActivityT&& value) { SetActivity(std::forward<ActivityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    TerminateInstanceInAutoScalingGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Activity m_activity;
    bool m_activityHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
