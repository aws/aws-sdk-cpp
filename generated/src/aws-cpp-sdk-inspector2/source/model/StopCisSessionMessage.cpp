/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StopCisSessionMessage.h>
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

StopCisSessionMessage::StopCisSessionMessage() : 
    m_benchmarkProfileHasBeenSet(false),
    m_benchmarkVersionHasBeenSet(false),
    m_computePlatformHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_status(StopCisSessionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

StopCisSessionMessage::StopCisSessionMessage(JsonView jsonValue) : 
    m_benchmarkProfileHasBeenSet(false),
    m_benchmarkVersionHasBeenSet(false),
    m_computePlatformHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_status(StopCisSessionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

StopCisSessionMessage& StopCisSessionMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("benchmarkProfile"))
  {
    m_benchmarkProfile = jsonValue.GetString("benchmarkProfile");

    m_benchmarkProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("benchmarkVersion"))
  {
    m_benchmarkVersion = jsonValue.GetString("benchmarkVersion");

    m_benchmarkVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computePlatform"))
  {
    m_computePlatform = jsonValue.GetObject("computePlatform");

    m_computePlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progress"))
  {
    m_progress = jsonValue.GetObject("progress");

    m_progressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StopCisSessionStatusMapper::GetStopCisSessionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue StopCisSessionMessage::Jsonize() const
{
  JsonValue payload;

  if(m_benchmarkProfileHasBeenSet)
  {
   payload.WithString("benchmarkProfile", m_benchmarkProfile);

  }

  if(m_benchmarkVersionHasBeenSet)
  {
   payload.WithString("benchmarkVersion", m_benchmarkVersion);

  }

  if(m_computePlatformHasBeenSet)
  {
   payload.WithObject("computePlatform", m_computePlatform.Jsonize());

  }

  if(m_progressHasBeenSet)
  {
   payload.WithObject("progress", m_progress.Jsonize());

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StopCisSessionStatusMapper::GetNameForStopCisSessionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
