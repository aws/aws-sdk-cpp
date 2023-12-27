/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentTemplateExperimentOptions.h>
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

ExperimentTemplateExperimentOptions::ExperimentTemplateExperimentOptions() : 
    m_accountTargeting(AccountTargeting::NOT_SET),
    m_accountTargetingHasBeenSet(false),
    m_emptyTargetResolutionMode(EmptyTargetResolutionMode::NOT_SET),
    m_emptyTargetResolutionModeHasBeenSet(false)
{
}

ExperimentTemplateExperimentOptions::ExperimentTemplateExperimentOptions(JsonView jsonValue) : 
    m_accountTargeting(AccountTargeting::NOT_SET),
    m_accountTargetingHasBeenSet(false),
    m_emptyTargetResolutionMode(EmptyTargetResolutionMode::NOT_SET),
    m_emptyTargetResolutionModeHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentTemplateExperimentOptions& ExperimentTemplateExperimentOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountTargeting"))
  {
    m_accountTargeting = AccountTargetingMapper::GetAccountTargetingForName(jsonValue.GetString("accountTargeting"));

    m_accountTargetingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emptyTargetResolutionMode"))
  {
    m_emptyTargetResolutionMode = EmptyTargetResolutionModeMapper::GetEmptyTargetResolutionModeForName(jsonValue.GetString("emptyTargetResolutionMode"));

    m_emptyTargetResolutionModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentTemplateExperimentOptions::Jsonize() const
{
  JsonValue payload;

  if(m_accountTargetingHasBeenSet)
  {
   payload.WithString("accountTargeting", AccountTargetingMapper::GetNameForAccountTargeting(m_accountTargeting));
  }

  if(m_emptyTargetResolutionModeHasBeenSet)
  {
   payload.WithString("emptyTargetResolutionMode", EmptyTargetResolutionModeMapper::GetNameForEmptyTargetResolutionMode(m_emptyTargetResolutionMode));
  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
