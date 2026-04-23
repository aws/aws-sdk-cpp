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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The constraints that the administrator has put on the
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ParameterConstraints">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ParameterConstraints
  {
  public:
    ParameterConstraints();
    ParameterConstraints(Aws::Utils::Json::JsonView jsonValue);
    ParameterConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that the administrator has allowed for the parameter.</p>
     */
    inline ParameterConstraints& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
