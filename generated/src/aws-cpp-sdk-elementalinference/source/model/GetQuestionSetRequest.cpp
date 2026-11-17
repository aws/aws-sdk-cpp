/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elementalinference/model/GetQuestionSetRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetQuestionSetRequest::SerializePayload() const { return {}; }

void GetQuestionSetRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_questionSetVersionHasBeenSet) {
    ss << m_questionSetVersion;
    uri.AddQueryStringParameter("questionSetVersion", ss.str());
    ss.str("");
  }
}
