/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/clouddirectory/model/BatchReadSuccessfulResponse.h>
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

BatchReadSuccessfulResponse::BatchReadSuccessfulResponse() : 
    m_listObjectAttributesHasBeenSet(false),
    m_listObjectChildrenHasBeenSet(false),
    m_getObjectInformationHasBeenSet(false),
    m_getObjectAttributesHasBeenSet(false),
    m_listAttachedIndicesHasBeenSet(false),
    m_listObjectParentPathsHasBeenSet(false),
    m_listObjectPoliciesHasBeenSet(false),
    m_listPolicyAttachmentsHasBeenSet(false),
    m_lookupPolicyHasBeenSet(false),
    m_listIndexHasBeenSet(false),
    m_listOutgoingTypedLinksHasBeenSet(false),
    m_listIncomingTypedLinksHasBeenSet(false)
{
}

BatchReadSuccessfulResponse::BatchReadSuccessfulResponse(const JsonValue& jsonValue) : 
    m_listObjectAttributesHasBeenSet(false),
    m_listObjectChildrenHasBeenSet(false),
    m_getObjectInformationHasBeenSet(false),
    m_getObjectAttributesHasBeenSet(false),
    m_listAttachedIndicesHasBeenSet(false),
    m_listObjectParentPathsHasBeenSet(false),
    m_listObjectPoliciesHasBeenSet(false),
    m_listPolicyAttachmentsHasBeenSet(false),
    m_lookupPolicyHasBeenSet(false),
    m_listIndexHasBeenSet(false),
    m_listOutgoingTypedLinksHasBeenSet(false),
    m_listIncomingTypedLinksHasBeenSet(false)
{
  *this = jsonValue;
}

BatchReadSuccessfulResponse& BatchReadSuccessfulResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ListObjectAttributes"))
  {
    m_listObjectAttributes = jsonValue.GetObject("ListObjectAttributes");

    m_listObjectAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListObjectChildren"))
  {
    m_listObjectChildren = jsonValue.GetObject("ListObjectChildren");

    m_listObjectChildrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GetObjectInformation"))
  {
    m_getObjectInformation = jsonValue.GetObject("GetObjectInformation");

    m_getObjectInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GetObjectAttributes"))
  {
    m_getObjectAttributes = jsonValue.GetObject("GetObjectAttributes");

    m_getObjectAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListAttachedIndices"))
  {
    m_listAttachedIndices = jsonValue.GetObject("ListAttachedIndices");

    m_listAttachedIndicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListObjectParentPaths"))
  {
    m_listObjectParentPaths = jsonValue.GetObject("ListObjectParentPaths");

    m_listObjectParentPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListObjectPolicies"))
  {
    m_listObjectPolicies = jsonValue.GetObject("ListObjectPolicies");

    m_listObjectPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListPolicyAttachments"))
  {
    m_listPolicyAttachments = jsonValue.GetObject("ListPolicyAttachments");

    m_listPolicyAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LookupPolicy"))
  {
    m_lookupPolicy = jsonValue.GetObject("LookupPolicy");

    m_lookupPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListIndex"))
  {
    m_listIndex = jsonValue.GetObject("ListIndex");

    m_listIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListOutgoingTypedLinks"))
  {
    m_listOutgoingTypedLinks = jsonValue.GetObject("ListOutgoingTypedLinks");

    m_listOutgoingTypedLinksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListIncomingTypedLinks"))
  {
    m_listIncomingTypedLinks = jsonValue.GetObject("ListIncomingTypedLinks");

    m_listIncomingTypedLinksHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchReadSuccessfulResponse::Jsonize() const
{
  JsonValue payload;

  if(m_listObjectAttributesHasBeenSet)
  {
   payload.WithObject("ListObjectAttributes", m_listObjectAttributes.Jsonize());

  }

  if(m_listObjectChildrenHasBeenSet)
  {
   payload.WithObject("ListObjectChildren", m_listObjectChildren.Jsonize());

  }

  if(m_getObjectInformationHasBeenSet)
  {
   payload.WithObject("GetObjectInformation", m_getObjectInformation.Jsonize());

  }

  if(m_getObjectAttributesHasBeenSet)
  {
   payload.WithObject("GetObjectAttributes", m_getObjectAttributes.Jsonize());

  }

  if(m_listAttachedIndicesHasBeenSet)
  {
   payload.WithObject("ListAttachedIndices", m_listAttachedIndices.Jsonize());

  }

  if(m_listObjectParentPathsHasBeenSet)
  {
   payload.WithObject("ListObjectParentPaths", m_listObjectParentPaths.Jsonize());

  }

  if(m_listObjectPoliciesHasBeenSet)
  {
   payload.WithObject("ListObjectPolicies", m_listObjectPolicies.Jsonize());

  }

  if(m_listPolicyAttachmentsHasBeenSet)
  {
   payload.WithObject("ListPolicyAttachments", m_listPolicyAttachments.Jsonize());

  }

  if(m_lookupPolicyHasBeenSet)
  {
   payload.WithObject("LookupPolicy", m_lookupPolicy.Jsonize());

  }

  if(m_listIndexHasBeenSet)
  {
   payload.WithObject("ListIndex", m_listIndex.Jsonize());

  }

  if(m_listOutgoingTypedLinksHasBeenSet)
  {
   payload.WithObject("ListOutgoingTypedLinks", m_listOutgoingTypedLinks.Jsonize());

  }

  if(m_listIncomingTypedLinksHasBeenSet)
  {
   payload.WithObject("ListIncomingTypedLinks", m_listIncomingTypedLinks.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
