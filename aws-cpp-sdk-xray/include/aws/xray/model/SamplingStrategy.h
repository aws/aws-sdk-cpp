/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/SamplingStrategyName.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>The name and value of a sampling rule to apply to a trace
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingStrategy">AWS
   * API Reference</a></p>
   */
  class SamplingStrategy
  {
  public:
    AWS_XRAY_API SamplingStrategy();
    AWS_XRAY_API SamplingStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a sampling rule.</p>
     */
    inline const SamplingStrategyName& GetName() const{ return m_name; }

    /**
     * <p>The name of a sampling rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a sampling rule.</p>
     */
    inline void SetName(const SamplingStrategyName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a sampling rule.</p>
     */
    inline void SetName(SamplingStrategyName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a sampling rule.</p>
     */
    inline SamplingStrategy& WithName(const SamplingStrategyName& value) { SetName(value); return *this;}

    /**
     * <p>The name of a sampling rule.</p>
     */
    inline SamplingStrategy& WithName(SamplingStrategyName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of a sampling rule.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of a sampling rule.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a sampling rule.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a sampling rule.</p>
     */
    inline SamplingStrategy& WithValue(double value) { SetValue(value); return *this;}

  private:

    SamplingStrategyName m_name;
    bool m_nameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
