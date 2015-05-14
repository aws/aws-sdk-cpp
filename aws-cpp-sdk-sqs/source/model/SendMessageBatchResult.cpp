/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sqs/model/SendMessageBatchResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

SendMessageBatchResult::SendMessageBatchResult()
{
}

SendMessageBatchResult::SendMessageBatchResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

SendMessageBatchResult& SendMessageBatchResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("SendMessageBatchResult");

  if(!resultNode.IsNull())
  {
    XmlNode sendMessageBatchResultEntryNode = resultNode.FirstChild("SendMessageBatchResultEntry");
    while(!sendMessageBatchResultEntryNode.IsNull())
    {
      m_successful.push_back(sendMessageBatchResultEntryNode);
      sendMessageBatchResultEntryNode = sendMessageBatchResultEntryNode.NextNode("SendMessageBatchResultEntry");
    }

    XmlNode batchResultErrorEntryNode = resultNode.FirstChild("BatchResultErrorEntry");
    while(!batchResultErrorEntryNode.IsNull())
    {
      m_failed.push_back(batchResultErrorEntryNode);
      batchResultErrorEntryNode = batchResultErrorEntryNode.NextNode("BatchResultErrorEntry");
    }

  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
