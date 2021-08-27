/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetAnalyzerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAnalyzerRequest::GetAnalyzerRequest() : 
    m_analyzerNameHasBeenSet(false)
{
}

Aws::String GetAnalyzerRequest::SerializePayload() const
{
  return {};
}




