/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/DeleteV2LoggingLevelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest() : 
    m_targetType(LogTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
}

Aws::String DeleteV2LoggingLevelRequest::SerializePayload() const
{
  return {};
}

void DeleteV2LoggingLevelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetTypeHasBeenSet)
    {
      ss << LogTargetTypeMapper::GetNameForLogTargetType(m_targetType);
      uri.AddQueryStringParameter("targetType", ss.str());
      ss.str("");
    }

    if(m_targetNameHasBeenSet)
    {
      ss << m_targetName;
      uri.AddQueryStringParameter("targetName", ss.str());
      ss.str("");
    }

}



