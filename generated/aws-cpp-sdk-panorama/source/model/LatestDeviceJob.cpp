/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/LatestDeviceJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

LatestDeviceJob::LatestDeviceJob() : 
    m_imageVersionHasBeenSet(false),
    m_status(UpdateProgress::NOT_SET),
    m_statusHasBeenSet(false)
{
}

LatestDeviceJob::LatestDeviceJob(JsonView jsonValue) : 
    m_imageVersionHasBeenSet(false),
    m_status(UpdateProgress::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

LatestDeviceJob& LatestDeviceJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageVersion"))
  {
    m_imageVersion = jsonValue.GetString("ImageVersion");

    m_imageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UpdateProgressMapper::GetUpdateProgressForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue LatestDeviceJob::Jsonize() const
{
  JsonValue payload;

  if(m_imageVersionHasBeenSet)
  {
   payload.WithString("ImageVersion", m_imageVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UpdateProgressMapper::GetNameForUpdateProgress(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
