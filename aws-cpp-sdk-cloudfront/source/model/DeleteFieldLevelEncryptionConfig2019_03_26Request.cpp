/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DeleteFieldLevelEncryptionConfig2019_03_26Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DeleteFieldLevelEncryptionConfig2019_03_26Request::DeleteFieldLevelEncryptionConfig2019_03_26Request() : 
    m_idHasBeenSet(false),
    m_ifMatchHasBeenSet(false)
{
}

Aws::String DeleteFieldLevelEncryptionConfig2019_03_26Request::SerializePayload() const
{
  return {};
}


Aws::Http::HeaderValueCollection DeleteFieldLevelEncryptionConfig2019_03_26Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  return headers;
}
