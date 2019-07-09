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

#include <aws/ec2/model/FpgaImageAttribute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

FpgaImageAttribute::FpgaImageAttribute() : 
    m_fpgaImageIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_loadPermissionsHasBeenSet(false),
    m_productCodesHasBeenSet(false)
{
}

FpgaImageAttribute::FpgaImageAttribute(const XmlNode& xmlNode) : 
    m_fpgaImageIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_loadPermissionsHasBeenSet(false),
    m_productCodesHasBeenSet(false)
{
  *this = xmlNode;
}

FpgaImageAttribute& FpgaImageAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fpgaImageIdNode = resultNode.FirstChild("fpgaImageId");
    if(!fpgaImageIdNode.IsNull())
    {
      m_fpgaImageId = fpgaImageIdNode.GetText();
      m_fpgaImageIdHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode loadPermissionsNode = resultNode.FirstChild("loadPermissions");
    if(!loadPermissionsNode.IsNull())
    {
      XmlNode loadPermissionsMember = loadPermissionsNode.FirstChild("item");
      while(!loadPermissionsMember.IsNull())
      {
        m_loadPermissions.push_back(loadPermissionsMember);
        loadPermissionsMember = loadPermissionsMember.NextNode("item");
      }

      m_loadPermissionsHasBeenSet = true;
    }
    XmlNode productCodesNode = resultNode.FirstChild("productCodes");
    if(!productCodesNode.IsNull())
    {
      XmlNode productCodesMember = productCodesNode.FirstChild("item");
      while(!productCodesMember.IsNull())
      {
        m_productCodes.push_back(productCodesMember);
        productCodesMember = productCodesMember.NextNode("item");
      }

      m_productCodesHasBeenSet = true;
    }
  }

  return *this;
}

void FpgaImageAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fpgaImageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FpgaImageId=" << StringUtils::URLEncode(m_fpgaImageId.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_loadPermissionsHasBeenSet)
  {
      unsigned loadPermissionsIdx = 1;
      for(auto& item : m_loadPermissions)
      {
        Aws::StringStream loadPermissionsSs;
        loadPermissionsSs << location << index << locationValue << ".LoadPermissions." << loadPermissionsIdx++;
        item.OutputToStream(oStream, loadPermissionsSs.str().c_str());
      }
  }

  if(m_productCodesHasBeenSet)
  {
      unsigned productCodesIdx = 1;
      for(auto& item : m_productCodes)
      {
        Aws::StringStream productCodesSs;
        productCodesSs << location << index << locationValue << ".ProductCodes." << productCodesIdx++;
        item.OutputToStream(oStream, productCodesSs.str().c_str());
      }
  }

}

void FpgaImageAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fpgaImageIdHasBeenSet)
  {
      oStream << location << ".FpgaImageId=" << StringUtils::URLEncode(m_fpgaImageId.c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_loadPermissionsHasBeenSet)
  {
      unsigned loadPermissionsIdx = 1;
      for(auto& item : m_loadPermissions)
      {
        Aws::StringStream loadPermissionsSs;
        loadPermissionsSs << location <<  ".LoadPermissions." << loadPermissionsIdx++;
        item.OutputToStream(oStream, loadPermissionsSs.str().c_str());
      }
  }
  if(m_productCodesHasBeenSet)
  {
      unsigned productCodesIdx = 1;
      for(auto& item : m_productCodes)
      {
        Aws::StringStream productCodesSs;
        productCodesSs << location <<  ".ProductCodes." << productCodesIdx++;
        item.OutputToStream(oStream, productCodesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
