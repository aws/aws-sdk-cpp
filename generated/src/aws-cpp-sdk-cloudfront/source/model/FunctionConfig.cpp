/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/FunctionConfig.h>
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

FunctionConfig::FunctionConfig() : 
    m_commentHasBeenSet(false),
    m_runtime(FunctionRuntime::NOT_SET),
    m_runtimeHasBeenSet(false),
    m_keyValueStoreAssociationsHasBeenSet(false)
{
}

FunctionConfig::FunctionConfig(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_runtime(FunctionRuntime::NOT_SET),
    m_runtimeHasBeenSet(false),
    m_keyValueStoreAssociationsHasBeenSet(false)
{
  *this = xmlNode;
}

FunctionConfig& FunctionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode runtimeNode = resultNode.FirstChild("Runtime");
    if(!runtimeNode.IsNull())
    {
      m_runtime = FunctionRuntimeMapper::GetFunctionRuntimeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(runtimeNode.GetText()).c_str()).c_str());
      m_runtimeHasBeenSet = true;
    }
    XmlNode keyValueStoreAssociationsNode = resultNode.FirstChild("KeyValueStoreAssociations");
    if(!keyValueStoreAssociationsNode.IsNull())
    {
      m_keyValueStoreAssociations = keyValueStoreAssociationsNode;
      m_keyValueStoreAssociationsHasBeenSet = true;
    }
  }

  return *this;
}

void FunctionConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_runtimeHasBeenSet)
  {
   XmlNode runtimeNode = parentNode.CreateChildElement("Runtime");
   runtimeNode.SetText(FunctionRuntimeMapper::GetNameForFunctionRuntime(m_runtime));
  }

  if(m_keyValueStoreAssociationsHasBeenSet)
  {
   XmlNode keyValueStoreAssociationsNode = parentNode.CreateChildElement("KeyValueStoreAssociations");
   m_keyValueStoreAssociations.AddToNode(keyValueStoreAssociationsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
