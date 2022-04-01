/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DetectAnomaliesRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

DetectAnomaliesRequest::DetectAnomaliesRequest() : 
    m_projectNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}



