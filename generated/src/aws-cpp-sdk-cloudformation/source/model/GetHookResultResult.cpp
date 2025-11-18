/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetHookResultResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetHookResultResult::GetHookResultResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetHookResultResult& GetHookResultResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetHookResultResult")) {
    resultNode = rootNode.FirstChild("GetHookResultResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode hookResultIdNode = resultNode.FirstChild("HookResultId");
    if (!hookResultIdNode.IsNull()) {
      m_hookResultId = Aws::Utils::Xml::DecodeEscapedXmlText(hookResultIdNode.GetText());
      m_hookResultIdHasBeenSet = true;
    }
    XmlNode invocationPointNode = resultNode.FirstChild("InvocationPoint");
    if (!invocationPointNode.IsNull()) {
      m_invocationPoint = HookInvocationPointMapper::GetHookInvocationPointForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(invocationPointNode.GetText()).c_str()));
      m_invocationPointHasBeenSet = true;
    }
    XmlNode failureModeNode = resultNode.FirstChild("FailureMode");
    if (!failureModeNode.IsNull()) {
      m_failureMode = HookFailureModeMapper::GetHookFailureModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(failureModeNode.GetText()).c_str()));
      m_failureModeHasBeenSet = true;
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if (!typeNameNode.IsNull()) {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
      m_typeNameHasBeenSet = true;
    }
    XmlNode originalTypeNameNode = resultNode.FirstChild("OriginalTypeName");
    if (!originalTypeNameNode.IsNull()) {
      m_originalTypeName = Aws::Utils::Xml::DecodeEscapedXmlText(originalTypeNameNode.GetText());
      m_originalTypeNameHasBeenSet = true;
    }
    XmlNode typeVersionIdNode = resultNode.FirstChild("TypeVersionId");
    if (!typeVersionIdNode.IsNull()) {
      m_typeVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(typeVersionIdNode.GetText());
      m_typeVersionIdHasBeenSet = true;
    }
    XmlNode typeConfigurationVersionIdNode = resultNode.FirstChild("TypeConfigurationVersionId");
    if (!typeConfigurationVersionIdNode.IsNull()) {
      m_typeConfigurationVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(typeConfigurationVersionIdNode.GetText());
      m_typeConfigurationVersionIdHasBeenSet = true;
    }
    XmlNode typeArnNode = resultNode.FirstChild("TypeArn");
    if (!typeArnNode.IsNull()) {
      m_typeArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeArnNode.GetText());
      m_typeArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status =
          HookStatusMapper::GetHookStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode hookStatusReasonNode = resultNode.FirstChild("HookStatusReason");
    if (!hookStatusReasonNode.IsNull()) {
      m_hookStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(hookStatusReasonNode.GetText());
      m_hookStatusReasonHasBeenSet = true;
    }
    XmlNode invokedAtNode = resultNode.FirstChild("InvokedAt");
    if (!invokedAtNode.IsNull()) {
      m_invokedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(invokedAtNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_invokedAtHasBeenSet = true;
    }
    XmlNode targetNode = resultNode.FirstChild("Target");
    if (!targetNode.IsNull()) {
      m_target = targetNode;
      m_targetHasBeenSet = true;
    }
    XmlNode annotationsNode = resultNode.FirstChild("Annotations");
    if (!annotationsNode.IsNull()) {
      XmlNode annotationsMember = annotationsNode.FirstChild("member");
      m_annotationsHasBeenSet = !annotationsMember.IsNull();
      while (!annotationsMember.IsNull()) {
        m_annotations.push_back(annotationsMember);
        annotationsMember = annotationsMember.NextNode("member");
      }

      m_annotationsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::GetHookResultResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
