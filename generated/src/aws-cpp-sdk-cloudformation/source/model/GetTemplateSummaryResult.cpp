/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetTemplateSummaryResult.h>
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

GetTemplateSummaryResult::GetTemplateSummaryResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTemplateSummaryResult& GetTemplateSummaryResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetTemplateSummaryResult"))
  {
    resultNode = rootNode.FirstChild("GetTemplateSummaryResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      m_parametersHasBeenSet = !parametersMember.IsNull();
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

      m_parametersHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode capabilitiesNode = resultNode.FirstChild("Capabilities");
    if(!capabilitiesNode.IsNull())
    {
      XmlNode capabilitiesMember = capabilitiesNode.FirstChild("member");
      m_capabilitiesHasBeenSet = !capabilitiesMember.IsNull();
      while(!capabilitiesMember.IsNull())
      {
        m_capabilities.push_back(CapabilityMapper::GetCapabilityForName(StringUtils::Trim(capabilitiesMember.GetText().c_str())));
        capabilitiesMember = capabilitiesMember.NextNode("member");
      }

      m_capabilitiesHasBeenSet = true;
    }
    XmlNode capabilitiesReasonNode = resultNode.FirstChild("CapabilitiesReason");
    if(!capabilitiesReasonNode.IsNull())
    {
      m_capabilitiesReason = Aws::Utils::Xml::DecodeEscapedXmlText(capabilitiesReasonNode.GetText());
      m_capabilitiesReasonHasBeenSet = true;
    }
    XmlNode resourceTypesNode = resultNode.FirstChild("ResourceTypes");
    if(!resourceTypesNode.IsNull())
    {
      XmlNode resourceTypesMember = resourceTypesNode.FirstChild("member");
      m_resourceTypesHasBeenSet = !resourceTypesMember.IsNull();
      while(!resourceTypesMember.IsNull())
      {
        m_resourceTypes.push_back(resourceTypesMember.GetText());
        resourceTypesMember = resourceTypesMember.NextNode("member");
      }

      m_resourceTypesHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText());
      m_versionHasBeenSet = true;
    }
    XmlNode metadataNode = resultNode.FirstChild("Metadata");
    if(!metadataNode.IsNull())
    {
      m_metadata = Aws::Utils::Xml::DecodeEscapedXmlText(metadataNode.GetText());
      m_metadataHasBeenSet = true;
    }
    XmlNode declaredTransformsNode = resultNode.FirstChild("DeclaredTransforms");
    if(!declaredTransformsNode.IsNull())
    {
      XmlNode declaredTransformsMember = declaredTransformsNode.FirstChild("member");
      m_declaredTransformsHasBeenSet = !declaredTransformsMember.IsNull();
      while(!declaredTransformsMember.IsNull())
      {
        m_declaredTransforms.push_back(declaredTransformsMember.GetText());
        declaredTransformsMember = declaredTransformsMember.NextNode("member");
      }

      m_declaredTransformsHasBeenSet = true;
    }
    XmlNode resourceIdentifierSummariesNode = resultNode.FirstChild("ResourceIdentifierSummaries");
    if(!resourceIdentifierSummariesNode.IsNull())
    {
      XmlNode resourceIdentifierSummariesMember = resourceIdentifierSummariesNode.FirstChild("member");
      m_resourceIdentifierSummariesHasBeenSet = !resourceIdentifierSummariesMember.IsNull();
      while(!resourceIdentifierSummariesMember.IsNull())
      {
        m_resourceIdentifierSummaries.push_back(resourceIdentifierSummariesMember);
        resourceIdentifierSummariesMember = resourceIdentifierSummariesMember.NextNode("member");
      }

      m_resourceIdentifierSummariesHasBeenSet = true;
    }
    XmlNode warningsNode = resultNode.FirstChild("Warnings");
    if(!warningsNode.IsNull())
    {
      m_warnings = warningsNode;
      m_warningsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::GetTemplateSummaryResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
