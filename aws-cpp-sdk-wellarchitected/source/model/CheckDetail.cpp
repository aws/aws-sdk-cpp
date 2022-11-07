/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/CheckDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

CheckDetail::CheckDetail() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_provider(CheckProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_choiceIdHasBeenSet(false),
    m_status(CheckStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_flaggedResources(0),
    m_flaggedResourcesHasBeenSet(false),
    m_reason(CheckFailureReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CheckDetail::CheckDetail(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_provider(CheckProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_choiceIdHasBeenSet(false),
    m_status(CheckStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_flaggedResources(0),
    m_flaggedResourcesHasBeenSet(false),
    m_reason(CheckFailureReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

CheckDetail& CheckDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Provider"))
  {
    m_provider = CheckProviderMapper::GetCheckProviderForName(jsonValue.GetString("Provider"));

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChoiceId"))
  {
    m_choiceId = jsonValue.GetString("ChoiceId");

    m_choiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CheckStatusMapper::GetCheckStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlaggedResources"))
  {
    m_flaggedResources = jsonValue.GetInteger("FlaggedResources");

    m_flaggedResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = CheckFailureReasonMapper::GetCheckFailureReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CheckDetail::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", CheckProviderMapper::GetNameForCheckProvider(m_provider));
  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_choiceIdHasBeenSet)
  {
   payload.WithString("ChoiceId", m_choiceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CheckStatusMapper::GetNameForCheckStatus(m_status));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_flaggedResourcesHasBeenSet)
  {
   payload.WithInteger("FlaggedResources", m_flaggedResources);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", CheckFailureReasonMapper::GetNameForCheckFailureReason(m_reason));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
