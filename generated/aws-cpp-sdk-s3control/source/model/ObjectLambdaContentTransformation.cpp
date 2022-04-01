/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaContentTransformation.h>
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

ObjectLambdaContentTransformation::ObjectLambdaContentTransformation() : 
    m_awsLambdaHasBeenSet(false)
{
}

ObjectLambdaContentTransformation::ObjectLambdaContentTransformation(const XmlNode& xmlNode) : 
    m_awsLambdaHasBeenSet(false)
{
  *this = xmlNode;
}

ObjectLambdaContentTransformation& ObjectLambdaContentTransformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode awsLambdaNode = resultNode.FirstChild("AwsLambda");
    if(!awsLambdaNode.IsNull())
    {
      m_awsLambda = awsLambdaNode;
      m_awsLambdaHasBeenSet = true;
    }
  }

  return *this;
}

void ObjectLambdaContentTransformation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_awsLambdaHasBeenSet)
  {
   XmlNode awsLambdaNode = parentNode.CreateChildElement("AwsLambda");
   m_awsLambda.AddToNode(awsLambdaNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
