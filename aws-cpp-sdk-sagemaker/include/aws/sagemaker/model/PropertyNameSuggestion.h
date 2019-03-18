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
  class AWS_SAGEMAKER_API PropertyNameSuggestion
  {
  public:
    PropertyNameSuggestion();
    PropertyNameSuggestion(Aws::Utils::Json::JsonView jsonValue);
    PropertyNameSuggestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_propertyNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
