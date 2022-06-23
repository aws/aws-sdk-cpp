/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3ReplicateObjectOperation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

S3ReplicateObjectOperation::S3ReplicateObjectOperation()
{
}

S3ReplicateObjectOperation::S3ReplicateObjectOperation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

S3ReplicateObjectOperation& S3ReplicateObjectOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
  }

  return *this;
}

void S3ReplicateObjectOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  AWS_UNREFERENCED_PARAM(parentNode);
}

} // namespace Model
} // namespace S3Control
} // namespace Aws
