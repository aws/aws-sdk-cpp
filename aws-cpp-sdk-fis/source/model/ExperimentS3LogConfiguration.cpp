/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentS3LogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentS3LogConfiguration::ExperimentS3LogConfiguration() : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

ExperimentS3LogConfiguration::ExperimentS3LogConfiguration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentS3LogConfiguration& ExperimentS3LogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentS3LogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
