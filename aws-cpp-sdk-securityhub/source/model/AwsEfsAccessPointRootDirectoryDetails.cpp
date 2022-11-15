/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEfsAccessPointRootDirectoryDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEfsAccessPointRootDirectoryDetails::AwsEfsAccessPointRootDirectoryDetails() : 
    m_creationInfoHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

AwsEfsAccessPointRootDirectoryDetails::AwsEfsAccessPointRootDirectoryDetails(JsonView jsonValue) : 
    m_creationInfoHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEfsAccessPointRootDirectoryDetails& AwsEfsAccessPointRootDirectoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationInfo"))
  {
    m_creationInfo = jsonValue.GetObject("CreationInfo");

    m_creationInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEfsAccessPointRootDirectoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_creationInfoHasBeenSet)
  {
   payload.WithObject("CreationInfo", m_creationInfo.Jsonize());

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
