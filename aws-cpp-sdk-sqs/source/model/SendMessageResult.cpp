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

#include <aws/sqs/model/SendMessageResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

SendMessageResult::SendMessageResult()
{
}

SendMessageResult::SendMessageResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

SendMessageResult& SendMessageResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "SendMessageResult"))
  {
    resultNode = rootNode.FirstChild("SendMessageResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode mD5OfMessageBodyNode = resultNode.FirstChild("MD5OfMessageBody");
    if(!mD5OfMessageBodyNode.IsNull())
    {
      m_mD5OfMessageBody = mD5OfMessageBodyNode.GetText();
    }
    XmlNode mD5OfMessageAttributesNode = resultNode.FirstChild("MD5OfMessageAttributes");
    if(!mD5OfMessageAttributesNode.IsNull())
    {
      m_mD5OfMessageAttributes = mD5OfMessageAttributesNode.GetText();
    }
    XmlNode messageIdNode = resultNode.FirstChild("MessageId");
    if(!messageIdNode.IsNull())
    {
      m_messageId = messageIdNode.GetText();
    }
    XmlNode sequenceNumberNode = resultNode.FirstChild("SequenceNumber");
    if(!sequenceNumberNode.IsNull())
    {
      m_sequenceNumber = sequenceNumberNode.GetText();
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SQS::Model::SendMessageResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
