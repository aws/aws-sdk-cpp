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
   * <p> The preference to control which resource type values are considered when
   * generating rightsizing recommendations. You can specify this preference as a
   * combination of include and exclude lists. You must specify either an
   * <code>includeList</code> or <code>excludeList</code>. If the preference is an
   * empty set of resource type values, an error occurs. For more information, see <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/rightsizing-preferences.html">
   * Rightsizing recommendation preferences</a> in the <i>Compute Optimizer User
   * Guide</i>. </p>  <ul> <li> <p>This preference is only available for the
   * Amazon EC2 instance and Auto Scaling group resource types.</p> </li> <li>
   * <p>Compute Optimizer only supports the customization of
   * <code>Ec2InstanceTypes</code>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/PreferredResource">AWS
   * API Reference</a></p>
   */
  class PreferredResource
  {
  public:
    AWS_COMPUTEOPTIMIZER_API PreferredResource() = default;
    AWS_COMPUTEOPTIMIZER_API PreferredResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API PreferredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of preferred resource to customize. </p>  <p>Compute
     * Optimizer only supports the customization of <code>Ec2InstanceTypes</code>.</p>
     * 
     */
    inline PreferredResourceName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(PreferredResourceName value) { m_nameHasBeenSet = true; m_name = value; }
    inline PreferredResource& WithName(PreferredResourceName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeList() const { return m_includeList; }
    inline bool IncludeListHasBeenSet() const { return m_includeListHasBeenSet; }
    template<typename IncludeListT = Aws::Vector<Aws::String>>
    void SetIncludeList(IncludeListT&& value) { m_includeListHasBeenSet = true; m_includeList = std::forward<IncludeListT>(value); }
    template<typename IncludeListT = Aws::Vector<Aws::String>>
    PreferredResource& WithIncludeList(IncludeListT&& value) { SetIncludeList(std::forward<IncludeListT>(value)); return *this;}
    template<typename IncludeListT = Aws::String>
    PreferredResource& AddIncludeList(IncludeListT&& value) { m_includeListHasBeenSet = true; m_includeList.emplace_back(std::forward<IncludeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeList() const { return m_excludeList; }
    inline bool ExcludeListHasBeenSet() const { return m_excludeListHasBeenSet; }
    template<typename ExcludeListT = Aws::Vector<Aws::String>>
    void SetExcludeList(ExcludeListT&& value) { m_excludeListHasBeenSet = true; m_excludeList = std::forward<ExcludeListT>(value); }
    template<typename ExcludeListT = Aws::Vector<Aws::String>>
    PreferredResource& WithExcludeList(ExcludeListT&& value) { SetExcludeList(std::forward<ExcludeListT>(value)); return *this;}
    template<typename ExcludeListT = Aws::String>
    PreferredResource& AddExcludeList(ExcludeListT&& value) { m_excludeListHasBeenSet = true; m_excludeList.emplace_back(std::forward<ExcludeListT>(value)); return *this; }
    ///@}
  private:

    PreferredResourceName m_name{PreferredResourceName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeList;
    bool m_includeListHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeList;
    bool m_excludeListHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
