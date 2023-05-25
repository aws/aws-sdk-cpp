/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksAttemptContainerDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksAttemptContainerDetail::EksAttemptContainerDetail() : 
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

EksAttemptContainerDetail::EksAttemptContainerDetail(JsonView jsonValue) : 
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

EksAttemptContainerDetail& EksAttemptContainerDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue EksAttemptContainerDetail::Jsonize() const
{
  JsonValue payload;

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
