/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAttachPolicy.h>
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

BatchAttachPolicy::BatchAttachPolicy() : 
    m_policyReferenceHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
}

BatchAttachPolicy::BatchAttachPolicy(JsonView jsonValue) : 
    m_policyReferenceHasBeenSet(false),
    m_objectReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachPolicy& BatchAttachPolicy::operator =(JsonView jsonValue)
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

JsonValue BatchAttachPolicy::Jsonize() const
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
