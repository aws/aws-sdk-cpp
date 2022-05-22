/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ClientTlsCertificate.h>
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

ClientTlsCertificate::ClientTlsCertificate() : 
    m_fileHasBeenSet(false),
    m_sdsHasBeenSet(false)
{
}

ClientTlsCertificate::ClientTlsCertificate(JsonView jsonValue) : 
    m_fileHasBeenSet(false),
    m_sdsHasBeenSet(false)
{
  *this = jsonValue;
}

ClientTlsCertificate& ClientTlsCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("file"))
  {
    m_file = jsonValue.GetObject("file");

    m_fileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sds"))
  {
    m_sds = jsonValue.GetObject("sds");

    m_sdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientTlsCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_fileHasBeenSet)
  {
   payload.WithObject("file", m_file.Jsonize());

  }

  if(m_sdsHasBeenSet)
  {
   payload.WithObject("sds", m_sds.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
