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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Each slot type can have a set of values. Each enumeration value represents a
   * value the slot type can take. </p> <p>For example, a pizza ordering bot could
   * have a slot type that specifies the type of crust that the pizza should have.
   * The slot type could include the values </p> <ul> <li> <p>thick</p> </li> <li>
   * <p>thin</p> </li> <li> <p>stuffed</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/EnumerationValue">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API EnumerationValue
  {
  public:
    EnumerationValue();
    EnumerationValue(Aws::Utils::Json::JsonView jsonValue);
    EnumerationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the slot type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the slot type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the slot type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the slot type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the slot type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the slot type.</p>
     */
    inline EnumerationValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the slot type.</p>
     */
    inline EnumerationValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the slot type.</p>
     */
    inline EnumerationValue& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSynonyms() const{ return m_synonyms; }

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline bool SynonymsHasBeenSet() const { return m_synonymsHasBeenSet; }

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline void SetSynonyms(const Aws::Vector<Aws::String>& value) { m_synonymsHasBeenSet = true; m_synonyms = value; }

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline void SetSynonyms(Aws::Vector<Aws::String>&& value) { m_synonymsHasBeenSet = true; m_synonyms = std::move(value); }

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline EnumerationValue& WithSynonyms(const Aws::Vector<Aws::String>& value) { SetSynonyms(value); return *this;}

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline EnumerationValue& WithSynonyms(Aws::Vector<Aws::String>&& value) { SetSynonyms(std::move(value)); return *this;}

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline EnumerationValue& AddSynonyms(const Aws::String& value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(value); return *this; }

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline EnumerationValue& AddSynonyms(Aws::String&& value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline EnumerationValue& AddSynonyms(const char* value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(value); return *this; }

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::Vector<Aws::String> m_synonyms;
    bool m_synonymsHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
