﻿/*
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
#include <aws/ssm/model/Patch.h>
#include <aws/ssm/model/PatchStatus.h>
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
   * <p>The EffectivePatch structure defines metadata about a patch along with the
   * approval state of the patch in a particular patch baseline. The approval state
   * includes information about whether the patch is currently approved, due to be
   * approved by a rule, explicitly approved, or explicitly rejected and the date the
   * patch was or will be approved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/EffectivePatch">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API EffectivePatch
  {
  public:
    EffectivePatch();
    EffectivePatch(Aws::Utils::Json::JsonView jsonValue);
    EffectivePatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides metadata for a patch, including information such as the KB ID,
     * severity, classification and a URL for where more information can be obtained
     * about the patch.</p>
     */
    inline const Patch& GetPatch() const{ return m_patch; }

    /**
     * <p>Provides metadata for a patch, including information such as the KB ID,
     * severity, classification and a URL for where more information can be obtained
     * about the patch.</p>
     */
    inline void SetPatch(const Patch& value) { m_patchHasBeenSet = true; m_patch = value; }

    /**
     * <p>Provides metadata for a patch, including information such as the KB ID,
     * severity, classification and a URL for where more information can be obtained
     * about the patch.</p>
     */
    inline void SetPatch(Patch&& value) { m_patchHasBeenSet = true; m_patch = std::move(value); }

    /**
     * <p>Provides metadata for a patch, including information such as the KB ID,
     * severity, classification and a URL for where more information can be obtained
     * about the patch.</p>
     */
    inline EffectivePatch& WithPatch(const Patch& value) { SetPatch(value); return *this;}

    /**
     * <p>Provides metadata for a patch, including information such as the KB ID,
     * severity, classification and a URL for where more information can be obtained
     * about the patch.</p>
     */
    inline EffectivePatch& WithPatch(Patch&& value) { SetPatch(std::move(value)); return *this;}


    /**
     * <p>The status of the patch in a patch baseline. This includes information about
     * whether the patch is currently approved, due to be approved by a rule,
     * explicitly approved, or explicitly rejected and the date the patch was or will
     * be approved.</p>
     */
    inline const PatchStatus& GetPatchStatus() const{ return m_patchStatus; }

    /**
     * <p>The status of the patch in a patch baseline. This includes information about
     * whether the patch is currently approved, due to be approved by a rule,
     * explicitly approved, or explicitly rejected and the date the patch was or will
     * be approved.</p>
     */
    inline void SetPatchStatus(const PatchStatus& value) { m_patchStatusHasBeenSet = true; m_patchStatus = value; }

    /**
     * <p>The status of the patch in a patch baseline. This includes information about
     * whether the patch is currently approved, due to be approved by a rule,
     * explicitly approved, or explicitly rejected and the date the patch was or will
     * be approved.</p>
     */
    inline void SetPatchStatus(PatchStatus&& value) { m_patchStatusHasBeenSet = true; m_patchStatus = std::move(value); }

    /**
     * <p>The status of the patch in a patch baseline. This includes information about
     * whether the patch is currently approved, due to be approved by a rule,
     * explicitly approved, or explicitly rejected and the date the patch was or will
     * be approved.</p>
     */
    inline EffectivePatch& WithPatchStatus(const PatchStatus& value) { SetPatchStatus(value); return *this;}

    /**
     * <p>The status of the patch in a patch baseline. This includes information about
     * whether the patch is currently approved, due to be approved by a rule,
     * explicitly approved, or explicitly rejected and the date the patch was or will
     * be approved.</p>
     */
    inline EffectivePatch& WithPatchStatus(PatchStatus&& value) { SetPatchStatus(std::move(value)); return *this;}

  private:

    Patch m_patch;
    bool m_patchHasBeenSet;

    PatchStatus m_patchStatus;
    bool m_patchStatusHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
