/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/HttpRequestWithLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

HttpRequestWithLabelsRequest::HttpRequestWithLabelsRequest() : 
    m_stringHasBeenSet(false),
    m_short(0),
    m_shortHasBeenSet(false),
    m_integer(0),
    m_integerHasBeenSet(false),
    m_long(0),
    m_longHasBeenSet(false),
    m_float(0.0),
    m_floatHasBeenSet(false),
    m_double(0.0),
    m_doubleHasBeenSet(false),
    m_boolean(false),
    m_booleanHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

Aws::String HttpRequestWithLabelsRequest::SerializePayload() const
{
  return {};
}




