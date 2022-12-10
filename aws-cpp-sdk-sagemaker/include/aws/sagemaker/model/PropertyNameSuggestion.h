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
   * <p>A property name returned from a <code>GetSearchSuggestions</code> call that
   * specifies a value in the <code>PropertyNameQuery</code> field.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PropertyNameSuggestion">AWS
   * API Reference</a></p>
   */
  class PropertyNameSuggestion
  {
  public:
    AWS_SAGEMAKER_API PropertyNameSuggestion();
    AWS_SAGEMAKER_API PropertyNameSuggestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PropertyNameSuggestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }

    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }

    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }

    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }

    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }

    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline PropertyNameSuggestion& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}

    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline PropertyNameSuggestion& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}

    /**
     * <p>A suggested property name based on what you entered in the search textbox in
     * the Amazon SageMaker console.</p>
     */
    inline PropertyNameSuggestion& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}

  private:

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
