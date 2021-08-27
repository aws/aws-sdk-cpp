/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/Trust.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

Trust::Trust() : 
    m_directoryIdHasBeenSet(false),
    m_trustIdHasBeenSet(false),
    m_remoteDomainNameHasBeenSet(false),
    m_trustType(TrustType::NOT_SET),
    m_trustTypeHasBeenSet(false),
    m_trustDirection(TrustDirection::NOT_SET),
    m_trustDirectionHasBeenSet(false),
    m_trustState(TrustState::NOT_SET),
    m_trustStateHasBeenSet(false),
    m_createdDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_stateLastUpdatedDateTimeHasBeenSet(false),
    m_trustStateReasonHasBeenSet(false),
    m_selectiveAuth(SelectiveAuth::NOT_SET),
    m_selectiveAuthHasBeenSet(false)
{
}

Trust::Trust(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_trustIdHasBeenSet(false),
    m_remoteDomainNameHasBeenSet(false),
    m_trustType(TrustType::NOT_SET),
    m_trustTypeHasBeenSet(false),
    m_trustDirection(TrustDirection::NOT_SET),
    m_trustDirectionHasBeenSet(false),
    m_trustState(TrustState::NOT_SET),
    m_trustStateHasBeenSet(false),
    m_createdDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_stateLastUpdatedDateTimeHasBeenSet(false),
    m_trustStateReasonHasBeenSet(false),
    m_selectiveAuth(SelectiveAuth::NOT_SET),
    m_selectiveAuthHasBeenSet(false)
{
  *this = jsonValue;
}

Trust& Trust::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustId"))
  {
    m_trustId = jsonValue.GetString("TrustId");

    m_trustIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoteDomainName"))
  {
    m_remoteDomainName = jsonValue.GetString("RemoteDomainName");

    m_remoteDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustType"))
  {
    m_trustType = TrustTypeMapper::GetTrustTypeForName(jsonValue.GetString("TrustType"));

    m_trustTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustDirection"))
  {
    m_trustDirection = TrustDirectionMapper::GetTrustDirectionForName(jsonValue.GetString("TrustDirection"));

    m_trustDirectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustState"))
  {
    m_trustState = TrustStateMapper::GetTrustStateForName(jsonValue.GetString("TrustState"));

    m_trustStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDateTime"))
  {
    m_createdDateTime = jsonValue.GetDouble("CreatedDateTime");

    m_createdDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateLastUpdatedDateTime"))
  {
    m_stateLastUpdatedDateTime = jsonValue.GetDouble("StateLastUpdatedDateTime");

    m_stateLastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustStateReason"))
  {
    m_trustStateReason = jsonValue.GetString("TrustStateReason");

    m_trustStateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectiveAuth"))
  {
    m_selectiveAuth = SelectiveAuthMapper::GetSelectiveAuthForName(jsonValue.GetString("SelectiveAuth"));

    m_selectiveAuthHasBeenSet = true;
  }

  return *this;
}

JsonValue Trust::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_trustIdHasBeenSet)
  {
   payload.WithString("TrustId", m_trustId);

  }

  if(m_remoteDomainNameHasBeenSet)
  {
   payload.WithString("RemoteDomainName", m_remoteDomainName);

  }

  if(m_trustTypeHasBeenSet)
  {
   payload.WithString("TrustType", TrustTypeMapper::GetNameForTrustType(m_trustType));
  }

  if(m_trustDirectionHasBeenSet)
  {
   payload.WithString("TrustDirection", TrustDirectionMapper::GetNameForTrustDirection(m_trustDirection));
  }

  if(m_trustStateHasBeenSet)
  {
   payload.WithString("TrustState", TrustStateMapper::GetNameForTrustState(m_trustState));
  }

  if(m_createdDateTimeHasBeenSet)
  {
   payload.WithDouble("CreatedDateTime", m_createdDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_stateLastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("StateLastUpdatedDateTime", m_stateLastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_trustStateReasonHasBeenSet)
  {
   payload.WithString("TrustStateReason", m_trustStateReason);

  }

  if(m_selectiveAuthHasBeenSet)
  {
   payload.WithString("SelectiveAuth", SelectiveAuthMapper::GetNameForSelectiveAuth(m_selectiveAuth));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
