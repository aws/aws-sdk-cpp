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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ParameterMapEntry.h>
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
   * <p> Name of the parameter from the Review policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/PolicyParameter">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API PolicyParameter
  {
  public:
    PolicyParameter();
    PolicyParameter(Aws::Utils::Json::JsonView jsonValue);
    PolicyParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline PolicyParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline PolicyParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline PolicyParameter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> The list of values of the Parameter</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline PolicyParameter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline PolicyParameter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline PolicyParameter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline PolicyParameter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of values of the Parameter</p>
     */
    inline PolicyParameter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline const Aws::Vector<ParameterMapEntry>& GetMapEntries() const{ return m_mapEntries; }

    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline bool MapEntriesHasBeenSet() const { return m_mapEntriesHasBeenSet; }

    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline void SetMapEntries(const Aws::Vector<ParameterMapEntry>& value) { m_mapEntriesHasBeenSet = true; m_mapEntries = value; }

    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline void SetMapEntries(Aws::Vector<ParameterMapEntry>&& value) { m_mapEntriesHasBeenSet = true; m_mapEntries = std::move(value); }

    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline PolicyParameter& WithMapEntries(const Aws::Vector<ParameterMapEntry>& value) { SetMapEntries(value); return *this;}

    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline PolicyParameter& WithMapEntries(Aws::Vector<ParameterMapEntry>&& value) { SetMapEntries(std::move(value)); return *this;}

    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline PolicyParameter& AddMapEntries(const ParameterMapEntry& value) { m_mapEntriesHasBeenSet = true; m_mapEntries.push_back(value); return *this; }

    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline PolicyParameter& AddMapEntries(ParameterMapEntry&& value) { m_mapEntriesHasBeenSet = true; m_mapEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Aws::Vector<ParameterMapEntry> m_mapEntries;
    bool m_mapEntriesHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
