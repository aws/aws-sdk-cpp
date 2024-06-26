﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressBooleanToEvaluate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressBooleanToEvaluate::IngressBooleanToEvaluate() : 
    m_analysisHasBeenSet(false)
{
}

IngressBooleanToEvaluate::IngressBooleanToEvaluate(JsonView jsonValue)
  : IngressBooleanToEvaluate()
{
  *this = jsonValue;
}

IngressBooleanToEvaluate& IngressBooleanToEvaluate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Analysis"))
  {
    m_analysis = jsonValue.GetObject("Analysis");

    m_analysisHasBeenSet = true;
  }

  return *this;
}

JsonValue IngressBooleanToEvaluate::Jsonize() const
{
  JsonValue payload;

  if(m_analysisHasBeenSet)
  {
   payload.WithObject("Analysis", m_analysis.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
