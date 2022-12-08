/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The value of a hyperparameter. Only one of <code>NumberValue</code> or
   * <code>StringValue</code> can be specified.</p> <p>This object is specified in
   * the <a>CreateTrialComponent</a> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentParameterValue">AWS
   * API Reference</a></p>
   */
  class TrialComponentParameterValue
  {
  public:
    AWS_SAGEMAKER_API TrialComponentParameterValue();
    AWS_SAGEMAKER_API TrialComponentParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline TrialComponentParameterValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline TrialComponentParameterValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The string value of a categorical hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>NumberValue</code> parameter.</p>
     */
    inline TrialComponentParameterValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>The numeric value of a numeric hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>StringValue</code> parameter.</p>
     */
    inline double GetNumberValue() const{ return m_numberValue; }

    /**
     * <p>The numeric value of a numeric hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>StringValue</code> parameter.</p>
     */
    inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }

    /**
     * <p>The numeric value of a numeric hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>StringValue</code> parameter.</p>
     */
    inline void SetNumberValue(double value) { m_numberValueHasBeenSet = true; m_numberValue = value; }

    /**
     * <p>The numeric value of a numeric hyperparameter. If you specify a value for
     * this parameter, you can't specify the <code>StringValue</code> parameter.</p>
     */
    inline TrialComponentParameterValue& WithNumberValue(double value) { SetNumberValue(value); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    double m_numberValue;
    bool m_numberValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
