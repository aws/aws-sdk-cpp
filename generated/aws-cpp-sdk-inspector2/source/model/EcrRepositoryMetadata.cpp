/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrRepositoryMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

EcrRepositoryMetadata::EcrRepositoryMetadata() : 
    m_nameHasBeenSet(false),
    m_scanFrequency(EcrScanFrequency::NOT_SET),
    m_scanFrequencyHasBeenSet(false)
{
}

EcrRepositoryMetadata::EcrRepositoryMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_scanFrequency(EcrScanFrequency::NOT_SET),
    m_scanFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

EcrRepositoryMetadata& EcrRepositoryMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanFrequency"))
  {
    m_scanFrequency = EcrScanFrequencyMapper::GetEcrScanFrequencyForName(jsonValue.GetString("scanFrequency"));

    m_scanFrequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue EcrRepositoryMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_scanFrequencyHasBeenSet)
  {
   payload.WithString("scanFrequency", EcrScanFrequencyMapper::GetNameForEcrScanFrequency(m_scanFrequency));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
