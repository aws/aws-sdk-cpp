/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/TestCase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

TestCase::TestCase() : 
    m_reportArnHasBeenSet(false),
    m_testRawDataPathHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_durationInNanoSeconds(0),
    m_durationInNanoSecondsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_expiredHasBeenSet(false)
{
}

TestCase::TestCase(JsonView jsonValue) : 
    m_reportArnHasBeenSet(false),
    m_testRawDataPathHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_durationInNanoSeconds(0),
    m_durationInNanoSecondsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_expiredHasBeenSet(false)
{
  *this = jsonValue;
}

TestCase& TestCase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reportArn"))
  {
    m_reportArn = jsonValue.GetString("reportArn");

    m_reportArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testRawDataPath"))
  {
    m_testRawDataPath = jsonValue.GetString("testRawDataPath");

    m_testRawDataPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationInNanoSeconds"))
  {
    m_durationInNanoSeconds = jsonValue.GetInt64("durationInNanoSeconds");

    m_durationInNanoSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expired"))
  {
    m_expired = jsonValue.GetDouble("expired");

    m_expiredHasBeenSet = true;
  }

  return *this;
}

JsonValue TestCase::Jsonize() const
{
  JsonValue payload;

  if(m_reportArnHasBeenSet)
  {
   payload.WithString("reportArn", m_reportArn);

  }

  if(m_testRawDataPathHasBeenSet)
  {
   payload.WithString("testRawDataPath", m_testRawDataPath);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_durationInNanoSecondsHasBeenSet)
  {
   payload.WithInt64("durationInNanoSeconds", m_durationInNanoSeconds);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_expiredHasBeenSet)
  {
   payload.WithDouble("expired", m_expired.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
