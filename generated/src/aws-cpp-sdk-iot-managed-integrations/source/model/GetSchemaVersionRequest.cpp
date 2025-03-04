/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetSchemaVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSchemaVersionRequest::GetSchemaVersionRequest() : 
    m_type(SchemaVersionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_schemaVersionedIdHasBeenSet(false),
    m_format(SchemaVersionFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

Aws::String GetSchemaVersionRequest::SerializePayload() const
{
  return {};
}

void GetSchemaVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_formatHasBeenSet)
    {
      ss << SchemaVersionFormatMapper::GetNameForSchemaVersionFormat(m_format);
      uri.AddQueryStringParameter("Format", ss.str());
      ss.str("");
    }

}



