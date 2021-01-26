/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ClassificationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ClassificationDetails::ClassificationDetails() : 
    m_detailedResultsLocationHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

ClassificationDetails::ClassificationDetails(JsonView jsonValue) : 
    m_detailedResultsLocationHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationDetails& ClassificationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detailedResultsLocation"))
  {
    m_detailedResultsLocation = jsonValue.GetString("detailedResultsLocation");

    m_detailedResultsLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetObject("result");

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassificationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_detailedResultsLocationHasBeenSet)
  {
   payload.WithString("detailedResultsLocation", m_detailedResultsLocation);

  }

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithObject("result", m_result.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
