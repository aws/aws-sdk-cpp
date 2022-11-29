/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeTemplateDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeTemplateDefinitionRequest::DescribeTemplateDefinitionRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_aliasNameHasBeenSet(false)
{
}

Aws::String DescribeTemplateDefinitionRequest::SerializePayload() const
{
  return {};
}

void DescribeTemplateDefinitionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionNumberHasBeenSet)
    {
      ss << m_versionNumber;
      uri.AddQueryStringParameter("version-number", ss.str());
      ss.str("");
    }

    if(m_aliasNameHasBeenSet)
    {
      ss << m_aliasName;
      uri.AddQueryStringParameter("alias-name", ss.str());
      ss.str("");
    }

}



