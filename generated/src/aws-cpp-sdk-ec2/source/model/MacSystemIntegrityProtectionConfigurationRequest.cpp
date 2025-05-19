/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MacSystemIntegrityProtectionConfigurationRequest.h>
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

MacSystemIntegrityProtectionConfigurationRequest::MacSystemIntegrityProtectionConfigurationRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MacSystemIntegrityProtectionConfigurationRequest& MacSystemIntegrityProtectionConfigurationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode appleInternalNode = resultNode.FirstChild("AppleInternal");
    if(!appleInternalNode.IsNull())
    {
      m_appleInternal = MacSystemIntegrityProtectionSettingStatusMapper::GetMacSystemIntegrityProtectionSettingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(appleInternalNode.GetText()).c_str()));
      m_appleInternalHasBeenSet = true;
    }
    XmlNode baseSystemNode = resultNode.FirstChild("BaseSystem");
    if(!baseSystemNode.IsNull())
    {
      m_baseSystem = MacSystemIntegrityProtectionSettingStatusMapper::GetMacSystemIntegrityProtectionSettingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(baseSystemNode.GetText()).c_str()));
      m_baseSystemHasBeenSet = true;
    }
    XmlNode debuggingRestrictionsNode = resultNode.FirstChild("DebuggingRestrictions");
    if(!debuggingRestrictionsNode.IsNull())
    {
      m_debuggingRestrictions = MacSystemIntegrityProtectionSettingStatusMapper::GetMacSystemIntegrityProtectionSettingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(debuggingRestrictionsNode.GetText()).c_str()));
      m_debuggingRestrictionsHasBeenSet = true;
    }
    XmlNode dTraceRestrictionsNode = resultNode.FirstChild("DTraceRestrictions");
    if(!dTraceRestrictionsNode.IsNull())
    {
      m_dTraceRestrictions = MacSystemIntegrityProtectionSettingStatusMapper::GetMacSystemIntegrityProtectionSettingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dTraceRestrictionsNode.GetText()).c_str()));
      m_dTraceRestrictionsHasBeenSet = true;
    }
    XmlNode filesystemProtectionsNode = resultNode.FirstChild("FilesystemProtections");
    if(!filesystemProtectionsNode.IsNull())
    {
      m_filesystemProtections = MacSystemIntegrityProtectionSettingStatusMapper::GetMacSystemIntegrityProtectionSettingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(filesystemProtectionsNode.GetText()).c_str()));
      m_filesystemProtectionsHasBeenSet = true;
    }
    XmlNode kextSigningNode = resultNode.FirstChild("KextSigning");
    if(!kextSigningNode.IsNull())
    {
      m_kextSigning = MacSystemIntegrityProtectionSettingStatusMapper::GetMacSystemIntegrityProtectionSettingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(kextSigningNode.GetText()).c_str()));
      m_kextSigningHasBeenSet = true;
    }
    XmlNode nvramProtectionsNode = resultNode.FirstChild("NvramProtections");
    if(!nvramProtectionsNode.IsNull())
    {
      m_nvramProtections = MacSystemIntegrityProtectionSettingStatusMapper::GetMacSystemIntegrityProtectionSettingStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nvramProtectionsNode.GetText()).c_str()));
      m_nvramProtectionsHasBeenSet = true;
    }
  }

  return *this;
}

void MacSystemIntegrityProtectionConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_appleInternalHasBeenSet)
  {
      oStream << location << index << locationValue << ".AppleInternal=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_appleInternal)) << "&";
  }

  if(m_baseSystemHasBeenSet)
  {
      oStream << location << index << locationValue << ".BaseSystem=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_baseSystem)) << "&";
  }

  if(m_debuggingRestrictionsHasBeenSet)
  {
      oStream << location << index << locationValue << ".DebuggingRestrictions=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_debuggingRestrictions)) << "&";
  }

  if(m_dTraceRestrictionsHasBeenSet)
  {
      oStream << location << index << locationValue << ".DTraceRestrictions=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_dTraceRestrictions)) << "&";
  }

  if(m_filesystemProtectionsHasBeenSet)
  {
      oStream << location << index << locationValue << ".FilesystemProtections=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_filesystemProtections)) << "&";
  }

  if(m_kextSigningHasBeenSet)
  {
      oStream << location << index << locationValue << ".KextSigning=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_kextSigning)) << "&";
  }

  if(m_nvramProtectionsHasBeenSet)
  {
      oStream << location << index << locationValue << ".NvramProtections=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_nvramProtections)) << "&";
  }

}

void MacSystemIntegrityProtectionConfigurationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_appleInternalHasBeenSet)
  {
      oStream << location << ".AppleInternal=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_appleInternal)) << "&";
  }
  if(m_baseSystemHasBeenSet)
  {
      oStream << location << ".BaseSystem=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_baseSystem)) << "&";
  }
  if(m_debuggingRestrictionsHasBeenSet)
  {
      oStream << location << ".DebuggingRestrictions=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_debuggingRestrictions)) << "&";
  }
  if(m_dTraceRestrictionsHasBeenSet)
  {
      oStream << location << ".DTraceRestrictions=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_dTraceRestrictions)) << "&";
  }
  if(m_filesystemProtectionsHasBeenSet)
  {
      oStream << location << ".FilesystemProtections=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_filesystemProtections)) << "&";
  }
  if(m_kextSigningHasBeenSet)
  {
      oStream << location << ".KextSigning=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_kextSigning)) << "&";
  }
  if(m_nvramProtectionsHasBeenSet)
  {
      oStream << location << ".NvramProtections=" << StringUtils::URLEncode(MacSystemIntegrityProtectionSettingStatusMapper::GetNameForMacSystemIntegrityProtectionSettingStatus(m_nvramProtections)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
