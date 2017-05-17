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
#include <aws/ssm/model/PatchFilterGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines an approval rule for a patch baseline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchRule">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API PatchRule
  {
  public:
    PatchRule();
    PatchRule(const Aws::Utils::Json::JsonValue& jsonValue);
    PatchRule& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline const PatchFilterGroup& GetPatchFilterGroup() const{ return m_patchFilterGroup; }

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline void SetPatchFilterGroup(const PatchFilterGroup& value) { m_patchFilterGroupHasBeenSet = true; m_patchFilterGroup = value; }

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline void SetPatchFilterGroup(PatchFilterGroup&& value) { m_patchFilterGroupHasBeenSet = true; m_patchFilterGroup = std::move(value); }

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline PatchRule& WithPatchFilterGroup(const PatchFilterGroup& value) { SetPatchFilterGroup(value); return *this;}

    /**
     * <p>The patch filter group that defines the criteria for the rule.</p>
     */
    inline PatchRule& WithPatchFilterGroup(PatchFilterGroup&& value) { SetPatchFilterGroup(std::move(value)); return *this;}

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * the patch is marked as approved in the patch baseline.</p>
     */
    inline int GetApproveAfterDays() const{ return m_approveAfterDays; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * the patch is marked as approved in the patch baseline.</p>
     */
    inline void SetApproveAfterDays(int value) { m_approveAfterDaysHasBeenSet = true; m_approveAfterDays = value; }

    /**
     * <p>The number of days after the release date of each patch matched by the rule
     * the patch is marked as approved in the patch baseline.</p>
     */
    inline PatchRule& WithApproveAfterDays(int value) { SetApproveAfterDays(value); return *this;}

  private:
    PatchFilterGroup m_patchFilterGroup;
    bool m_patchFilterGroupHasBeenSet;
    int m_approveAfterDays;
    bool m_approveAfterDaysHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
