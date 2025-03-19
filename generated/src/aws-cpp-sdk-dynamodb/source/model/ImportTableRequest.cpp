/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ImportTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_s3BucketSourceHasBeenSet)
  {
   payload.WithObject("S3BucketSource", m_s3BucketSource.Jsonize());

  }

  if(m_inputFormatHasBeenSet)
  {
   payload.WithString("InputFormat", InputFormatMapper::GetNameForInputFormat(m_inputFormat));
  }

  if(m_inputFormatOptionsHasBeenSet)
  {
   payload.WithObject("InputFormatOptions", m_inputFormatOptions.Jsonize());

  }

  if(m_inputCompressionTypeHasBeenSet)
  {
   payload.WithString("InputCompressionType", InputCompressionTypeMapper::GetNameForInputCompressionType(m_inputCompressionType));
  }

  if(m_tableCreationParametersHasBeenSet)
  {
   payload.WithObject("TableCreationParameters", m_tableCreationParameters.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ImportTable"));
  return headers;

}



ImportTableRequest::EndpointParameters ImportTableRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    //operation context params go here
    parameters.emplace_back(Aws::String{"ResourceArn"}, this->GetOperationContextParams(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    return parameters;
}
//Accessor for dynamic context endpoint params
Aws::Vector<Aws::String> ImportTableRequest::GetOperationContextParams() const{
  Aws::Vector<Aws::String> result;
  auto& TableCreationParametersElems = (*this).GetTableCreationParameters().GetTableName();
  result.emplace_back(TableCreationParametersElems);
  return result;
}


