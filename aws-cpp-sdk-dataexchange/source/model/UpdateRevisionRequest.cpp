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

#include <aws/dataexchange/model/UpdateRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRevisionRequest::UpdateRevisionRequest() : 
    m_commentHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_finalized(false),
    m_finalizedHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

Aws::String UpdateRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_finalizedHasBeenSet)
  {
   payload.WithBool("Finalized", m_finalized);

  }

  return payload.View().WriteReadable();
}




