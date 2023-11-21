/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector-scan/model/ScanSbomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::inspectorscan::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ScanSbomRequest::ScanSbomRequest() : 
    m_sbomHasBeenSet(false),
    m_outputFormat(OutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false)
{
}

Aws::String ScanSbomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sbomHasBeenSet)
  {
    if(!m_sbom.View().IsNull())
    {
       payload.WithObject("sbom", JsonValue(m_sbom.View()));
    }
  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("outputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  return payload.View().WriteReadable();
}




