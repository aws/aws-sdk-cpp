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
    AWS_COMPUTEOPTIMIZER_API PreferredResource();
    AWS_COMPUTEOPTIMIZER_API PreferredResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API PreferredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of preferred resource to customize. </p>  <p>Compute
     * Optimizer only supports the customization of <code>Ec2InstanceTypes</code>.</p>
     * 
     */
    inline const PreferredResourceName& GetName() const{ return m_name; }

    /**
     * <p> The type of preferred resource to customize. </p>  <p>Compute
     * Optimizer only supports the customization of <code>Ec2InstanceTypes</code>.</p>
     * 
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The type of preferred resource to customize. </p>  <p>Compute
     * Optimizer only supports the customization of <code>Ec2InstanceTypes</code>.</p>
     * 
     */
    inline void SetName(const PreferredResourceName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The type of preferred resource to customize. </p>  <p>Compute
     * Optimizer only supports the customization of <code>Ec2InstanceTypes</code>.</p>
     * 
     */
    inline void SetName(PreferredResourceName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The type of preferred resource to customize. </p>  <p>Compute
     * Optimizer only supports the customization of <code>Ec2InstanceTypes</code>.</p>
     * 
     */
    inline PreferredResource& WithName(const PreferredResourceName& value) { SetName(value); return *this;}

    /**
     * <p> The type of preferred resource to customize. </p>  <p>Compute
     * Optimizer only supports the customization of <code>Ec2InstanceTypes</code>.</p>
     * 
     */
    inline PreferredResource& WithName(PreferredResourceName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeList() const{ return m_includeList; }

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline bool IncludeListHasBeenSet() const { return m_includeListHasBeenSet; }

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline void SetIncludeList(const Aws::Vector<Aws::String>& value) { m_includeListHasBeenSet = true; m_includeList = value; }

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline void SetIncludeList(Aws::Vector<Aws::String>&& value) { m_includeListHasBeenSet = true; m_includeList = std::move(value); }

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline PreferredResource& WithIncludeList(const Aws::Vector<Aws::String>& value) { SetIncludeList(value); return *this;}

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline PreferredResource& WithIncludeList(Aws::Vector<Aws::String>&& value) { SetIncludeList(std::move(value)); return *this;}

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline PreferredResource& AddIncludeList(const Aws::String& value) { m_includeListHasBeenSet = true; m_includeList.push_back(value); return *this; }

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline PreferredResource& AddIncludeList(Aws::String&& value) { m_includeListHasBeenSet = true; m_includeList.push_back(std::move(value)); return *this; }

    /**
     * <p> The preferred resource type values to include in the recommendation
     * candidates. You can specify the exact resource type value, such as m5.large, or
     * use wild card expressions, such as m5. If this isn’t specified, all supported
     * resources are included by default. You can specify up to 1000 values in this
     * list. </p>
     */
    inline PreferredResource& AddIncludeList(const char* value) { m_includeListHasBeenSet = true; m_includeList.push_back(value); return *this; }


    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeList() const{ return m_excludeList; }

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline bool ExcludeListHasBeenSet() const { return m_excludeListHasBeenSet; }

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline void SetExcludeList(const Aws::Vector<Aws::String>& value) { m_excludeListHasBeenSet = true; m_excludeList = value; }

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline void SetExcludeList(Aws::Vector<Aws::String>&& value) { m_excludeListHasBeenSet = true; m_excludeList = std::move(value); }

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline PreferredResource& WithExcludeList(const Aws::Vector<Aws::String>& value) { SetExcludeList(value); return *this;}

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline PreferredResource& WithExcludeList(Aws::Vector<Aws::String>&& value) { SetExcludeList(std::move(value)); return *this;}

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline PreferredResource& AddExcludeList(const Aws::String& value) { m_excludeListHasBeenSet = true; m_excludeList.push_back(value); return *this; }

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline PreferredResource& AddExcludeList(Aws::String&& value) { m_excludeListHasBeenSet = true; m_excludeList.push_back(std::move(value)); return *this; }

    /**
     * <p> The preferred resource type values to exclude from the recommendation
     * candidates. If this isn’t specified, all supported resources are included by
     * default. You can specify up to 1000 values in this list. </p>
     */
    inline PreferredResource& AddExcludeList(const char* value) { m_excludeListHasBeenSet = true; m_excludeList.push_back(value); return *this; }

  private:

    PreferredResourceName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeList;
    bool m_includeListHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeList;
    bool m_excludeListHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
