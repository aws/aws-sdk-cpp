/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2020_05_31Result.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListFieldLevelEncryptionConfigs2020_05_31Result::ListFieldLevelEncryptionConfigs2020_05_31Result()
{
}

ListFieldLevelEncryptionConfigs2020_05_31Result::ListFieldLevelEncryptionConfigs2020_05_31Result(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListFieldLevelEncryptionConfigs2020_05_31Result& ListFieldLevelEncryptionConfigs2020_05_31Result::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    m_fieldLevelEncryptionList = resultNode;
  }

  return *this;
}
