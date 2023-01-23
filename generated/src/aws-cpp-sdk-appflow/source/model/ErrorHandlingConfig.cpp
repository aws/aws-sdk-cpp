/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ErrorHandlingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ErrorHandlingConfig::ErrorHandlingConfig() : 
    m_failOnFirstDestinationError(false),
    m_failOnFirstDestinationErrorHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_bucketNameHasBeenSet(false)
{
}

ErrorHandlingConfig::ErrorHandlingConfig(JsonView jsonValue) : 
    m_failOnFirstDestinationError(false),
    m_failOnFirstDestinationErrorHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_bucketNameHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorHandlingConfig& ErrorHandlingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failOnFirstDestinationError"))
  {
    m_failOnFirstDestinationError = jsonValue.GetBool("failOnFirstDestinationError");

    m_failOnFirstDestinationErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("bucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorHandlingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_failOnFirstDestinationErrorHasBeenSet)
  {
   payload.WithBool("failOnFirstDestinationError", m_failOnFirstDestinationError);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("bucketPrefix", m_bucketPrefix);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
