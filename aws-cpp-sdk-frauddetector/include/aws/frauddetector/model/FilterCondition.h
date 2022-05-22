/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> A conditional statement for filtering a list of past predictions.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/FilterCondition">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API FilterCondition
  {
  public:
    FilterCondition();
    FilterCondition(Aws::Utils::Json::JsonView jsonValue);
    FilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline FilterCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline FilterCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> A statement containing a resource property and a value to specify filter
     * condition. </p>
     */
    inline FilterCondition& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
