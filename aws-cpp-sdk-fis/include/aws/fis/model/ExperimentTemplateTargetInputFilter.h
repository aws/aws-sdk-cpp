/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Specifies a filter used for the target resource input in an experiment
   * template.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/fis/latest/userguide/targets.html#target-filters">Resource
   * filters</a> in the <i>Fault Injection Simulator User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateTargetInputFilter">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplateTargetInputFilter
  {
  public:
    AWS_FIS_API ExperimentTemplateTargetInputFilter();
    AWS_FIS_API ExperimentTemplateTargetInputFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplateTargetInputFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute path for the filter.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The attribute path for the filter.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The attribute path for the filter.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The attribute path for the filter.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The attribute path for the filter.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The attribute path for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The attribute path for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The attribute path for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The attribute values for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The attribute values for the filter.</p>
     */
    inline ExperimentTemplateTargetInputFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
