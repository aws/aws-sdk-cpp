/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/ApiPassthrough.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

ApiPassthrough::ApiPassthrough() : 
    m_extensionsHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
}

ApiPassthrough::ApiPassthrough(JsonView jsonValue) : 
    m_extensionsHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
  *this = jsonValue;
}

ApiPassthrough& ApiPassthrough::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Extensions"))
  {
    m_extensions = jsonValue.GetObject("Extensions");

    m_extensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetObject("Subject");

    m_subjectHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiPassthrough::Jsonize() const
{
  JsonValue payload;

  if(m_extensionsHasBeenSet)
  {
   payload.WithObject("Extensions", m_extensions.Jsonize());

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithObject("Subject", m_subject.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
