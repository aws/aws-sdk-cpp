/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EnumerationValue
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API EnumerationValue() = default;
    AWS_LEXMODELBUILDINGSERVICE_API EnumerationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API EnumerationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the slot type.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    EnumerationValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional values related to the slot type value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSynonyms() const { return m_synonyms; }
    inline bool SynonymsHasBeenSet() const { return m_synonymsHasBeenSet; }
    template<typename SynonymsT = Aws::Vector<Aws::String>>
    void SetSynonyms(SynonymsT&& value) { m_synonymsHasBeenSet = true; m_synonyms = std::forward<SynonymsT>(value); }
    template<typename SynonymsT = Aws::Vector<Aws::String>>
    EnumerationValue& WithSynonyms(SynonymsT&& value) { SetSynonyms(std::forward<SynonymsT>(value)); return *this;}
    template<typename SynonymsT = Aws::String>
    EnumerationValue& AddSynonyms(SynonymsT&& value) { m_synonymsHasBeenSet = true; m_synonyms.emplace_back(std::forward<SynonymsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<Aws::String> m_synonyms;
    bool m_synonymsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
