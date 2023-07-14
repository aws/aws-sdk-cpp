/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ValidateTemplateResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ValidateTemplateResult::ValidateTemplateResult()
{
}

ValidateTemplateResult::ValidateTemplateResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ValidateTemplateResult& ValidateTemplateResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ValidateTemplateResult"))
  {
    resultNode = rootNode.FirstChild("ValidateTemplateResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode capabilitiesNode = resultNode.FirstChild("Capabilities");
    if(!capabilitiesNode.IsNull())
    {
      XmlNode capabilitiesMember = capabilitiesNode.FirstChild("member");
      while(!capabilitiesMember.IsNull())
      {
        m_capabilities.push_back(CapabilityMapper::GetCapabilityForName(StringUtils::Trim(capabilitiesMember.GetText().c_str())));
        capabilitiesMember = capabilitiesMember.NextNode("member");
      }

    }
    XmlNode capabilitiesReasonNode = resultNode.FirstChild("CapabilitiesReason");
    if(!capabilitiesReasonNode.IsNull())
    {
      m_capabilitiesReason = Aws::Utils::Xml::DecodeEscapedXmlText(capabilitiesReasonNode.GetText());
    }
    XmlNode declaredTransformsNode = resultNode.FirstChild("DeclaredTransforms");
    if(!declaredTransformsNode.IsNull())
    {
      XmlNode declaredTransformsMember = declaredTransformsNode.FirstChild("member");
      while(!declaredTransformsMember.IsNull())
      {
        m_declaredTransforms.push_back(declaredTransformsMember.GetText());
        declaredTransformsMember = declaredTransformsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::ValidateTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
