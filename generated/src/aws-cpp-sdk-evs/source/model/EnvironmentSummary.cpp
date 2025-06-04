/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/EnvironmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

EnvironmentSummary::EnvironmentSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentSummary& EnvironmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");
    m_environmentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vcfVersion"))
  {
    m_vcfVersion = VcfVersionMapper::GetVcfVersionForName(jsonValue.GetString("vcfVersion"));
    m_vcfVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentStatus"))
  {
    m_environmentStatus = CheckResultMapper::GetCheckResultForName(jsonValue.GetString("environmentStatus"));
    m_environmentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentState"))
  {
    m_environmentState = EnvironmentStateMapper::GetEnvironmentStateForName(jsonValue.GetString("environmentState"));
    m_environmentStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");
    m_environmentArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_vcfVersionHasBeenSet)
  {
   payload.WithString("vcfVersion", VcfVersionMapper::GetNameForVcfVersion(m_vcfVersion));
  }

  if(m_environmentStatusHasBeenSet)
  {
   payload.WithString("environmentStatus", CheckResultMapper::GetNameForCheckResult(m_environmentStatus));
  }

  if(m_environmentStateHasBeenSet)
  {
   payload.WithString("environmentState", EnvironmentStateMapper::GetNameForEnvironmentState(m_environmentState));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_environmentArnHasBeenSet)
  {
   payload.WithString("environmentArn", m_environmentArn);

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
