/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportImageTask.h>
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

ImportImageTask::ImportImageTask() : 
    m_architectureHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_hypervisorHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_importTaskIdHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_snapshotDetailsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_licenseSpecificationsHasBeenSet(false)
{
}

ImportImageTask::ImportImageTask(const XmlNode& xmlNode) : 
    m_architectureHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_hypervisorHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_importTaskIdHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_snapshotDetailsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_licenseSpecificationsHasBeenSet(false)
{
  *this = xmlNode;
}

ImportImageTask& ImportImageTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = Aws::Utils::Xml::DecodeEscapedXmlText(architectureNode.GetText());
      m_architectureHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = Aws::Utils::Xml::DecodeEscapedXmlText(hypervisorNode.GetText());
      m_hypervisorHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(importTaskIdNode.GetText());
      m_importTaskIdHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode licenseTypeNode = resultNode.FirstChild("licenseType");
    if(!licenseTypeNode.IsNull())
    {
      m_licenseType = Aws::Utils::Xml::DecodeEscapedXmlText(licenseTypeNode.GetText());
      m_licenseTypeHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = Aws::Utils::Xml::DecodeEscapedXmlText(platformNode.GetText());
      m_platformHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText());
      m_progressHasBeenSet = true;
    }
    XmlNode snapshotDetailsNode = resultNode.FirstChild("snapshotDetailSet");
    if(!snapshotDetailsNode.IsNull())
    {
      XmlNode snapshotDetailsMember = snapshotDetailsNode.FirstChild("item");
      while(!snapshotDetailsMember.IsNull())
      {
        m_snapshotDetails.push_back(snapshotDetailsMember);
        snapshotDetailsMember = snapshotDetailsMember.NextNode("item");
      }

      m_snapshotDetailsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode licenseSpecificationsNode = resultNode.FirstChild("licenseSpecifications");
    if(!licenseSpecificationsNode.IsNull())
    {
      XmlNode licenseSpecificationsMember = licenseSpecificationsNode.FirstChild("item");
      while(!licenseSpecificationsMember.IsNull())
      {
        m_licenseSpecifications.push_back(licenseSpecificationsMember);
        licenseSpecificationsMember = licenseSpecificationsMember.NextNode("item");
      }

      m_licenseSpecificationsHasBeenSet = true;
    }
  }

  return *this;
}

void ImportImageTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_architectureHasBeenSet)
  {
      oStream << location << index << locationValue << ".Architecture=" << StringUtils::URLEncode(m_architecture.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_hypervisorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Hypervisor=" << StringUtils::URLEncode(m_hypervisor.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_importTaskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImportTaskId=" << StringUtils::URLEncode(m_importTaskId.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_licenseTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseType=" << StringUtils::URLEncode(m_licenseType.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }

  if(m_snapshotDetailsHasBeenSet)
  {
      unsigned snapshotDetailsIdx = 1;
      for(auto& item : m_snapshotDetails)
      {
        Aws::StringStream snapshotDetailsSs;
        snapshotDetailsSs << location << index << locationValue << ".SnapshotDetailSet." << snapshotDetailsIdx++;
        item.OutputToStream(oStream, snapshotDetailsSs.str().c_str());
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_licenseSpecificationsHasBeenSet)
  {
      unsigned licenseSpecificationsIdx = 1;
      for(auto& item : m_licenseSpecifications)
      {
        Aws::StringStream licenseSpecificationsSs;
        licenseSpecificationsSs << location << index << locationValue << ".LicenseSpecifications." << licenseSpecificationsIdx++;
        item.OutputToStream(oStream, licenseSpecificationsSs.str().c_str());
      }
  }

}

void ImportImageTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_architectureHasBeenSet)
  {
      oStream << location << ".Architecture=" << StringUtils::URLEncode(m_architecture.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if(m_hypervisorHasBeenSet)
  {
      oStream << location << ".Hypervisor=" << StringUtils::URLEncode(m_hypervisor.c_str()) << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_importTaskIdHasBeenSet)
  {
      oStream << location << ".ImportTaskId=" << StringUtils::URLEncode(m_importTaskId.c_str()) << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_licenseTypeHasBeenSet)
  {
      oStream << location << ".LicenseType=" << StringUtils::URLEncode(m_licenseType.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }
  if(m_snapshotDetailsHasBeenSet)
  {
      unsigned snapshotDetailsIdx = 1;
      for(auto& item : m_snapshotDetails)
      {
        Aws::StringStream snapshotDetailsSs;
        snapshotDetailsSs << location <<  ".SnapshotDetailSet." << snapshotDetailsIdx++;
        item.OutputToStream(oStream, snapshotDetailsSs.str().c_str());
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_licenseSpecificationsHasBeenSet)
  {
      unsigned licenseSpecificationsIdx = 1;
      for(auto& item : m_licenseSpecifications)
      {
        Aws::StringStream licenseSpecificationsSs;
        licenseSpecificationsSs << location <<  ".LicenseSpecifications." << licenseSpecificationsIdx++;
        item.OutputToStream(oStream, licenseSpecificationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
