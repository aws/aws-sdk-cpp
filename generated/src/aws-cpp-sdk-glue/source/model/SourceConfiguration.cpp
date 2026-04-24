/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SourceConfiguration::SourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceConfiguration& SourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RequestMethod")) {
    m_requestMethod = HTTPMethodMapper::GetHTTPMethodForName(jsonValue.GetString("RequestMethod"));
    m_requestMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestPath")) {
    m_requestPath = jsonValue.GetString("RequestPath");
    m_requestPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestParameters")) {
    Aws::Utils::Array<JsonView> requestParametersJsonList = jsonValue.GetArray("RequestParameters");
    for (unsigned requestParametersIndex = 0; requestParametersIndex < requestParametersJsonList.GetLength(); ++requestParametersIndex) {
      m_requestParameters.push_back(requestParametersJsonList[requestParametersIndex].AsObject());
    }
    m_requestParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResponseConfiguration")) {
    m_responseConfiguration = jsonValue.GetObject("ResponseConfiguration");
    m_responseConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PaginationConfiguration")) {
    m_paginationConfiguration = jsonValue.GetObject("PaginationConfiguration");
    m_paginationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_requestMethodHasBeenSet) {
    payload.WithString("RequestMethod", HTTPMethodMapper::GetNameForHTTPMethod(m_requestMethod));
  }

  if (m_requestPathHasBeenSet) {
    payload.WithString("RequestPath", m_requestPath);
  }

  if (m_requestParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> requestParametersJsonList(m_requestParameters.size());
    for (unsigned requestParametersIndex = 0; requestParametersIndex < requestParametersJsonList.GetLength(); ++requestParametersIndex) {
      requestParametersJsonList[requestParametersIndex].AsObject(m_requestParameters[requestParametersIndex].Jsonize());
    }
    payload.WithArray("RequestParameters", std::move(requestParametersJsonList));
  }

  if (m_responseConfigurationHasBeenSet) {
    payload.WithObject("ResponseConfiguration", m_responseConfiguration.Jsonize());
  }

  if (m_paginationConfigurationHasBeenSet) {
    payload.WithObject("PaginationConfiguration", m_paginationConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
