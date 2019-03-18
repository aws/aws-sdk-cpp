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
   * <p>A type of <code>SuggestionQuery</code>. A suggestion query for retrieving
   * property names that match the specified hint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PropertyNameQuery">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API PropertyNameQuery
  {
  public:
    PropertyNameQuery();
    PropertyNameQuery(Aws::Utils::Json::JsonView jsonValue);
    PropertyNameQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline const Aws::String& GetPropertyNameHint() const{ return m_propertyNameHint; }

    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline bool PropertyNameHintHasBeenSet() const { return m_propertyNameHintHasBeenSet; }

    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline void SetPropertyNameHint(const Aws::String& value) { m_propertyNameHintHasBeenSet = true; m_propertyNameHint = value; }

    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline void SetPropertyNameHint(Aws::String&& value) { m_propertyNameHintHasBeenSet = true; m_propertyNameHint = std::move(value); }

    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline void SetPropertyNameHint(const char* value) { m_propertyNameHintHasBeenSet = true; m_propertyNameHint.assign(value); }

    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline PropertyNameQuery& WithPropertyNameHint(const Aws::String& value) { SetPropertyNameHint(value); return *this;}

    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline PropertyNameQuery& WithPropertyNameHint(Aws::String&& value) { SetPropertyNameHint(std::move(value)); return *this;}

    /**
     * <p>Text that is part of a property's name. The property names of hyperparameter,
     * metric, and tag key names that begin with the specified text in the
     * <code>PropertyNameHint</code>.</p>
     */
    inline PropertyNameQuery& WithPropertyNameHint(const char* value) { SetPropertyNameHint(value); return *this;}

  private:

    Aws::String m_propertyNameHint;
    bool m_propertyNameHintHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
