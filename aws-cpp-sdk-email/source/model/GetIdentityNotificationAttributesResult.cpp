﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetIdentityNotificationAttributesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityNotificationAttributesResult::GetIdentityNotificationAttributesResult()
{
}

GetIdentityNotificationAttributesResult::GetIdentityNotificationAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIdentityNotificationAttributesResult& GetIdentityNotificationAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIdentityNotificationAttributesResult"))
  {
    resultNode = rootNode.FirstChild("GetIdentityNotificationAttributesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode notificationAttributesNode = resultNode.FirstChild("NotificationAttributes");

    if(!notificationAttributesNode.IsNull())
    {
      XmlNode notificationAttributesEntry = notificationAttributesNode.FirstChild("entry");
      while(!notificationAttributesEntry.IsNull())
      {
        XmlNode keyNode = notificationAttributesEntry.FirstChild("key");
        XmlNode valueNode = notificationAttributesEntry.FirstChild("value");
        m_notificationAttributes[keyNode.GetText()] =
            valueNode;
        notificationAttributesEntry = notificationAttributesEntry.NextNode("entry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::GetIdentityNotificationAttributesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
