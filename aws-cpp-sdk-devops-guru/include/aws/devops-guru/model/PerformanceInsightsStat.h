/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>A statistic in a Performance Insights collection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsStat">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsStat
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsStat();
    AWS_DEVOPSGURU_API PerformanceInsightsStat(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsStat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The statistic type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The statistic type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The statistic type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The statistic type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The statistic type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The statistic type.</p>
     */
    inline PerformanceInsightsStat& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The statistic type.</p>
     */
    inline PerformanceInsightsStat& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The statistic type.</p>
     */
    inline PerformanceInsightsStat& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value of the statistic.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the statistic.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the statistic.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the statistic.</p>
     */
    inline PerformanceInsightsStat& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
