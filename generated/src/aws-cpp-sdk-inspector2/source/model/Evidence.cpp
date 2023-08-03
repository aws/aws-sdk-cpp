/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Evidence.h>
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

Evidence::Evidence() : 
    m_evidenceDetailHasBeenSet(false),
    m_evidenceRuleHasBeenSet(false),
    m_severityHasBeenSet(false)
{
}

Evidence::Evidence(JsonView jsonValue) : 
    m_evidenceDetailHasBeenSet(false),
    m_evidenceRuleHasBeenSet(false),
    m_severityHasBeenSet(false)
{
  *this = jsonValue;
}

Evidence& Evidence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("evidenceDetail"))
  {
    m_evidenceDetail = jsonValue.GetString("evidenceDetail");

    m_evidenceDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceRule"))
  {
    m_evidenceRule = jsonValue.GetString("evidenceRule");

    m_evidenceRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetString("severity");

    m_severityHasBeenSet = true;
  }

  return *this;
}

JsonValue Evidence::Jsonize() const
{
  JsonValue payload;

  if(m_evidenceDetailHasBeenSet)
  {
   payload.WithString("evidenceDetail", m_evidenceDetail);

  }

  if(m_evidenceRuleHasBeenSet)
  {
   payload.WithString("evidenceRule", m_evidenceRule);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", m_severity);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
