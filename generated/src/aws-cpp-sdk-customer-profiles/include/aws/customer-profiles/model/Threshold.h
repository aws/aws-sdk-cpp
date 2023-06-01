/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/Operator.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The threshold for the calculated attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Threshold">AWS
   * API Reference</a></p>
   */
  class Threshold
  {
  public:
    AWS_CUSTOMERPROFILES_API Threshold();
    AWS_CUSTOMERPROFILES_API Threshold(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Threshold& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the threshold.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the threshold.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the threshold.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the threshold.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the threshold.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the threshold.</p>
     */
    inline Threshold& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the threshold.</p>
     */
    inline Threshold& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the threshold.</p>
     */
    inline Threshold& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The operator of the threshold.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator of the threshold.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator of the threshold.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator of the threshold.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator of the threshold.</p>
     */
    inline Threshold& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator of the threshold.</p>
     */
    inline Threshold& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
