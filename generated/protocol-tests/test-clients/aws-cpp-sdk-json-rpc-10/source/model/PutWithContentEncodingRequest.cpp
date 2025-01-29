﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-rpc-10/model/PutWithContentEncodingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutWithContentEncodingRequest::PutWithContentEncodingRequest() : 
    m_encodingHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

Aws::String PutWithContentEncodingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_encodingHasBeenSet)
  {
   payload.WithString("encoding", m_encoding);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", m_data);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutWithContentEncodingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.PutWithContentEncoding"));
  return headers;

}



#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
Aws::Client::CompressionAlgorithm PutWithContentEncodingRequest::GetSelectedCompressionAlgorithm(Aws::Client::RequestCompressionConfig config) const
{
    if (config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE)
    {
        return Aws::Client::CompressionAlgorithm::NONE;
    }

    const auto& body = AmazonSerializableWebServiceRequest::GetBody();
    body->seekg(0, body->end);
    size_t bodySize = body->tellg();
    body->seekg(0, body->beg);
    if ( bodySize < config.requestMinCompressionSizeBytes)
    {
        return Aws::Client::CompressionAlgorithm::NONE;
    }
    else
    {
        return Aws::Client::CompressionAlgorithm::GZIP;
    }
}
#endif



