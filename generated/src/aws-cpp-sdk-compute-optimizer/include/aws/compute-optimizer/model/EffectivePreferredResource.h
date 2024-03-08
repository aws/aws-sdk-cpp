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
    AWS_COMPUTEOPTIMIZER_API EffectivePreferredResource();
    AWS_COMPUTEOPTIMIZER_API EffectivePreferredResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API EffectivePreferredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the preferred resource list. </p>
     */
    inline const PreferredResourceName& GetName() const{ return m_name; }

    /**
     * <p> The name of the preferred resource list. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the preferred resource list. </p>
     */
    inline void SetName(const PreferredResourceName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the preferred resource list. </p>
     */
    inline void SetName(PreferredResourceName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the preferred resource list. </p>
     */
    inline EffectivePreferredResource& WithName(const PreferredResourceName& value) { SetName(value); return *this;}

    /**
     * <p> The name of the preferred resource list. </p>
     */
    inline EffectivePreferredResource& WithName(PreferredResourceName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeList() const{ return m_includeList; }

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline bool IncludeListHasBeenSet() const { return m_includeListHasBeenSet; }

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline void SetIncludeList(const Aws::Vector<Aws::String>& value) { m_includeListHasBeenSet = true; m_includeList = value; }

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline void SetIncludeList(Aws::Vector<Aws::String>&& value) { m_includeListHasBeenSet = true; m_includeList = std::move(value); }

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& WithIncludeList(const Aws::Vector<Aws::String>& value) { SetIncludeList(value); return *this;}

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& WithIncludeList(Aws::Vector<Aws::String>&& value) { SetIncludeList(std::move(value)); return *this;}

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& AddIncludeList(const Aws::String& value) { m_includeListHasBeenSet = true; m_includeList.push_back(value); return *this; }

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& AddIncludeList(Aws::String&& value) { m_includeListHasBeenSet = true; m_includeList.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of preferred resource values that you want considered as
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& AddIncludeList(const char* value) { m_includeListHasBeenSet = true; m_includeList.push_back(value); return *this; }


    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEffectiveIncludeList() const{ return m_effectiveIncludeList; }

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline bool EffectiveIncludeListHasBeenSet() const { return m_effectiveIncludeListHasBeenSet; }

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline void SetEffectiveIncludeList(const Aws::Vector<Aws::String>& value) { m_effectiveIncludeListHasBeenSet = true; m_effectiveIncludeList = value; }

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline void SetEffectiveIncludeList(Aws::Vector<Aws::String>&& value) { m_effectiveIncludeListHasBeenSet = true; m_effectiveIncludeList = std::move(value); }

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline EffectivePreferredResource& WithEffectiveIncludeList(const Aws::Vector<Aws::String>& value) { SetEffectiveIncludeList(value); return *this;}

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline EffectivePreferredResource& WithEffectiveIncludeList(Aws::Vector<Aws::String>&& value) { SetEffectiveIncludeList(std::move(value)); return *this;}

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline EffectivePreferredResource& AddEffectiveIncludeList(const Aws::String& value) { m_effectiveIncludeListHasBeenSet = true; m_effectiveIncludeList.push_back(value); return *this; }

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline EffectivePreferredResource& AddEffectiveIncludeList(Aws::String&& value) { m_effectiveIncludeListHasBeenSet = true; m_effectiveIncludeList.push_back(std::move(value)); return *this; }

    /**
     * <p> The expanded version of your preferred resource's include list. </p>
     */
    inline EffectivePreferredResource& AddEffectiveIncludeList(const char* value) { m_effectiveIncludeListHasBeenSet = true; m_effectiveIncludeList.push_back(value); return *this; }


    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeList() const{ return m_excludeList; }

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline bool ExcludeListHasBeenSet() const { return m_excludeListHasBeenSet; }

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline void SetExcludeList(const Aws::Vector<Aws::String>& value) { m_excludeListHasBeenSet = true; m_excludeList = value; }

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline void SetExcludeList(Aws::Vector<Aws::String>&& value) { m_excludeListHasBeenSet = true; m_excludeList = std::move(value); }

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& WithExcludeList(const Aws::Vector<Aws::String>& value) { SetExcludeList(value); return *this;}

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& WithExcludeList(Aws::Vector<Aws::String>&& value) { SetExcludeList(std::move(value)); return *this;}

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& AddExcludeList(const Aws::String& value) { m_excludeListHasBeenSet = true; m_excludeList.push_back(value); return *this; }

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& AddExcludeList(Aws::String&& value) { m_excludeListHasBeenSet = true; m_excludeList.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of preferred resources values that you want excluded from
     * rightsizing recommendation candidates. </p>
     */
    inline EffectivePreferredResource& AddExcludeList(const char* value) { m_excludeListHasBeenSet = true; m_excludeList.push_back(value); return *this; }

  private:

    PreferredResourceName m_name;
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
