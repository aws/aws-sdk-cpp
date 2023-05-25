/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GeneratedCodeJobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

GeneratedCodeJobDetails::GeneratedCodeJobDetails() : 
    m_descriptionHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_generatedCodeJobIdHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_status(GeneratedCodeJobState::NOT_SET),
    m_statusHasBeenSet(false)
{
}

GeneratedCodeJobDetails::GeneratedCodeJobDetails(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_generatedCodeJobIdHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_status(GeneratedCodeJobState::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

GeneratedCodeJobDetails& GeneratedCodeJobDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetString("ExpirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratedCodeJobId"))
  {
    m_generatedCodeJobId = jsonValue.GetString("GeneratedCodeJobId");

    m_generatedCodeJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");

    m_s3UrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GeneratedCodeJobStateMapper::GetGeneratedCodeJobStateForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneratedCodeJobDetails::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("ExpirationTime", m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_generatedCodeJobIdHasBeenSet)
  {
   payload.WithString("GeneratedCodeJobId", m_generatedCodeJobId);

  }

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GeneratedCodeJobStateMapper::GetNameForGeneratedCodeJobState(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
