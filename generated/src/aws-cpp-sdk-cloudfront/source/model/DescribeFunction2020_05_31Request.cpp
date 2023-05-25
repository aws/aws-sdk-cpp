/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DescribeFunction2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeFunction2020_05_31Request::DescribeFunction2020_05_31Request() : 
    m_nameHasBeenSet(false),
    m_stage(FunctionStage::NOT_SET),
    m_stageHasBeenSet(false)
{
}

Aws::String DescribeFunction2020_05_31Request::SerializePayload() const
{
  return {};
}

void DescribeFunction2020_05_31Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_stageHasBeenSet)
    {
      ss << FunctionStageMapper::GetNameForFunctionStage(m_stage);
      uri.AddQueryStringParameter("Stage", ss.str());
      ss.str("");
    }

}

