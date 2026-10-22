/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/EnvironmentSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

EnvironmentSourceConfiguration::EnvironmentSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

EnvironmentSourceConfiguration& EnvironmentSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Sources")) {
    Aws::Utils::Array<JsonView> s3SourcesJsonList = jsonValue.GetArray("s3Sources");
    for (unsigned s3SourcesIndex = 0; s3SourcesIndex < s3SourcesJsonList.GetLength(); ++s3SourcesIndex) {
      m_s3Sources.push_back(s3SourcesJsonList[s3SourcesIndex].AsObject());
    }
    m_s3SourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositorySources")) {
    Aws::Utils::Array<JsonView> repositorySourcesJsonList = jsonValue.GetArray("repositorySources");
    for (unsigned repositorySourcesIndex = 0; repositorySourcesIndex < repositorySourcesJsonList.GetLength(); ++repositorySourcesIndex) {
      m_repositorySources.push_back(repositorySourcesJsonList[repositorySourcesIndex].AsObject());
    }
    m_repositorySourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3SourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> s3SourcesJsonList(m_s3Sources.size());
    for (unsigned s3SourcesIndex = 0; s3SourcesIndex < s3SourcesJsonList.GetLength(); ++s3SourcesIndex) {
      s3SourcesJsonList[s3SourcesIndex].AsObject(m_s3Sources[s3SourcesIndex].Jsonize());
    }
    payload.WithArray("s3Sources", std::move(s3SourcesJsonList));
  }

  if (m_repositorySourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> repositorySourcesJsonList(m_repositorySources.size());
    for (unsigned repositorySourcesIndex = 0; repositorySourcesIndex < repositorySourcesJsonList.GetLength(); ++repositorySourcesIndex) {
      repositorySourcesJsonList[repositorySourcesIndex].AsObject(m_repositorySources[repositorySourcesIndex].Jsonize());
    }
    payload.WithArray("repositorySources", std::move(repositorySourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
