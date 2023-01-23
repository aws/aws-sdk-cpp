/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/DeletionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

DeletionConfig::DeletionConfig() : 
    m_edgeRetentionInHours(0),
    m_edgeRetentionInHoursHasBeenSet(false),
    m_localSizeConfigHasBeenSet(false),
    m_deleteAfterUpload(false),
    m_deleteAfterUploadHasBeenSet(false)
{
}

DeletionConfig::DeletionConfig(JsonView jsonValue) : 
    m_edgeRetentionInHours(0),
    m_edgeRetentionInHoursHasBeenSet(false),
    m_localSizeConfigHasBeenSet(false),
    m_deleteAfterUpload(false),
    m_deleteAfterUploadHasBeenSet(false)
{
  *this = jsonValue;
}

DeletionConfig& DeletionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EdgeRetentionInHours"))
  {
    m_edgeRetentionInHours = jsonValue.GetInteger("EdgeRetentionInHours");

    m_edgeRetentionInHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalSizeConfig"))
  {
    m_localSizeConfig = jsonValue.GetObject("LocalSizeConfig");

    m_localSizeConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteAfterUpload"))
  {
    m_deleteAfterUpload = jsonValue.GetBool("DeleteAfterUpload");

    m_deleteAfterUploadHasBeenSet = true;
  }

  return *this;
}

JsonValue DeletionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_edgeRetentionInHoursHasBeenSet)
  {
   payload.WithInteger("EdgeRetentionInHours", m_edgeRetentionInHours);

  }

  if(m_localSizeConfigHasBeenSet)
  {
   payload.WithObject("LocalSizeConfig", m_localSizeConfig.Jsonize());

  }

  if(m_deleteAfterUploadHasBeenSet)
  {
   payload.WithBool("DeleteAfterUpload", m_deleteAfterUpload);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
