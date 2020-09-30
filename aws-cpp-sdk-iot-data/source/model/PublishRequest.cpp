/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/PublishRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

PublishRequest::PublishRequest() : 
    m_topicHasBeenSet(false),
    m_qos(0),
    m_qosHasBeenSet(false)
{
}


void PublishRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_qosHasBeenSet)
    {
      ss << m_qos;
      uri.AddQueryStringParameter("qos", ss.str());
      ss.str("");
    }

}

