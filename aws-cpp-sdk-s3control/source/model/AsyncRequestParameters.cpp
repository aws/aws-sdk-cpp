/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AsyncRequestParameters.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

AsyncRequestParameters::AsyncRequestParameters() : 
    m_createMultiRegionAccessPointRequestHasBeenSet(false),
    m_deleteMultiRegionAccessPointRequestHasBeenSet(false),
    m_putMultiRegionAccessPointPolicyRequestHasBeenSet(false)
{
}

AsyncRequestParameters::AsyncRequestParameters(const XmlNode& xmlNode) : 
    m_createMultiRegionAccessPointRequestHasBeenSet(false),
    m_deleteMultiRegionAccessPointRequestHasBeenSet(false),
    m_putMultiRegionAccessPointPolicyRequestHasBeenSet(false)
{
  *this = xmlNode;
}

AsyncRequestParameters& AsyncRequestParameters::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode createMultiRegionAccessPointRequestNode = resultNode.FirstChild("CreateMultiRegionAccessPointRequest");
    if(!createMultiRegionAccessPointRequestNode.IsNull())
    {
      m_createMultiRegionAccessPointRequest = createMultiRegionAccessPointRequestNode;
      m_createMultiRegionAccessPointRequestHasBeenSet = true;
    }
    XmlNode deleteMultiRegionAccessPointRequestNode = resultNode.FirstChild("DeleteMultiRegionAccessPointRequest");
    if(!deleteMultiRegionAccessPointRequestNode.IsNull())
    {
      m_deleteMultiRegionAccessPointRequest = deleteMultiRegionAccessPointRequestNode;
      m_deleteMultiRegionAccessPointRequestHasBeenSet = true;
    }
    XmlNode putMultiRegionAccessPointPolicyRequestNode = resultNode.FirstChild("PutMultiRegionAccessPointPolicyRequest");
    if(!putMultiRegionAccessPointPolicyRequestNode.IsNull())
    {
      m_putMultiRegionAccessPointPolicyRequest = putMultiRegionAccessPointPolicyRequestNode;
      m_putMultiRegionAccessPointPolicyRequestHasBeenSet = true;
    }
  }

  return *this;
}

void AsyncRequestParameters::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_createMultiRegionAccessPointRequestHasBeenSet)
  {
   XmlNode createMultiRegionAccessPointRequestNode = parentNode.CreateChildElement("CreateMultiRegionAccessPointRequest");
   m_createMultiRegionAccessPointRequest.AddToNode(createMultiRegionAccessPointRequestNode);
  }

  if(m_deleteMultiRegionAccessPointRequestHasBeenSet)
  {
   XmlNode deleteMultiRegionAccessPointRequestNode = parentNode.CreateChildElement("DeleteMultiRegionAccessPointRequest");
   m_deleteMultiRegionAccessPointRequest.AddToNode(deleteMultiRegionAccessPointRequestNode);
  }

  if(m_putMultiRegionAccessPointPolicyRequestHasBeenSet)
  {
   XmlNode putMultiRegionAccessPointPolicyRequestNode = parentNode.CreateChildElement("PutMultiRegionAccessPointPolicyRequest");
   m_putMultiRegionAccessPointPolicyRequest.AddToNode(putMultiRegionAccessPointPolicyRequestNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
