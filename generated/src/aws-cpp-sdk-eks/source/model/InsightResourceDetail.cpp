/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/InsightResourceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

InsightResourceDetail::InsightResourceDetail() : 
    m_insightStatusHasBeenSet(false),
    m_kubernetesResourceUriHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

InsightResourceDetail::InsightResourceDetail(JsonView jsonValue) : 
    m_insightStatusHasBeenSet(false),
    m_kubernetesResourceUriHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

InsightResourceDetail& InsightResourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("insightStatus"))
  {
    m_insightStatus = jsonValue.GetObject("insightStatus");

    m_insightStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesResourceUri"))
  {
    m_kubernetesResourceUri = jsonValue.GetString("kubernetesResourceUri");

    m_kubernetesResourceUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightResourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_insightStatusHasBeenSet)
  {
   payload.WithObject("insightStatus", m_insightStatus.Jsonize());

  }

  if(m_kubernetesResourceUriHasBeenSet)
  {
   payload.WithString("kubernetesResourceUri", m_kubernetesResourceUri);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
