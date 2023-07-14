/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Source::Source() : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_sshKeyHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

Source::Source(JsonView jsonValue) : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_sshKeyHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

Source& Source::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshKey"))
  {
    m_sshKey = jsonValue.GetString("SshKey");

    m_sshKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Revision"))
  {
    m_revision = jsonValue.GetString("Revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue Source::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SourceTypeMapper::GetNameForSourceType(m_type));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_sshKeyHasBeenSet)
  {
   payload.WithString("SshKey", m_sshKey);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("Revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
