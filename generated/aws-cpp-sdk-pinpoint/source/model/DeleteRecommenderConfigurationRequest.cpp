/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DeleteRecommenderConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRecommenderConfigurationRequest::DeleteRecommenderConfigurationRequest() : 
    m_recommenderIdHasBeenSet(false)
{
}

Aws::String DeleteRecommenderConfigurationRequest::SerializePayload() const
{
  return {};
}




