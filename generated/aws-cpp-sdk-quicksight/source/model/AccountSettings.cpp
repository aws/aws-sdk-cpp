﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AccountSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AccountSettings::AccountSettings() : 
    m_accountNameHasBeenSet(false),
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false),
    m_defaultNamespaceHasBeenSet(false),
    m_notificationEmailHasBeenSet(false)
{
}

AccountSettings::AccountSettings(JsonView jsonValue) : 
    m_accountNameHasBeenSet(false),
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false),
    m_defaultNamespaceHasBeenSet(false),
    m_notificationEmailHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettings& AccountSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountName"))
  {
    m_accountName = jsonValue.GetString("AccountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = EditionMapper::GetEditionForName(jsonValue.GetString("Edition"));

    m_editionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultNamespace"))
  {
    m_defaultNamespace = jsonValue.GetString("DefaultNamespace");

    m_defaultNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationEmail"))
  {
    m_notificationEmail = jsonValue.GetString("NotificationEmail");

    m_notificationEmailHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSettings::Jsonize() const
{
  JsonValue payload;

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", EditionMapper::GetNameForEdition(m_edition));
  }

  if(m_defaultNamespaceHasBeenSet)
  {
   payload.WithString("DefaultNamespace", m_defaultNamespace);

  }

  if(m_notificationEmailHasBeenSet)
  {
   payload.WithString("NotificationEmail", m_notificationEmail);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
