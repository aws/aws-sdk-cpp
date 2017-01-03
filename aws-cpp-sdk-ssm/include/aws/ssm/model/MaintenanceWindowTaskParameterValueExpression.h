﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines the values for a task parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowTaskParameterValueExpression">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API MaintenanceWindowTaskParameterValueExpression
  {
  public:
    MaintenanceWindowTaskParameterValueExpression();
    MaintenanceWindowTaskParameterValueExpression(const Aws::Utils::Json::JsonValue& jsonValue);
    MaintenanceWindowTaskParameterValueExpression& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline MaintenanceWindowTaskParameterValueExpression& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline MaintenanceWindowTaskParameterValueExpression& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(value); return *this;}

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline MaintenanceWindowTaskParameterValueExpression& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline MaintenanceWindowTaskParameterValueExpression& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>This field contains an array of 0 or more strings, each 1 to 255 characters
     * in length.</p>
     */
    inline MaintenanceWindowTaskParameterValueExpression& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
