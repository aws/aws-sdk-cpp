/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/NewUserAgentDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

NewUserAgentDetail::NewUserAgentDetail() : 
    m_userAgentHasBeenSet(false),
    m_isNewForEntireAccount(false),
    m_isNewForEntireAccountHasBeenSet(false)
{
}

NewUserAgentDetail::NewUserAgentDetail(JsonView jsonValue) : 
    m_userAgentHasBeenSet(false),
    m_isNewForEntireAccount(false),
    m_isNewForEntireAccountHasBeenSet(false)
{
  *this = jsonValue;
}

NewUserAgentDetail& NewUserAgentDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserAgent"))
  {
    m_userAgent = jsonValue.GetString("UserAgent");

    m_userAgentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsNewForEntireAccount"))
  {
    m_isNewForEntireAccount = jsonValue.GetBool("IsNewForEntireAccount");

    m_isNewForEntireAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue NewUserAgentDetail::Jsonize() const
{
  JsonValue payload;

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("UserAgent", m_userAgent);

  }

  if(m_isNewForEntireAccountHasBeenSet)
  {
   payload.WithBool("IsNewForEntireAccount", m_isNewForEntireAccount);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
