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
   * <p>Defines the basic information about a patch baseline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchBaselineIdentity">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API PatchBaselineIdentity
  {
  public:
    PatchBaselineIdentity();
    PatchBaselineIdentity(const Aws::Utils::Json::JsonValue& jsonValue);
    PatchBaselineIdentity& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::move(value); }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineName() const{ return m_baselineName; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetBaselineName(const Aws::String& value) { m_baselineNameHasBeenSet = true; m_baselineName = value; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetBaselineName(Aws::String&& value) { m_baselineNameHasBeenSet = true; m_baselineName = std::move(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetBaselineName(const char* value) { m_baselineNameHasBeenSet = true; m_baselineName.assign(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineName(const Aws::String& value) { SetBaselineName(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineName(Aws::String&& value) { SetBaselineName(std::move(value)); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineName(const char* value) { SetBaselineName(value); return *this;}

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline const Aws::String& GetBaselineDescription() const{ return m_baselineDescription; }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline void SetBaselineDescription(const Aws::String& value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription = value; }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline void SetBaselineDescription(Aws::String&& value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription = std::move(value); }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline void SetBaselineDescription(const char* value) { m_baselineDescriptionHasBeenSet = true; m_baselineDescription.assign(value); }

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineDescription(const Aws::String& value) { SetBaselineDescription(value); return *this;}

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineDescription(Aws::String&& value) { SetBaselineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the patch baseline.</p>
     */
    inline PatchBaselineIdentity& WithBaselineDescription(const char* value) { SetBaselineDescription(value); return *this;}

    /**
     * <p>Whether this is the default baseline.</p>
     */
    inline bool GetDefaultBaseline() const{ return m_defaultBaseline; }

    /**
     * <p>Whether this is the default baseline.</p>
     */
    inline void SetDefaultBaseline(bool value) { m_defaultBaselineHasBeenSet = true; m_defaultBaseline = value; }

    /**
     * <p>Whether this is the default baseline.</p>
     */
    inline PatchBaselineIdentity& WithDefaultBaseline(bool value) { SetDefaultBaseline(value); return *this;}

  private:
    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet;
    Aws::String m_baselineName;
    bool m_baselineNameHasBeenSet;
    Aws::String m_baselineDescription;
    bool m_baselineDescriptionHasBeenSet;
    bool m_defaultBaseline;
    bool m_defaultBaselineHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
