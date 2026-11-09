/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ProviderDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

ProviderDetails::ProviderDetails(JsonView jsonValue) { *this = jsonValue; }

ProviderDetails& ProviderDetails::operator=(JsonView jsonValue) {
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

JsonValue ProviderDetails::Jsonize() const {
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
