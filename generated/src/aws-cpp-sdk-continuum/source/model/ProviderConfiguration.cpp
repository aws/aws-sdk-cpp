/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ProviderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ProviderConfiguration::ProviderConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProviderConfiguration& ProviderConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("github")) {
    m_github = jsonValue.GetObject("github");
    m_githubHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gitlab")) {
    m_gitlab = jsonValue.GetObject("gitlab");
    m_gitlabHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3")) {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  if (m_gitlabHasBeenSet) {
    payload.WithObject("gitlab", m_gitlab.Jsonize());
  }

  if (m_s3HasBeenSet) {
    payload.WithObject("s3", m_s3.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
