﻿/*
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
   * <p>Contains the output of EnterStandby.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/EnterStandbyAnswer">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API EnterStandbyResult
  {
  public:
    EnterStandbyResult();
    EnterStandbyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    EnterStandbyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The activities related to moving instances into <code>Standby</code>
     * mode.</p>
     */
    inline const Aws::Vector<Activity>& GetActivities() const{ return m_activities; }

    /**
     * <p>The activities related to moving instances into <code>Standby</code>
     * mode.</p>
     */
    inline void SetActivities(const Aws::Vector<Activity>& value) { m_activities = value; }

    /**
     * <p>The activities related to moving instances into <code>Standby</code>
     * mode.</p>
     */
    inline void SetActivities(Aws::Vector<Activity>&& value) { m_activities = value; }

    /**
     * <p>The activities related to moving instances into <code>Standby</code>
     * mode.</p>
     */
    inline EnterStandbyResult& WithActivities(const Aws::Vector<Activity>& value) { SetActivities(value); return *this;}

    /**
     * <p>The activities related to moving instances into <code>Standby</code>
     * mode.</p>
     */
    inline EnterStandbyResult& WithActivities(Aws::Vector<Activity>&& value) { SetActivities(value); return *this;}

    /**
     * <p>The activities related to moving instances into <code>Standby</code>
     * mode.</p>
     */
    inline EnterStandbyResult& AddActivities(const Activity& value) { m_activities.push_back(value); return *this; }

    /**
     * <p>The activities related to moving instances into <code>Standby</code>
     * mode.</p>
     */
    inline EnterStandbyResult& AddActivities(Activity&& value) { m_activities.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline EnterStandbyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnterStandbyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Activity> m_activities;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws