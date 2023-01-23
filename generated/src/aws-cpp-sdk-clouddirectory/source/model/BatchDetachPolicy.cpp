/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchDetachPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchDetachPolicy::BatchDetachPolicy() : 
    m_policyReferenceHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
}

BatchDetachPolicy::BatchDetachPolicy(JsonView jsonValue) : 
    m_policyReferenceHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetachPolicy& BatchDetachPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyReference"))
  {
    m_policyReference = jsonValue.GetObject("PolicyReference");

    m_policyReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectReference"))
  {
    m_objectReference = jsonValue.GetObject("ObjectReference");

    m_objectReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetachPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyReferenceHasBeenSet)
  {
   payload.WithObject("PolicyReference", m_policyReference.Jsonize());

  }

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
