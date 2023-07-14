/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/ExportSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ExportSchemaRequest::ExportSchemaRequest() : 
    m_registryNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Aws::String ExportSchemaRequest::SerializePayload() const
{
  return {};
}

void ExportSchemaRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_schemaVersionHasBeenSet)
    {
      ss << m_schemaVersion;
      uri.AddQueryStringParameter("schemaVersion", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << m_type;
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



