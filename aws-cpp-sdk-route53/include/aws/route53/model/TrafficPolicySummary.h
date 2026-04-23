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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <utility>

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

  /**
   * <p>A complex type that contains information about the latest version of one
   * traffic policy that is associated with the current AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TrafficPolicySummary">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API TrafficPolicySummary
  {
  public:
    TrafficPolicySummary();
    TrafficPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline TrafficPolicySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline TrafficPolicySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigned to the traffic policy when you created
     * it.</p>
     */
    inline TrafficPolicySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline TrafficPolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline TrafficPolicySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you specified for the traffic policy when you created it.</p>
     */
    inline TrafficPolicySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline const RRType& GetType() const{ return m_type; }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline void SetType(const RRType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline void SetType(RRType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline TrafficPolicySummary& WithType(const RRType& value) { SetType(value); return *this;}

    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline TrafficPolicySummary& WithType(RRType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The version number of the latest version of the traffic policy.</p>
     */
    inline int GetLatestVersion() const{ return m_latestVersion; }

    /**
     * <p>The version number of the latest version of the traffic policy.</p>
     */
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }

    /**
     * <p>The version number of the latest version of the traffic policy.</p>
     */
    inline void SetLatestVersion(int value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    /**
     * <p>The version number of the latest version of the traffic policy.</p>
     */
    inline TrafficPolicySummary& WithLatestVersion(int value) { SetLatestVersion(value); return *this;}


    /**
     * <p>The number of traffic policies that are associated with the current AWS
     * account.</p>
     */
    inline int GetTrafficPolicyCount() const{ return m_trafficPolicyCount; }

    /**
     * <p>The number of traffic policies that are associated with the current AWS
     * account.</p>
     */
    inline bool TrafficPolicyCountHasBeenSet() const { return m_trafficPolicyCountHasBeenSet; }

    /**
     * <p>The number of traffic policies that are associated with the current AWS
     * account.</p>
     */
    inline void SetTrafficPolicyCount(int value) { m_trafficPolicyCountHasBeenSet = true; m_trafficPolicyCount = value; }

    /**
     * <p>The number of traffic policies that are associated with the current AWS
     * account.</p>
     */
    inline TrafficPolicySummary& WithTrafficPolicyCount(int value) { SetTrafficPolicyCount(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RRType m_type;
    bool m_typeHasBeenSet;

    int m_latestVersion;
    bool m_latestVersionHasBeenSet;

    int m_trafficPolicyCount;
    bool m_trafficPolicyCountHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
