/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFormationStackOutputsDetails.h>
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

AwsCloudFormationStackOutputsDetails::AwsCloudFormationStackOutputsDetails() : 
    m_descriptionHasBeenSet(false),
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false)
{
}

AwsCloudFormationStackOutputsDetails::AwsCloudFormationStackOutputsDetails(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFormationStackOutputsDetails& AwsCloudFormationStackOutputsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputKey"))
  {
    m_outputKey = jsonValue.GetString("OutputKey");

    m_outputKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputValue"))
  {
    m_outputValue = jsonValue.GetString("OutputValue");

    m_outputValueHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFormationStackOutputsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_outputKeyHasBeenSet)
  {
   payload.WithString("OutputKey", m_outputKey);

  }

  if(m_outputValueHasBeenSet)
  {
   payload.WithString("OutputValue", m_outputValue);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
