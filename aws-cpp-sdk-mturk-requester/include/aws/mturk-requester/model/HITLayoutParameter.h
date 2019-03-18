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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The HITLayoutParameter data structure defines parameter values used with a
   * HITLayout. A HITLayout is a reusable Amazon Mechanical Turk project template
   * used to provide Human Intelligence Task (HIT) question data for CreateHIT.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/HITLayoutParameter">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API HITLayoutParameter
  {
  public:
    HITLayoutParameter();
    HITLayoutParameter(Aws::Utils::Json::JsonView jsonValue);
    HITLayoutParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline HITLayoutParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline HITLayoutParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline HITLayoutParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline HITLayoutParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline HITLayoutParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline HITLayoutParameter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
