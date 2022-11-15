/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/FsxProtocolSmb.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

FsxProtocolSmb::FsxProtocolSmb() : 
    m_domainHasBeenSet(false),
    m_mountOptionsHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

FsxProtocolSmb::FsxProtocolSmb(JsonView jsonValue) : 
    m_domainHasBeenSet(false),
    m_mountOptionsHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

FsxProtocolSmb& FsxProtocolSmb::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountOptions"))
  {
    m_mountOptions = jsonValue.GetObject("MountOptions");

    m_mountOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetString("User");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue FsxProtocolSmb::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_mountOptionsHasBeenSet)
  {
   payload.WithObject("MountOptions", m_mountOptions.Jsonize());

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("User", m_user);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
