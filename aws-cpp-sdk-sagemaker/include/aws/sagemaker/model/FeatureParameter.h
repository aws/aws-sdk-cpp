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
   * <p>A key-value pair that you specify to describe the feature.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FeatureParameter">AWS
   * API Reference</a></p>
   */
  class FeatureParameter
  {
  public:
    AWS_SAGEMAKER_API FeatureParameter();
    AWS_SAGEMAKER_API FeatureParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FeatureParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline FeatureParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline FeatureParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A key that must contain a value to describe the feature.</p>
     */
    inline FeatureParameter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value that belongs to a key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value that belongs to a key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that belongs to a key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that belongs to a key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value that belongs to a key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value that belongs to a key.</p>
     */
    inline FeatureParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value that belongs to a key.</p>
     */
    inline FeatureParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value that belongs to a key.</p>
     */
    inline FeatureParameter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
