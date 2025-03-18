/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/GetMFADeviceResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetMFADeviceResult::GetMFADeviceResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetMFADeviceResult& GetMFADeviceResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetMFADeviceResult"))
  {
    resultNode = rootNode.FirstChild("GetMFADeviceResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(!userNameNode.IsNull())
    {
      m_userName = Aws::Utils::Xml::DecodeEscapedXmlText(userNameNode.GetText());
      m_userNameHasBeenSet = true;
    }
    XmlNode serialNumberNode = resultNode.FirstChild("SerialNumber");
    if(!serialNumberNode.IsNull())
    {
      m_serialNumber = Aws::Utils::Xml::DecodeEscapedXmlText(serialNumberNode.GetText());
      m_serialNumberHasBeenSet = true;
    }
    XmlNode enableDateNode = resultNode.FirstChild("EnableDate");
    if(!enableDateNode.IsNull())
    {
      m_enableDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_enableDateHasBeenSet = true;
    }
    XmlNode certificationsNode = resultNode.FirstChild("Certifications");

    if(!certificationsNode.IsNull())
    {
      XmlNode certificationsEntry = certificationsNode.FirstChild("entry");
      m_certificationsHasBeenSet = !certificationsEntry.IsNull();
      while(!certificationsEntry.IsNull())
      {
        XmlNode keyNode = certificationsEntry.FirstChild("key");
        XmlNode valueNode = certificationsEntry.FirstChild("value");
        m_certifications[keyNode.GetText()] =
            valueNode.GetText();
        certificationsEntry = certificationsEntry.NextNode("entry");
      }

      m_certificationsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetMFADeviceResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
