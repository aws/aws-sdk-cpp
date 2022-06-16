/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFormationStackDriftInformationDetails.h>
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

AwsCloudFormationStackDriftInformationDetails::AwsCloudFormationStackDriftInformationDetails() : 
    m_stackDriftStatusHasBeenSet(false)
{
}

AwsCloudFormationStackDriftInformationDetails::AwsCloudFormationStackDriftInformationDetails(JsonView jsonValue) : 
    m_stackDriftStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFormationStackDriftInformationDetails& AwsCloudFormationStackDriftInformationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackDriftStatus"))
  {
    m_stackDriftStatus = jsonValue.GetString("StackDriftStatus");

    m_stackDriftStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFormationStackDriftInformationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_stackDriftStatusHasBeenSet)
  {
   payload.WithString("StackDriftStatus", m_stackDriftStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
