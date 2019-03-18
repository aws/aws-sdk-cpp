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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/SortValue.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>An object representing a sort criteria. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Sort">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API Sort
  {
  public:
    Sort();
    Sort(Aws::Utils::Json::JsonView jsonValue);
    Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort key of a sort object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline Sort& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline Sort& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The sort key of a sort object.</p>
     */
    inline Sort& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The sort value of a sort object.</p>
     */
    inline const SortValue& GetValue() const{ return m_value; }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline void SetValue(const SortValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline void SetValue(SortValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline Sort& WithValue(const SortValue& value) { SetValue(value); return *this;}

    /**
     * <p>The sort value of a sort object.</p>
     */
    inline Sort& WithValue(SortValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    SortValue m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
