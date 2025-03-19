/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DescribeTypeResult.h>
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

DescribeTypeResult::DescribeTypeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTypeResult& DescribeTypeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTypeResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTypeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RegistryTypeMapper::GetRegistryTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if(!typeNameNode.IsNull())
    {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
      m_typeNameHasBeenSet = true;
    }
    XmlNode defaultVersionIdNode = resultNode.FirstChild("DefaultVersionId");
    if(!defaultVersionIdNode.IsNull())
    {
      m_defaultVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(defaultVersionIdNode.GetText());
      m_defaultVersionIdHasBeenSet = true;
    }
    XmlNode isDefaultVersionNode = resultNode.FirstChild("IsDefaultVersion");
    if(!isDefaultVersionNode.IsNull())
    {
      m_isDefaultVersion = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultVersionNode.GetText()).c_str()).c_str());
      m_isDefaultVersionHasBeenSet = true;
    }
    XmlNode typeTestsStatusNode = resultNode.FirstChild("TypeTestsStatus");
    if(!typeTestsStatusNode.IsNull())
    {
      m_typeTestsStatus = TypeTestsStatusMapper::GetTypeTestsStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeTestsStatusNode.GetText()).c_str()));
      m_typeTestsStatusHasBeenSet = true;
    }
    XmlNode typeTestsStatusDescriptionNode = resultNode.FirstChild("TypeTestsStatusDescription");
    if(!typeTestsStatusDescriptionNode.IsNull())
    {
      m_typeTestsStatusDescription = Aws::Utils::Xml::DecodeEscapedXmlText(typeTestsStatusDescriptionNode.GetText());
      m_typeTestsStatusDescriptionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode schemaNode = resultNode.FirstChild("Schema");
    if(!schemaNode.IsNull())
    {
      m_schema = Aws::Utils::Xml::DecodeEscapedXmlText(schemaNode.GetText());
      m_schemaHasBeenSet = true;
    }
    XmlNode provisioningTypeNode = resultNode.FirstChild("ProvisioningType");
    if(!provisioningTypeNode.IsNull())
    {
      m_provisioningType = ProvisioningTypeMapper::GetProvisioningTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(provisioningTypeNode.GetText()).c_str()));
      m_provisioningTypeHasBeenSet = true;
    }
    XmlNode deprecatedStatusNode = resultNode.FirstChild("DeprecatedStatus");
    if(!deprecatedStatusNode.IsNull())
    {
      m_deprecatedStatus = DeprecatedStatusMapper::GetDeprecatedStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deprecatedStatusNode.GetText()).c_str()));
      m_deprecatedStatusHasBeenSet = true;
    }
    XmlNode loggingConfigNode = resultNode.FirstChild("LoggingConfig");
    if(!loggingConfigNode.IsNull())
    {
      m_loggingConfig = loggingConfigNode;
      m_loggingConfigHasBeenSet = true;
    }
    XmlNode requiredActivatedTypesNode = resultNode.FirstChild("RequiredActivatedTypes");
    if(!requiredActivatedTypesNode.IsNull())
    {
      XmlNode requiredActivatedTypesMember = requiredActivatedTypesNode.FirstChild("member");
      m_requiredActivatedTypesHasBeenSet = !requiredActivatedTypesMember.IsNull();
      while(!requiredActivatedTypesMember.IsNull())
      {
        m_requiredActivatedTypes.push_back(requiredActivatedTypesMember);
        requiredActivatedTypesMember = requiredActivatedTypesMember.NextNode("member");
      }

      m_requiredActivatedTypesHasBeenSet = true;
    }
    XmlNode executionRoleArnNode = resultNode.FirstChild("ExecutionRoleArn");
    if(!executionRoleArnNode.IsNull())
    {
      m_executionRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(executionRoleArnNode.GetText());
      m_executionRoleArnHasBeenSet = true;
    }
    XmlNode visibilityNode = resultNode.FirstChild("Visibility");
    if(!visibilityNode.IsNull())
    {
      m_visibility = VisibilityMapper::GetVisibilityForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(visibilityNode.GetText()).c_str()));
      m_visibilityHasBeenSet = true;
    }
    XmlNode sourceUrlNode = resultNode.FirstChild("SourceUrl");
    if(!sourceUrlNode.IsNull())
    {
      m_sourceUrl = Aws::Utils::Xml::DecodeEscapedXmlText(sourceUrlNode.GetText());
      m_sourceUrlHasBeenSet = true;
    }
    XmlNode documentationUrlNode = resultNode.FirstChild("DocumentationUrl");
    if(!documentationUrlNode.IsNull())
    {
      m_documentationUrl = Aws::Utils::Xml::DecodeEscapedXmlText(documentationUrlNode.GetText());
      m_documentationUrlHasBeenSet = true;
    }
    XmlNode lastUpdatedNode = resultNode.FirstChild("LastUpdated");
    if(!lastUpdatedNode.IsNull())
    {
      m_lastUpdated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedHasBeenSet = true;
    }
    XmlNode timeCreatedNode = resultNode.FirstChild("TimeCreated");
    if(!timeCreatedNode.IsNull())
    {
      m_timeCreated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeCreatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timeCreatedHasBeenSet = true;
    }
    XmlNode configurationSchemaNode = resultNode.FirstChild("ConfigurationSchema");
    if(!configurationSchemaNode.IsNull())
    {
      m_configurationSchema = Aws::Utils::Xml::DecodeEscapedXmlText(configurationSchemaNode.GetText());
      m_configurationSchemaHasBeenSet = true;
    }
    XmlNode publisherIdNode = resultNode.FirstChild("PublisherId");
    if(!publisherIdNode.IsNull())
    {
      m_publisherId = Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdNode.GetText());
      m_publisherIdHasBeenSet = true;
    }
    XmlNode originalTypeNameNode = resultNode.FirstChild("OriginalTypeName");
    if(!originalTypeNameNode.IsNull())
    {
      m_originalTypeName = Aws::Utils::Xml::DecodeEscapedXmlText(originalTypeNameNode.GetText());
      m_originalTypeNameHasBeenSet = true;
    }
    XmlNode originalTypeArnNode = resultNode.FirstChild("OriginalTypeArn");
    if(!originalTypeArnNode.IsNull())
    {
      m_originalTypeArn = Aws::Utils::Xml::DecodeEscapedXmlText(originalTypeArnNode.GetText());
      m_originalTypeArnHasBeenSet = true;
    }
    XmlNode publicVersionNumberNode = resultNode.FirstChild("PublicVersionNumber");
    if(!publicVersionNumberNode.IsNull())
    {
      m_publicVersionNumber = Aws::Utils::Xml::DecodeEscapedXmlText(publicVersionNumberNode.GetText());
      m_publicVersionNumberHasBeenSet = true;
    }
    XmlNode latestPublicVersionNode = resultNode.FirstChild("LatestPublicVersion");
    if(!latestPublicVersionNode.IsNull())
    {
      m_latestPublicVersion = Aws::Utils::Xml::DecodeEscapedXmlText(latestPublicVersionNode.GetText());
      m_latestPublicVersionHasBeenSet = true;
    }
    XmlNode isActivatedNode = resultNode.FirstChild("IsActivated");
    if(!isActivatedNode.IsNull())
    {
      m_isActivated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isActivatedNode.GetText()).c_str()).c_str());
      m_isActivatedHasBeenSet = true;
    }
    XmlNode autoUpdateNode = resultNode.FirstChild("AutoUpdate");
    if(!autoUpdateNode.IsNull())
    {
      m_autoUpdate = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoUpdateNode.GetText()).c_str()).c_str());
      m_autoUpdateHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeTypeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
