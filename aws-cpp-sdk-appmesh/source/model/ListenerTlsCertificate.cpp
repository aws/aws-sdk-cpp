/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListenerTlsCertificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

ListenerTlsCertificate::ListenerTlsCertificate() : 
    m_acmHasBeenSet(false),
    m_fileHasBeenSet(false)
{
}

ListenerTlsCertificate::ListenerTlsCertificate(JsonView jsonValue) : 
    m_acmHasBeenSet(false),
    m_fileHasBeenSet(false)
{
  *this = jsonValue;
}

ListenerTlsCertificate& ListenerTlsCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acm"))
  {
    m_acm = jsonValue.GetObject("acm");

    m_acmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("file"))
  {
    m_file = jsonValue.GetObject("file");

    m_fileHasBeenSet = true;
  }

  return *this;
}

JsonValue ListenerTlsCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_acmHasBeenSet)
  {
   payload.WithObject("acm", m_acm.Jsonize());

  }

  if(m_fileHasBeenSet)
  {
   payload.WithObject("file", m_file.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
