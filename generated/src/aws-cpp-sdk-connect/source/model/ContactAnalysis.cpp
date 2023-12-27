/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactAnalysis.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ContactAnalysis::ContactAnalysis() : 
    m_transcriptHasBeenSet(false)
{
}

ContactAnalysis::ContactAnalysis(JsonView jsonValue) : 
    m_transcriptHasBeenSet(false)
{
  *this = jsonValue;
}

ContactAnalysis& ContactAnalysis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transcript"))
  {
    m_transcript = jsonValue.GetObject("Transcript");

    m_transcriptHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactAnalysis::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptHasBeenSet)
  {
   payload.WithObject("Transcript", m_transcript.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
