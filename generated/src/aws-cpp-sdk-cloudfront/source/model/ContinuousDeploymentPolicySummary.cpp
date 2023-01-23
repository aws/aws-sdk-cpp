/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ContinuousDeploymentPolicySummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

ContinuousDeploymentPolicySummary::ContinuousDeploymentPolicySummary() : 
    m_continuousDeploymentPolicyHasBeenSet(false)
{
}

ContinuousDeploymentPolicySummary::ContinuousDeploymentPolicySummary(const XmlNode& xmlNode) : 
    m_continuousDeploymentPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

ContinuousDeploymentPolicySummary& ContinuousDeploymentPolicySummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode continuousDeploymentPolicyNode = resultNode.FirstChild("ContinuousDeploymentPolicy");
    if(!continuousDeploymentPolicyNode.IsNull())
    {
      m_continuousDeploymentPolicy = continuousDeploymentPolicyNode;
      m_continuousDeploymentPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void ContinuousDeploymentPolicySummary::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_continuousDeploymentPolicyHasBeenSet)
  {
   XmlNode continuousDeploymentPolicyNode = parentNode.CreateChildElement("ContinuousDeploymentPolicy");
   m_continuousDeploymentPolicy.AddToNode(continuousDeploymentPolicyNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
