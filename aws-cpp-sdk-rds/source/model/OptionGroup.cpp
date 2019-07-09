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

#include <aws/rds/model/OptionGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

OptionGroup::OptionGroup() : 
    m_optionGroupNameHasBeenSet(false),
    m_optionGroupDescriptionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_allowsVpcAndNonVpcInstanceMemberships(false),
    m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_optionGroupArnHasBeenSet(false)
{
}

OptionGroup::OptionGroup(const XmlNode& xmlNode) : 
    m_optionGroupNameHasBeenSet(false),
    m_optionGroupDescriptionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_allowsVpcAndNonVpcInstanceMemberships(false),
    m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_optionGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

OptionGroup& OptionGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionGroupNameNode = resultNode.FirstChild("OptionGroupName");
    if(!optionGroupNameNode.IsNull())
    {
      m_optionGroupName = optionGroupNameNode.GetText();
      m_optionGroupNameHasBeenSet = true;
    }
    XmlNode optionGroupDescriptionNode = resultNode.FirstChild("OptionGroupDescription");
    if(!optionGroupDescriptionNode.IsNull())
    {
      m_optionGroupDescription = optionGroupDescriptionNode.GetText();
      m_optionGroupDescriptionHasBeenSet = true;
    }
    XmlNode engineNameNode = resultNode.FirstChild("EngineName");
    if(!engineNameNode.IsNull())
    {
      m_engineName = engineNameNode.GetText();
      m_engineNameHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = majorEngineVersionNode.GetText();
      m_majorEngineVersionHasBeenSet = true;
    }
    XmlNode optionsNode = resultNode.FirstChild("Options");
    if(!optionsNode.IsNull())
    {
      XmlNode optionsMember = optionsNode.FirstChild("Option");
      while(!optionsMember.IsNull())
      {
        m_options.push_back(optionsMember);
        optionsMember = optionsMember.NextNode("Option");
      }

      m_optionsHasBeenSet = true;
    }
    XmlNode allowsVpcAndNonVpcInstanceMembershipsNode = resultNode.FirstChild("AllowsVpcAndNonVpcInstanceMemberships");
    if(!allowsVpcAndNonVpcInstanceMembershipsNode.IsNull())
    {
      m_allowsVpcAndNonVpcInstanceMemberships = StringUtils::ConvertToBool(StringUtils::Trim(allowsVpcAndNonVpcInstanceMembershipsNode.GetText().c_str()).c_str());
      m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode optionGroupArnNode = resultNode.FirstChild("OptionGroupArn");
    if(!optionGroupArnNode.IsNull())
    {
      m_optionGroupArn = optionGroupArnNode.GetText();
      m_optionGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void OptionGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_optionGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupDescription=" << StringUtils::URLEncode(m_optionGroupDescription.c_str()) << "&";
  }

  if(m_engineNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_optionsHasBeenSet)
  {
      unsigned optionsIdx = 1;
      for(auto& item : m_options)
      {
        Aws::StringStream optionsSs;
        optionsSs << location << index << locationValue << ".Option." << optionsIdx++;
        item.OutputToStream(oStream, optionsSs.str().c_str());
      }
  }

  if(m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowsVpcAndNonVpcInstanceMemberships=" << std::boolalpha << m_allowsVpcAndNonVpcInstanceMemberships << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_optionGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupArn=" << StringUtils::URLEncode(m_optionGroupArn.c_str()) << "&";
  }

}

void OptionGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }
  if(m_optionGroupDescriptionHasBeenSet)
  {
      oStream << location << ".OptionGroupDescription=" << StringUtils::URLEncode(m_optionGroupDescription.c_str()) << "&";
  }
  if(m_engineNameHasBeenSet)
  {
      oStream << location << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_optionsHasBeenSet)
  {
      unsigned optionsIdx = 1;
      for(auto& item : m_options)
      {
        Aws::StringStream optionsSs;
        optionsSs << location <<  ".Option." << optionsIdx++;
        item.OutputToStream(oStream, optionsSs.str().c_str());
      }
  }
  if(m_allowsVpcAndNonVpcInstanceMembershipsHasBeenSet)
  {
      oStream << location << ".AllowsVpcAndNonVpcInstanceMemberships=" << std::boolalpha << m_allowsVpcAndNonVpcInstanceMemberships << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_optionGroupArnHasBeenSet)
  {
      oStream << location << ".OptionGroupArn=" << StringUtils::URLEncode(m_optionGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
