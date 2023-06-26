/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>

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
   * <p>A reference value to compare Performance Insights metrics against to
   * determine if the metrics demonstrate anomalous behavior.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsReferenceScalar">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsReferenceScalar
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceScalar();
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceScalar(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsReferenceScalar& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reference value.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The reference value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The reference value.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The reference value.</p>
     */
    inline PerformanceInsightsReferenceScalar& WithValue(double value) { SetValue(value); return *this;}

  private:

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
