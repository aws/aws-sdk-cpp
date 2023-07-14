﻿/**
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
  class AWS_AUTOSCALING_API ExitStandbyResult
  {
  public:
    ExitStandbyResult();
    ExitStandbyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ExitStandbyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The activities related to moving instances out of <code>Standby</code>
     * mode.</p>
     */
    inline const Aws::Vector<Activity>& GetActivities() const{ return m_activities; }

    /**
     * <p>The activities related to moving instances out of <code>Standby</code>
     * mode.</p>
     */
    inline void SetActivities(const Aws::Vector<Activity>& value) { m_activities = value; }

    /**
     * <p>The activities related to moving instances out of <code>Standby</code>
     * mode.</p>
     */
    inline void SetActivities(Aws::Vector<Activity>&& value) { m_activities = std::move(value); }

    /**
     * <p>The activities related to moving instances out of <code>Standby</code>
     * mode.</p>
     */
    inline ExitStandbyResult& WithActivities(const Aws::Vector<Activity>& value) { SetActivities(value); return *this;}

    /**
     * <p>The activities related to moving instances out of <code>Standby</code>
     * mode.</p>
     */
    inline ExitStandbyResult& WithActivities(Aws::Vector<Activity>&& value) { SetActivities(std::move(value)); return *this;}

    /**
     * <p>The activities related to moving instances out of <code>Standby</code>
     * mode.</p>
     */
    inline ExitStandbyResult& AddActivities(const Activity& value) { m_activities.push_back(value); return *this; }

    /**
     * <p>The activities related to moving instances out of <code>Standby</code>
     * mode.</p>
     */
    inline ExitStandbyResult& AddActivities(Activity&& value) { m_activities.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ExitStandbyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ExitStandbyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Activity> m_activities;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
