/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ThirdPartyJobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ThirdPartyJobDetails::ThirdPartyJobDetails() : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_nonceHasBeenSet(false)
{
}

ThirdPartyJobDetails::ThirdPartyJobDetails(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_nonceHasBeenSet(false)
{
  *this = jsonValue;
}

ThirdPartyJobDetails& ThirdPartyJobDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetObject("data");

    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nonce"))
  {
    m_nonce = jsonValue.GetString("nonce");

    m_nonceHasBeenSet = true;
  }

  return *this;
}

JsonValue ThirdPartyJobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithObject("data", m_data.Jsonize());

  }

  if(m_nonceHasBeenSet)
  {
   payload.WithString("nonce", m_nonce);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
