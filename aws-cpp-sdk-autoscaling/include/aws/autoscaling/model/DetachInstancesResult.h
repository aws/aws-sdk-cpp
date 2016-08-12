/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/Activity.h>

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
  /**
   * <p>Contains the output of DetachInstances.</p>
   */
  class AWS_AUTOSCALING_API DetachInstancesResult
  {
  public:
    DetachInstancesResult();
    DetachInstancesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DetachInstancesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline const Aws::Vector<Activity>& GetActivities() const{ return m_activities; }

    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline void SetActivities(const Aws::Vector<Activity>& value) { m_activities = value; }

    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline void SetActivities(Aws::Vector<Activity>&& value) { m_activities = value; }

    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline DetachInstancesResult& WithActivities(const Aws::Vector<Activity>& value) { SetActivities(value); return *this;}

    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline DetachInstancesResult& WithActivities(Aws::Vector<Activity>&& value) { SetActivities(value); return *this;}

    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline DetachInstancesResult& AddActivities(const Activity& value) { m_activities.push_back(value); return *this; }

    /**
     * <p>The activities related to detaching the instances from the Auto Scaling
     * group.</p>
     */
    inline DetachInstancesResult& AddActivities(Activity&& value) { m_activities.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DetachInstancesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DetachInstancesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Activity> m_activities;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws