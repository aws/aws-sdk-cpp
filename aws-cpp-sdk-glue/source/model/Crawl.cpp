﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Crawl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Crawl::Crawl() : 
    m_state(CrawlState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_logStreamHasBeenSet(false)
{
}

Crawl::Crawl(JsonView jsonValue) : 
    m_state(CrawlState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_logGroupHasBeenSet(false),
    m_logStreamHasBeenSet(false)
{
  *this = jsonValue;
}

Crawl& Crawl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = CrawlStateMapper::GetCrawlStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

    m_startedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

    m_completedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroup"))
  {
    m_logGroup = jsonValue.GetString("LogGroup");

    m_logGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogStream"))
  {
    m_logStream = jsonValue.GetString("LogStream");

    m_logStreamHasBeenSet = true;
  }

  return *this;
}

JsonValue Crawl::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CrawlStateMapper::GetNameForCrawlState(m_state));
  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_logGroupHasBeenSet)
  {
   payload.WithString("LogGroup", m_logGroup);

  }

  if(m_logStreamHasBeenSet)
  {
   payload.WithString("LogStream", m_logStream);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
