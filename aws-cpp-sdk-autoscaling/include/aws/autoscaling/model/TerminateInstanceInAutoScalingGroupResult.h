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
  class AWS_AUTOSCALING_API TerminateInstanceInAutoScalingGroupResult
  {
  public:
    TerminateInstanceInAutoScalingGroupResult();
    TerminateInstanceInAutoScalingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    TerminateInstanceInAutoScalingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
