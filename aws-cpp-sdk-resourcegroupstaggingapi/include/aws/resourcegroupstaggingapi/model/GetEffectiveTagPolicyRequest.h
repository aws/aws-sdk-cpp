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

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API GetEffectiveTagPolicyRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    GetEffectiveTagPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEffectiveTagPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline GetEffectiveTagPolicyRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline GetEffectiveTagPolicyRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the organization root or account whose tag policy
     * you want returned. </p>
     */
    inline GetEffectiveTagPolicyRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}

  private:

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
