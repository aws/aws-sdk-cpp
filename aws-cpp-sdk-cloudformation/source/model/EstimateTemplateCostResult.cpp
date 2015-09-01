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
#include <aws/cloudformation/model/EstimateTemplateCostResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

EstimateTemplateCostResult::EstimateTemplateCostResult()
{
}

EstimateTemplateCostResult::EstimateTemplateCostResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

EstimateTemplateCostResult& EstimateTemplateCostResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("EstimateTemplateCostResult");

  if(!resultNode.IsNull())
  {
    XmlNode urlNode = resultNode.FirstChild("Url");
    if(urlNode.IsNull())
    {
      urlNode = resultNode;
    }

    if(!urlNode.IsNull())
    {
      m_url = StringUtils::Trim(urlNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
