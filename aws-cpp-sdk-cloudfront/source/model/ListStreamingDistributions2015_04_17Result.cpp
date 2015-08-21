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
#include <aws/cloudfront/model/ListStreamingDistributions2015_04_17Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListStreamingDistributions2015_04_17Result::ListStreamingDistributions2015_04_17Result()
{
}

ListStreamingDistributions2015_04_17Result::ListStreamingDistributions2015_04_17Result(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListStreamingDistributions2015_04_17Result& ListStreamingDistributions2015_04_17Result::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode streamingDistributionListNode = resultNode.FirstChild("StreamingDistributionList");
    if(!streamingDistributionListNode.IsNull())
    {
      m_streamingDistributionList = streamingDistributionListNode;
    }
  }

  return *this;
}
