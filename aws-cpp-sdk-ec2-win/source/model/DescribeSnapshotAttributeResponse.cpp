/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSnapshotAttributeResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeSnapshotAttributeResponse::DescribeSnapshotAttributeResponse()
{
}

DescribeSnapshotAttributeResponse::DescribeSnapshotAttributeResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeSnapshotAttributeResponse& DescribeSnapshotAttributeResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSnapshotAttributeResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeSnapshotAttributeResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode createVolumePermissionsNode = resultNode.FirstChild("createVolumePermission");
    if(!createVolumePermissionsNode.IsNull())
    {
      XmlNode createVolumePermissionsMember = createVolumePermissionsNode.FirstChild("item");
      while(!createVolumePermissionsMember.IsNull())
      {
        m_createVolumePermissions.push_back(createVolumePermissionsMember);
        createVolumePermissionsMember = createVolumePermissionsMember.NextNode("item");
      }

    }
    XmlNode productCodesNode = resultNode.FirstChild("productCodes");
    if(!productCodesNode.IsNull())
    {
      XmlNode productCodesMember = productCodesNode.FirstChild("item");
      while(!productCodesMember.IsNull())
      {
        m_productCodes.push_back(productCodesMember);
        productCodesMember = productCodesMember.NextNode("item");
      }

    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeSnapshotAttributeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
