/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CodeSigning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CodeSigning::CodeSigning() : 
    m_awsSignerJobIdHasBeenSet(false),
    m_startSigningJobParameterHasBeenSet(false),
    m_customCodeSigningHasBeenSet(false)
{
}

CodeSigning::CodeSigning(JsonView jsonValue) : 
    m_awsSignerJobIdHasBeenSet(false),
    m_startSigningJobParameterHasBeenSet(false),
    m_customCodeSigningHasBeenSet(false)
{
  *this = jsonValue;
}

CodeSigning& CodeSigning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsSignerJobId"))
  {
    m_awsSignerJobId = jsonValue.GetString("awsSignerJobId");

    m_awsSignerJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startSigningJobParameter"))
  {
    m_startSigningJobParameter = jsonValue.GetObject("startSigningJobParameter");

    m_startSigningJobParameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customCodeSigning"))
  {
    m_customCodeSigning = jsonValue.GetObject("customCodeSigning");

    m_customCodeSigningHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeSigning::Jsonize() const
{
  JsonValue payload;

  if(m_awsSignerJobIdHasBeenSet)
  {
   payload.WithString("awsSignerJobId", m_awsSignerJobId);

  }

  if(m_startSigningJobParameterHasBeenSet)
  {
   payload.WithObject("startSigningJobParameter", m_startSigningJobParameter.Jsonize());

  }

  if(m_customCodeSigningHasBeenSet)
  {
   payload.WithObject("customCodeSigning", m_customCodeSigning.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
