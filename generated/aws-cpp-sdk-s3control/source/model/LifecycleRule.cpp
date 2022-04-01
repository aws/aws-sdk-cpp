/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/LifecycleRule.h>
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

LifecycleRule::LifecycleRule() : 
    m_expirationHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_status(ExpirationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_transitionsHasBeenSet(false),
    m_noncurrentVersionTransitionsHasBeenSet(false),
    m_noncurrentVersionExpirationHasBeenSet(false),
    m_abortIncompleteMultipartUploadHasBeenSet(false)
{
}

LifecycleRule::LifecycleRule(const XmlNode& xmlNode) : 
    m_expirationHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_status(ExpirationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_transitionsHasBeenSet(false),
    m_noncurrentVersionTransitionsHasBeenSet(false),
    m_noncurrentVersionExpirationHasBeenSet(false),
    m_abortIncompleteMultipartUploadHasBeenSet(false)
{
  *this = xmlNode;
}

LifecycleRule& LifecycleRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    if(!expirationNode.IsNull())
    {
      m_expiration = expirationNode;
      m_expirationHasBeenSet = true;
    }
    XmlNode iDNode = resultNode.FirstChild("ID");
    if(!iDNode.IsNull())
    {
      m_iD = Aws::Utils::Xml::DecodeEscapedXmlText(iDNode.GetText());
      m_iDHasBeenSet = true;
    }
    XmlNode filterNode = resultNode.FirstChild("Filter");
    if(!filterNode.IsNull())
    {
      m_filter = filterNode;
      m_filterHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ExpirationStatusMapper::GetExpirationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode transitionsNode = resultNode.FirstChild("Transitions");
    if(!transitionsNode.IsNull())
    {
      XmlNode transitionsMember = transitionsNode.FirstChild("Transition");
      while(!transitionsMember.IsNull())
      {
        m_transitions.push_back(transitionsMember);
        transitionsMember = transitionsMember.NextNode("Transition");
      }

      m_transitionsHasBeenSet = true;
    }
    XmlNode noncurrentVersionTransitionsNode = resultNode.FirstChild("NoncurrentVersionTransitions");
    if(!noncurrentVersionTransitionsNode.IsNull())
    {
      XmlNode noncurrentVersionTransitionsMember = noncurrentVersionTransitionsNode.FirstChild("NoncurrentVersionTransition");
      while(!noncurrentVersionTransitionsMember.IsNull())
      {
        m_noncurrentVersionTransitions.push_back(noncurrentVersionTransitionsMember);
        noncurrentVersionTransitionsMember = noncurrentVersionTransitionsMember.NextNode("NoncurrentVersionTransition");
      }

      m_noncurrentVersionTransitionsHasBeenSet = true;
    }
    XmlNode noncurrentVersionExpirationNode = resultNode.FirstChild("NoncurrentVersionExpiration");
    if(!noncurrentVersionExpirationNode.IsNull())
    {
      m_noncurrentVersionExpiration = noncurrentVersionExpirationNode;
      m_noncurrentVersionExpirationHasBeenSet = true;
    }
    XmlNode abortIncompleteMultipartUploadNode = resultNode.FirstChild("AbortIncompleteMultipartUpload");
    if(!abortIncompleteMultipartUploadNode.IsNull())
    {
      m_abortIncompleteMultipartUpload = abortIncompleteMultipartUploadNode;
      m_abortIncompleteMultipartUploadHasBeenSet = true;
    }
  }

  return *this;
}

void LifecycleRule::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_expirationHasBeenSet)
  {
   XmlNode expirationNode = parentNode.CreateChildElement("Expiration");
   m_expiration.AddToNode(expirationNode);
  }

  if(m_iDHasBeenSet)
  {
   XmlNode iDNode = parentNode.CreateChildElement("ID");
   iDNode.SetText(m_iD);
  }

  if(m_filterHasBeenSet)
  {
   XmlNode filterNode = parentNode.CreateChildElement("Filter");
   m_filter.AddToNode(filterNode);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(ExpirationStatusMapper::GetNameForExpirationStatus(m_status));
  }

  if(m_transitionsHasBeenSet)
  {
   XmlNode transitionsParentNode = parentNode.CreateChildElement("Transitions");
   for(const auto& item : m_transitions)
   {
     XmlNode transitionsNode = transitionsParentNode.CreateChildElement("Transition");
     item.AddToNode(transitionsNode);
   }
  }

  if(m_noncurrentVersionTransitionsHasBeenSet)
  {
   XmlNode noncurrentVersionTransitionsParentNode = parentNode.CreateChildElement("NoncurrentVersionTransitions");
   for(const auto& item : m_noncurrentVersionTransitions)
   {
     XmlNode noncurrentVersionTransitionsNode = noncurrentVersionTransitionsParentNode.CreateChildElement("NoncurrentVersionTransition");
     item.AddToNode(noncurrentVersionTransitionsNode);
   }
  }

  if(m_noncurrentVersionExpirationHasBeenSet)
  {
   XmlNode noncurrentVersionExpirationNode = parentNode.CreateChildElement("NoncurrentVersionExpiration");
   m_noncurrentVersionExpiration.AddToNode(noncurrentVersionExpirationNode);
  }

  if(m_abortIncompleteMultipartUploadHasBeenSet)
  {
   XmlNode abortIncompleteMultipartUploadNode = parentNode.CreateChildElement("AbortIncompleteMultipartUpload");
   m_abortIncompleteMultipartUpload.AddToNode(abortIncompleteMultipartUploadNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
