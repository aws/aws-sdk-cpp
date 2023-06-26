/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FunctionMetadata.h>
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

FunctionMetadata::FunctionMetadata() : 
    m_functionARNHasBeenSet(false),
    m_stage(FunctionStage::NOT_SET),
    m_stageHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

FunctionMetadata::FunctionMetadata(const XmlNode& xmlNode) : 
    m_functionARNHasBeenSet(false),
    m_stage(FunctionStage::NOT_SET),
    m_stageHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = xmlNode;
}

FunctionMetadata& FunctionMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode functionARNNode = resultNode.FirstChild("FunctionARN");
    if(!functionARNNode.IsNull())
    {
      m_functionARN = Aws::Utils::Xml::DecodeEscapedXmlText(functionARNNode.GetText());
      m_functionARNHasBeenSet = true;
    }
    XmlNode stageNode = resultNode.FirstChild("Stage");
    if(!stageNode.IsNull())
    {
      m_stage = FunctionStageMapper::GetFunctionStageForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stageNode.GetText()).c_str()).c_str());
      m_stageHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedTimeHasBeenSet = true;
    }
  }

  return *this;
}

void FunctionMetadata::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_functionARNHasBeenSet)
  {
   XmlNode functionARNNode = parentNode.CreateChildElement("FunctionARN");
   functionARNNode.SetText(m_functionARN);
  }

  if(m_stageHasBeenSet)
  {
   XmlNode stageNode = parentNode.CreateChildElement("Stage");
   stageNode.SetText(FunctionStageMapper::GetNameForFunctionStage(m_stage));
  }

  if(m_createdTimeHasBeenSet)
  {
   XmlNode createdTimeNode = parentNode.CreateChildElement("CreatedTime");
   createdTimeNode.SetText(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   XmlNode lastModifiedTimeNode = parentNode.CreateChildElement("LastModifiedTime");
   lastModifiedTimeNode.SetText(m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
