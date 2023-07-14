/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewaymanagementapi/model/PostToConnectionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ApiGatewayManagementApi::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

PostToConnectionRequest::PostToConnectionRequest() : 
    m_connectionIdHasBeenSet(false)
{
}



