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

DescribeTypeResult::DescribeTypeResult() : 
    m_type(RegistryType::NOT_SET),
    m_isDefaultVersion(false),
    m_typeTestsStatus(TypeTestsStatus::NOT_SET),
    m_provisioningType(ProvisioningType::NOT_SET),
    m_deprecatedStatus(DeprecatedStatus::NOT_SET),
    m_visibility(Visibility::NOT_SET),
    m_isActivated(false),
    m_autoUpdate(false)
{
}

DescribeTypeResult::DescribeTypeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_type(RegistryType::NOT_SET),
    m_isDefaultVersion(false),
    m_typeTestsStatus(TypeTestsStatus::NOT_SET),
    m_provisioningType(ProvisioningType::NOT_SET),
    m_deprecatedStatus(DeprecatedStatus::NOT_SET),
    m_visibility(Visibility::NOT_SET),
    m_isActivated(false),
    m_autoUpdate(false)
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
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RegistryTypeMapper::GetRegistryTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if(!typeNameNode.IsNull())
    {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
    }
    XmlNode defaultVersionIdNode = resultNode.FirstChild("DefaultVersionId");
    if(!defaultVersionIdNode.IsNull())
    {
      m_defaultVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(defaultVersionIdNode.GetText());
    }
    XmlNode isDefaultVersionNode = resultNode.FirstChild("IsDefaultVersion");
    if(!isDefaultVersionNode.IsNull())
    {
      m_isDefaultVersion = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultVersionNode.GetText()).c_str()).c_str());
    }
    XmlNode typeTestsStatusNode = resultNode.FirstChild("TypeTestsStatus");
    if(!typeTestsStatusNode.IsNull())
    {
      m_typeTestsStatus = TypeTestsStatusMapper::GetTypeTestsStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeTestsStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode typeTestsStatusDescriptionNode = resultNode.FirstChild("TypeTestsStatusDescription");
    if(!typeTestsStatusDescriptionNode.IsNull())
    {
      m_typeTestsStatusDescription = Aws::Utils::Xml::DecodeEscapedXmlText(typeTestsStatusDescriptionNode.GetText());
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode schemaNode = resultNode.FirstChild("Schema");
    if(!schemaNode.IsNull())
    {
      m_schema = Aws::Utils::Xml::DecodeEscapedXmlText(schemaNode.GetText());
    }
    XmlNode provisioningTypeNode = resultNode.FirstChild("ProvisioningType");
    if(!provisioningTypeNode.IsNull())
    {
      m_provisioningType = ProvisioningTypeMapper::GetProvisioningTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(provisioningTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode deprecatedStatusNode = resultNode.FirstChild("DeprecatedStatus");
    if(!deprecatedStatusNode.IsNull())
    {
      m_deprecatedStatus = DeprecatedStatusMapper::GetDeprecatedStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deprecatedStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode loggingConfigNode = resultNode.FirstChild("LoggingConfig");
    if(!loggingConfigNode.IsNull())
    {
      m_loggingConfig = loggingConfigNode;
    }
    XmlNode requiredActivatedTypesNode = resultNode.FirstChild("RequiredActivatedTypes");
    if(!requiredActivatedTypesNode.IsNull())
    {
      XmlNode requiredActivatedTypesMember = requiredActivatedTypesNode.FirstChild("member");
      while(!requiredActivatedTypesMember.IsNull())
      {
        m_requiredActivatedTypes.push_back(requiredActivatedTypesMember);
        requiredActivatedTypesMember = requiredActivatedTypesMember.NextNode("member");
      }

    }
    XmlNode executionRoleArnNode = resultNode.FirstChild("ExecutionRoleArn");
    if(!executionRoleArnNode.IsNull())
    {
      m_executionRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(executionRoleArnNode.GetText());
    }
    XmlNode visibilityNode = resultNode.FirstChild("Visibility");
    if(!visibilityNode.IsNull())
    {
      m_visibility = VisibilityMapper::GetVisibilityForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(visibilityNode.GetText()).c_str()).c_str());
    }
    XmlNode sourceUrlNode = resultNode.FirstChild("SourceUrl");
    if(!sourceUrlNode.IsNull())
    {
      m_sourceUrl = Aws::Utils::Xml::DecodeEscapedXmlText(sourceUrlNode.GetText());
    }
    XmlNode documentationUrlNode = resultNode.FirstChild("DocumentationUrl");
    if(!documentationUrlNode.IsNull())
    {
      m_documentationUrl = Aws::Utils::Xml::DecodeEscapedXmlText(documentationUrlNode.GetText());
    }
    XmlNode lastUpdatedNode = resultNode.FirstChild("LastUpdated");
    if(!lastUpdatedNode.IsNull())
    {
      m_lastUpdated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode timeCreatedNode = resultNode.FirstChild("TimeCreated");
    if(!timeCreatedNode.IsNull())
    {
      m_timeCreated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeCreatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode configurationSchemaNode = resultNode.FirstChild("ConfigurationSchema");
    if(!configurationSchemaNode.IsNull())
    {
      m_configurationSchema = Aws::Utils::Xml::DecodeEscapedXmlText(configurationSchemaNode.GetText());
    }
    XmlNode publisherIdNode = resultNode.FirstChild("PublisherId");
    if(!publisherIdNode.IsNull())
    {
      m_publisherId = Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdNode.GetText());
    }
    XmlNode originalTypeNameNode = resultNode.FirstChild("OriginalTypeName");
    if(!originalTypeNameNode.IsNull())
    {
      m_originalTypeName = Aws::Utils::Xml::DecodeEscapedXmlText(originalTypeNameNode.GetText());
    }
    XmlNode originalTypeArnNode = resultNode.FirstChild("OriginalTypeArn");
    if(!originalTypeArnNode.IsNull())
    {
      m_originalTypeArn = Aws::Utils::Xml::DecodeEscapedXmlText(originalTypeArnNode.GetText());
    }
    XmlNode publicVersionNumberNode = resultNode.FirstChild("PublicVersionNumber");
    if(!publicVersionNumberNode.IsNull())
    {
      m_publicVersionNumber = Aws::Utils::Xml::DecodeEscapedXmlText(publicVersionNumberNode.GetText());
    }
    XmlNode latestPublicVersionNode = resultNode.FirstChild("LatestPublicVersion");
    if(!latestPublicVersionNode.IsNull())
    {
      m_latestPublicVersion = Aws::Utils::Xml::DecodeEscapedXmlText(latestPublicVersionNode.GetText());
    }
    XmlNode isActivatedNode = resultNode.FirstChild("IsActivated");
    if(!isActivatedNode.IsNull())
    {
      m_isActivated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isActivatedNode.GetText()).c_str()).c_str());
    }
    XmlNode autoUpdateNode = resultNode.FirstChild("AutoUpdate");
    if(!autoUpdateNode.IsNull())
    {
      m_autoUpdate = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoUpdateNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::DescribeTypeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
