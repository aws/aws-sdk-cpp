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
    AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupResult();
    AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A scaling activity.</p>
     */
    inline const Activity& GetActivity() const{ return m_activity; }

    /**
     * <p>A scaling activity.</p>
     */
    inline void SetActivity(const Activity& value) { m_activity = value; }

    /**
     * <p>A scaling activity.</p>
     */
    inline void SetActivity(Activity&& value) { m_activity = std::move(value); }

    /**
     * <p>A scaling activity.</p>
     */
    inline TerminateInstanceInAutoScalingGroupResult& WithActivity(const Activity& value) { SetActivity(value); return *this;}

    /**
     * <p>A scaling activity.</p>
     */
    inline TerminateInstanceInAutoScalingGroupResult& WithActivity(Activity&& value) { SetActivity(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline TerminateInstanceInAutoScalingGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline TerminateInstanceInAutoScalingGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Activity m_activity;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
