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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchBaselineIdentity.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>The mapping between a patch group and the patch baseline the patch group is
   * registered with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchGroupPatchBaselineMapping">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API PatchGroupPatchBaselineMapping
  {
  public:
    PatchGroupPatchBaselineMapping();
    PatchGroupPatchBaselineMapping(Aws::Utils::Json::JsonView jsonValue);
    PatchGroupPatchBaselineMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline PatchGroupPatchBaselineMapping& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline PatchGroupPatchBaselineMapping& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline PatchGroupPatchBaselineMapping& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}


    /**
     * <p>The patch baseline the patch group is registered with.</p>
     */
    inline const PatchBaselineIdentity& GetBaselineIdentity() const{ return m_baselineIdentity; }

    /**
     * <p>The patch baseline the patch group is registered with.</p>
     */
    inline bool BaselineIdentityHasBeenSet() const { return m_baselineIdentityHasBeenSet; }

    /**
     * <p>The patch baseline the patch group is registered with.</p>
     */
    inline void SetBaselineIdentity(const PatchBaselineIdentity& value) { m_baselineIdentityHasBeenSet = true; m_baselineIdentity = value; }

    /**
     * <p>The patch baseline the patch group is registered with.</p>
     */
    inline void SetBaselineIdentity(PatchBaselineIdentity&& value) { m_baselineIdentityHasBeenSet = true; m_baselineIdentity = std::move(value); }

    /**
     * <p>The patch baseline the patch group is registered with.</p>
     */
    inline PatchGroupPatchBaselineMapping& WithBaselineIdentity(const PatchBaselineIdentity& value) { SetBaselineIdentity(value); return *this;}

    /**
     * <p>The patch baseline the patch group is registered with.</p>
     */
    inline PatchGroupPatchBaselineMapping& WithBaselineIdentity(PatchBaselineIdentity&& value) { SetBaselineIdentity(std::move(value)); return *this;}

  private:

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet;

    PatchBaselineIdentity m_baselineIdentity;
    bool m_baselineIdentityHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
