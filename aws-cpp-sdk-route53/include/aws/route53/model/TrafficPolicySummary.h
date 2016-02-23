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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  class AWS_ROUTE53_API TrafficPolicySummary
  {
  public:
    TrafficPolicySummary();
    TrafficPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline TrafficPolicySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline TrafficPolicySummary& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline TrafficPolicySummary& WithId(const char* value) { SetId(value); return *this;}

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline TrafficPolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline TrafficPolicySummary& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline TrafficPolicySummary& WithName(const char* value) { SetName(value); return *this;}

    
    inline const RRType& GetType() const{ return m_type; }

    
    inline void SetType(const RRType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(RRType&& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline TrafficPolicySummary& WithType(const RRType& value) { SetType(value); return *this;}

    
    inline TrafficPolicySummary& WithType(RRType&& value) { SetType(value); return *this;}

    
    inline long GetLatestVersion() const{ return m_latestVersion; }

    
    inline void SetLatestVersion(long value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    
    inline TrafficPolicySummary& WithLatestVersion(long value) { SetLatestVersion(value); return *this;}

    
    inline long GetTrafficPolicyCount() const{ return m_trafficPolicyCount; }

    
    inline void SetTrafficPolicyCount(long value) { m_trafficPolicyCountHasBeenSet = true; m_trafficPolicyCount = value; }

    
    inline TrafficPolicySummary& WithTrafficPolicyCount(long value) { SetTrafficPolicyCount(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    RRType m_type;
    bool m_typeHasBeenSet;
    long m_latestVersion;
    bool m_latestVersionHasBeenSet;
    long m_trafficPolicyCount;
    bool m_trafficPolicyCountHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
