/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchListPolicyAttachments.h>
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

BatchListPolicyAttachments::BatchListPolicyAttachments() : 
    m_policyReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

BatchListPolicyAttachments::BatchListPolicyAttachments(JsonView jsonValue) : 
    m_policyReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchListPolicyAttachments& BatchListPolicyAttachments::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyReference"))
  {
    m_policyReference = jsonValue.GetObject("PolicyReference");

    m_policyReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchListPolicyAttachments::Jsonize() const
{
  JsonValue payload;

  if(m_policyReferenceHasBeenSet)
  {
   payload.WithObject("PolicyReference", m_policyReference.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
