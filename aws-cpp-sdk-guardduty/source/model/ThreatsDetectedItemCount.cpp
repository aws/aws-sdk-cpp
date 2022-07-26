/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ThreatsDetectedItemCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ThreatsDetectedItemCount::ThreatsDetectedItemCount() : 
    m_files(0),
    m_filesHasBeenSet(false)
{
}

ThreatsDetectedItemCount::ThreatsDetectedItemCount(JsonView jsonValue) : 
    m_files(0),
    m_filesHasBeenSet(false)
{
  *this = jsonValue;
}

ThreatsDetectedItemCount& ThreatsDetectedItemCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("files"))
  {
    m_files = jsonValue.GetInteger("files");

    m_filesHasBeenSet = true;
  }

  return *this;
}

JsonValue ThreatsDetectedItemCount::Jsonize() const
{
  JsonValue payload;

  if(m_filesHasBeenSet)
  {
   payload.WithInteger("files", m_files);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
