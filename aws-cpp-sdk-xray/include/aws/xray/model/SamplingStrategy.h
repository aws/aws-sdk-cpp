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
  class AWS_XRAY_API SamplingStrategy
  {
  public:
    SamplingStrategy();
    SamplingStrategy(Aws::Utils::Json::JsonView jsonValue);
    SamplingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_nameHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
