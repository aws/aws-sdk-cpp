/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ACMManaged.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ACMManaged::ACMManaged(JsonView jsonValue) { *this = jsonValue; }

ACMManaged& ACMManaged::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificateArn")) {
    m_certificateArn = jsonValue.GetString("certificateArn");
    m_certificateArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ACMManaged::Jsonize() const {
  JsonValue payload;

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_certificateArnHasBeenSet) {
    payload.WithString("certificateArn", m_certificateArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
