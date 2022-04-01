/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEfsAccessPointDetails.h>
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

AwsEfsAccessPointDetails::AwsEfsAccessPointDetails() : 
    m_accessPointIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_posixUserHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false)
{
}

AwsEfsAccessPointDetails::AwsEfsAccessPointDetails(JsonView jsonValue) : 
    m_accessPointIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_posixUserHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEfsAccessPointDetails& AwsEfsAccessPointDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessPointId"))
  {
    m_accessPointId = jsonValue.GetString("AccessPointId");

    m_accessPointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");

    m_clientTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PosixUser"))
  {
    m_posixUser = jsonValue.GetObject("PosixUser");

    m_posixUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootDirectory"))
  {
    m_rootDirectory = jsonValue.GetObject("RootDirectory");

    m_rootDirectoryHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEfsAccessPointDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointIdHasBeenSet)
  {
   payload.WithString("AccessPointId", m_accessPointId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_posixUserHasBeenSet)
  {
   payload.WithObject("PosixUser", m_posixUser.Jsonize());

  }

  if(m_rootDirectoryHasBeenSet)
  {
   payload.WithObject("RootDirectory", m_rootDirectory.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
