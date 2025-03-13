/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that computes an arithmetic expression using the message's
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/MathActivity">AWS
   * API Reference</a></p>
   */
  class MathActivity
  {
  public:
    AWS_IOTANALYTICS_API MathActivity() = default;
    AWS_IOTANALYTICS_API MathActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API MathActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the math activity.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MathActivity& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute that contains the result of the math operation.</p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    MathActivity& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that uses one or more existing attributes and must return an
     * integer value.</p>
     */
    inline const Aws::String& GetMath() const { return m_math; }
    inline bool MathHasBeenSet() const { return m_mathHasBeenSet; }
    template<typename MathT = Aws::String>
    void SetMath(MathT&& value) { m_mathHasBeenSet = true; m_math = std::forward<MathT>(value); }
    template<typename MathT = Aws::String>
    MathActivity& WithMath(MathT&& value) { SetMath(std::forward<MathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next activity in the pipeline.</p>
     */
    inline const Aws::String& GetNext() const { return m_next; }
    inline bool NextHasBeenSet() const { return m_nextHasBeenSet; }
    template<typename NextT = Aws::String>
    void SetNext(NextT&& value) { m_nextHasBeenSet = true; m_next = std::forward<NextT>(value); }
    template<typename NextT = Aws::String>
    MathActivity& WithNext(NextT&& value) { SetNext(std::forward<NextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_math;
    bool m_mathHasBeenSet = false;

    Aws::String m_next;
    bool m_nextHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
