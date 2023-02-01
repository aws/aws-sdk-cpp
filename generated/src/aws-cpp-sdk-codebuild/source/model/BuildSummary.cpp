/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BuildSummary::BuildSummary() : 
    m_arnHasBeenSet(false),
    m_requestedOnHasBeenSet(false),
    m_buildStatus(StatusType::NOT_SET),
    m_buildStatusHasBeenSet(false),
    m_primaryArtifactHasBeenSet(false),
    m_secondaryArtifactsHasBeenSet(false)
{
}

BuildSummary::BuildSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_requestedOnHasBeenSet(false),
    m_buildStatus(StatusType::NOT_SET),
    m_buildStatusHasBeenSet(false),
    m_primaryArtifactHasBeenSet(false),
    m_secondaryArtifactsHasBeenSet(false)
{
  *this = jsonValue;
}

BuildSummary& BuildSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestedOn"))
  {
    m_requestedOn = jsonValue.GetDouble("requestedOn");

    m_requestedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildStatus"))
  {
    m_buildStatus = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("buildStatus"));

    m_buildStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("primaryArtifact"))
  {
    m_primaryArtifact = jsonValue.GetObject("primaryArtifact");

    m_primaryArtifactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondaryArtifacts"))
  {
    Aws::Utils::Array<JsonView> secondaryArtifactsJsonList = jsonValue.GetArray("secondaryArtifacts");
    for(unsigned secondaryArtifactsIndex = 0; secondaryArtifactsIndex < secondaryArtifactsJsonList.GetLength(); ++secondaryArtifactsIndex)
    {
      m_secondaryArtifacts.push_back(secondaryArtifactsJsonList[secondaryArtifactsIndex].AsObject());
    }
    m_secondaryArtifactsHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_requestedOnHasBeenSet)
  {
   payload.WithDouble("requestedOn", m_requestedOn.SecondsWithMSPrecision());
  }

  if(m_buildStatusHasBeenSet)
  {
   payload.WithString("buildStatus", StatusTypeMapper::GetNameForStatusType(m_buildStatus));
  }

  if(m_primaryArtifactHasBeenSet)
  {
   payload.WithObject("primaryArtifact", m_primaryArtifact.Jsonize());

  }

  if(m_secondaryArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryArtifactsJsonList(m_secondaryArtifacts.size());
   for(unsigned secondaryArtifactsIndex = 0; secondaryArtifactsIndex < secondaryArtifactsJsonList.GetLength(); ++secondaryArtifactsIndex)
   {
     secondaryArtifactsJsonList[secondaryArtifactsIndex].AsObject(m_secondaryArtifacts[secondaryArtifactsIndex].Jsonize());
   }
   payload.WithArray("secondaryArtifacts", std::move(secondaryArtifactsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
