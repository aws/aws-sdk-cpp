﻿/*
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

#include <aws/s3/model/RestoreRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

RestoreRequest::RestoreRequest() : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_glacierJobParametersHasBeenSet(false),
    m_type(RestoreRequestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_selectParametersHasBeenSet(false),
    m_outputLocationHasBeenSet(false)
{
}

RestoreRequest::RestoreRequest(const XmlNode& xmlNode) : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_glacierJobParametersHasBeenSet(false),
    m_type(RestoreRequestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_selectParametersHasBeenSet(false),
    m_outputLocationHasBeenSet(false)
{
  *this = xmlNode;
}

RestoreRequest& RestoreRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode daysNode = resultNode.FirstChild("Days");
    if(!daysNode.IsNull())
    {
      m_days = StringUtils::ConvertToInt32(StringUtils::Trim(daysNode.GetText().c_str()).c_str());
      m_daysHasBeenSet = true;
    }
    XmlNode glacierJobParametersNode = resultNode.FirstChild("GlacierJobParameters");
    if(!glacierJobParametersNode.IsNull())
    {
      m_glacierJobParameters = glacierJobParametersNode;
      m_glacierJobParametersHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RestoreRequestTypeMapper::GetRestoreRequestTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode tierNode = resultNode.FirstChild("Tier");
    if(!tierNode.IsNull())
    {
      m_tier = TierMapper::GetTierForName(StringUtils::Trim(tierNode.GetText().c_str()).c_str());
      m_tierHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode selectParametersNode = resultNode.FirstChild("SelectParameters");
    if(!selectParametersNode.IsNull())
    {
      m_selectParameters = selectParametersNode;
      m_selectParametersHasBeenSet = true;
    }
    XmlNode outputLocationNode = resultNode.FirstChild("OutputLocation");
    if(!outputLocationNode.IsNull())
    {
      m_outputLocation = outputLocationNode;
      m_outputLocationHasBeenSet = true;
    }
  }

  return *this;
}

void RestoreRequest::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_daysHasBeenSet)
  {
   XmlNode daysNode = parentNode.CreateChildElement("Days");
   ss << m_days;
   daysNode.SetText(ss.str());
   ss.str("");
  }

  if(m_glacierJobParametersHasBeenSet)
  {
   XmlNode glacierJobParametersNode = parentNode.CreateChildElement("GlacierJobParameters");
   m_glacierJobParameters.AddToNode(glacierJobParametersNode);
  }

  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(RestoreRequestTypeMapper::GetNameForRestoreRequestType(m_type));
  }

  if(m_tierHasBeenSet)
  {
   XmlNode tierNode = parentNode.CreateChildElement("Tier");
   tierNode.SetText(TierMapper::GetNameForTier(m_tier));
  }

  if(m_descriptionHasBeenSet)
  {
   XmlNode descriptionNode = parentNode.CreateChildElement("Description");
   descriptionNode.SetText(m_description);
  }

  if(m_selectParametersHasBeenSet)
  {
   XmlNode selectParametersNode = parentNode.CreateChildElement("SelectParameters");
   m_selectParameters.AddToNode(selectParametersNode);
  }

  if(m_outputLocationHasBeenSet)
  {
   XmlNode outputLocationNode = parentNode.CreateChildElement("OutputLocation");
   m_outputLocation.AddToNode(outputLocationNode);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
