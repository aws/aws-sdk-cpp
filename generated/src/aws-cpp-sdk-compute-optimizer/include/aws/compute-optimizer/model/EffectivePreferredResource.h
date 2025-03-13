/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/PreferredResourceName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the effective preferred resources that Compute Optimizer considers
   * as rightsizing recommendation candidates. </p>  <p>Compute Optimizer only
   * supports Amazon EC2 instance types.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EffectivePreferredResource">AWS
   * API Reference</a></p>
   */
  class EffectivePreferredResource
  {
  public:
    AWS_COMPUTEOPTIMIZER_API EffectivePreferredResource() = default;
    AWS_COMPUTEOPTIMIZER_API EffectivePreferredResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EffectivePreferredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the preferred resource list. </p>
     */
    inline PreferredResourceName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(PreferredResourceName value) { m_nameHasBeenSet = true; m_name = value; }
    inline EffectivePreferredResource& WithName(PreferredResourceName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeList() const { return m_includeList; }
    inline bool IncludeListHasBeenSet() const { return m_includeListHasBeenSet; }
    template<typename IncludeListT = Aws::Vector<Aws::String>>
    void SetIncludeList(IncludeListT&& value) { m_includeListHasBeenSet = true; m_includeList = std::forward<IncludeListT>(value); }
    template<typename IncludeListT = Aws::Vector<Aws::String>>
    EffectivePreferredResource& WithIncludeList(IncludeListT&& value) { SetIncludeList(std::forward<IncludeListT>(value)); return *this;}
    template<typename IncludeListT = Aws::String>
    EffectivePreferredResource& AddIncludeList(IncludeListT&& value) { m_includeListHasBeenSet = true; m_includeList.emplace_back(std::forward<IncludeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEffectiveIncludeList() const { return m_effectiveIncludeList; }
    inline bool EffectiveIncludeListHasBeenSet() const { return m_effectiveIncludeListHasBeenSet; }
    template<typename EffectiveIncludeListT = Aws::Vector<Aws::String>>
    void SetEffectiveIncludeList(EffectiveIncludeListT&& value) { m_effectiveIncludeListHasBeenSet = true; m_effectiveIncludeList = std::forward<EffectiveIncludeListT>(value); }
    template<typename EffectiveIncludeListT = Aws::Vector<Aws::String>>
    EffectivePreferredResource& WithEffectiveIncludeList(EffectiveIncludeListT&& value) { SetEffectiveIncludeList(std::forward<EffectiveIncludeListT>(value)); return *this;}
    template<typename EffectiveIncludeListT = Aws::String>
    EffectivePreferredResource& AddEffectiveIncludeList(EffectiveIncludeListT&& value) { m_effectiveIncludeListHasBeenSet = true; m_effectiveIncludeList.emplace_back(std::forward<EffectiveIncludeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeList() const { return m_excludeList; }
    inline bool ExcludeListHasBeenSet() const { return m_excludeListHasBeenSet; }
    template<typename ExcludeListT = Aws::Vector<Aws::String>>
    void SetExcludeList(ExcludeListT&& value) { m_excludeListHasBeenSet = true; m_excludeList = std::forward<ExcludeListT>(value); }
    template<typename ExcludeListT = Aws::Vector<Aws::String>>
    EffectivePreferredResource& WithExcludeList(ExcludeListT&& value) { SetExcludeList(std::forward<ExcludeListT>(value)); return *this;}
    template<typename ExcludeListT = Aws::String>
    EffectivePreferredResource& AddExcludeList(ExcludeListT&& value) { m_excludeListHasBeenSet = true; m_excludeList.emplace_back(std::forward<ExcludeListT>(value)); return *this; }
    ///@}
  private:

    PreferredResourceName m_name{PreferredResourceName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeList;
    bool m_includeListHasBeenSet = false;

    Aws::Vector<Aws::String> m_effectiveIncludeList;
    bool m_effectiveIncludeListHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeList;
    bool m_excludeListHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
