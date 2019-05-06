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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPatchBaselineForPatchGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }

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
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}


    /**
     * <p>Returns he operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Returns he operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>Returns he operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Returns he operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Returns he operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline GetPatchBaselineForPatchGroupRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Returns he operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline GetPatchBaselineForPatchGroupRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}

  private:

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
