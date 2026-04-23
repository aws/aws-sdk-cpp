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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchFilter.h>
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
   * <p>A set of patch filters, typically used for approval rules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchFilterGroup">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API PatchFilterGroup
  {
  public:
    PatchFilterGroup();
    PatchFilterGroup(Aws::Utils::Json::JsonView jsonValue);
    PatchFilterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline const Aws::Vector<PatchFilter>& GetPatchFilters() const{ return m_patchFilters; }

    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline bool PatchFiltersHasBeenSet() const { return m_patchFiltersHasBeenSet; }

    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline void SetPatchFilters(const Aws::Vector<PatchFilter>& value) { m_patchFiltersHasBeenSet = true; m_patchFilters = value; }

    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline void SetPatchFilters(Aws::Vector<PatchFilter>&& value) { m_patchFiltersHasBeenSet = true; m_patchFilters = std::move(value); }

    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline PatchFilterGroup& WithPatchFilters(const Aws::Vector<PatchFilter>& value) { SetPatchFilters(value); return *this;}

    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline PatchFilterGroup& WithPatchFilters(Aws::Vector<PatchFilter>&& value) { SetPatchFilters(std::move(value)); return *this;}

    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline PatchFilterGroup& AddPatchFilters(const PatchFilter& value) { m_patchFiltersHasBeenSet = true; m_patchFilters.push_back(value); return *this; }

    /**
     * <p>The set of patch filters that make up the group.</p>
     */
    inline PatchFilterGroup& AddPatchFilters(PatchFilter&& value) { m_patchFiltersHasBeenSet = true; m_patchFilters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PatchFilter> m_patchFilters;
    bool m_patchFiltersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
