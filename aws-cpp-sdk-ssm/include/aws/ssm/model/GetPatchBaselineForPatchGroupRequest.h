/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetPatchBaselineForPatchGroupRequest : public SSMRequest
  {
  public:
    GetPatchBaselineForPatchGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(Aws::String&& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}

  private:
    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
