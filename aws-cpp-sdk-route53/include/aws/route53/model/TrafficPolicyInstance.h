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

  class AWS_ROUTE53_API TrafficPolicyInstance
  {
  public:
    TrafficPolicyInstance();
    TrafficPolicyInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficPolicyInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline TrafficPolicyInstance& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline TrafficPolicyInstance& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline TrafficPolicyInstance& WithId(const char* value) { SetId(value); return *this;}

    
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    
    inline TrafficPolicyInstance& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    
    inline TrafficPolicyInstance& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    
    inline TrafficPolicyInstance& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline TrafficPolicyInstance& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline TrafficPolicyInstance& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline TrafficPolicyInstance& WithName(const char* value) { SetName(value); return *this;}

    
    inline long long GetTTL() const{ return m_tTL; }

    
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }

    
    inline TrafficPolicyInstance& WithTTL(long long value) { SetTTL(value); return *this;}

    
    inline const Aws::String& GetState() const{ return m_state; }

    
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    
    inline TrafficPolicyInstance& WithState(const Aws::String& value) { SetState(value); return *this;}

    
    inline TrafficPolicyInstance& WithState(Aws::String&& value) { SetState(value); return *this;}

    
    inline TrafficPolicyInstance& WithState(const char* value) { SetState(value); return *this;}

    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TrafficPolicyInstance& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TrafficPolicyInstance& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    
    inline TrafficPolicyInstance& WithMessage(const char* value) { SetMessage(value); return *this;}

    
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }

    
    inline TrafficPolicyInstance& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    
    inline TrafficPolicyInstance& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(value); return *this;}

    
    inline TrafficPolicyInstance& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}

    
    inline int GetTrafficPolicyVersion() const{ return m_trafficPolicyVersion; }

    
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }

    
    inline TrafficPolicyInstance& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}

    
    inline const RRType& GetTrafficPolicyType() const{ return m_trafficPolicyType; }

    
    inline void SetTrafficPolicyType(const RRType& value) { m_trafficPolicyTypeHasBeenSet = true; m_trafficPolicyType = value; }

    
    inline void SetTrafficPolicyType(RRType&& value) { m_trafficPolicyTypeHasBeenSet = true; m_trafficPolicyType = value; }

    
    inline TrafficPolicyInstance& WithTrafficPolicyType(const RRType& value) { SetTrafficPolicyType(value); return *this;}

    
    inline TrafficPolicyInstance& WithTrafficPolicyType(RRType&& value) { SetTrafficPolicyType(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    long long m_tTL;
    bool m_tTLHasBeenSet;
    Aws::String m_state;
    bool m_stateHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet;
    int m_trafficPolicyVersion;
    bool m_trafficPolicyVersionHasBeenSet;
    RRType m_trafficPolicyType;
    bool m_trafficPolicyTypeHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
