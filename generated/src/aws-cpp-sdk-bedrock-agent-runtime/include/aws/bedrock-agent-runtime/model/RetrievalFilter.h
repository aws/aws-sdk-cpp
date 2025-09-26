/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FilterAttribute.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Specifies the filters to use on the metadata attributes in the knowledge base
   * data sources before returning results. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
   * configurations</a>. See the examples below to see how to use these filters.</p>
   * <p>This data type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_RequestSyntax">Retrieve
   * request</a> – in the <code>filter</code> field</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request</a> – in the <code>filter</code> field</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalFilter">AWS
   * API Reference</a></p>
   */
  class RetrievalFilter
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalFilter() = default;
    AWS_BEDROCKAGENTRUNTIME_API RetrievalFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value matches the
     * <code>value</code> in this object.</p> <p>The following example would return
     * data sources with an <code>animal</code> attribute whose value is
     * <code>cat</code>:</p> <p> <code>"equals": { "key": "animal", "value": "cat"
     * }</code> </p>
     */
    inline const FilterAttribute& GetEquals() const { return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    template<typename EqualsT = FilterAttribute>
    void SetEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals = std::forward<EqualsT>(value); }
    template<typename EqualsT = FilterAttribute>
    RetrievalFilter& WithEquals(EqualsT&& value) { SetEquals(std::forward<EqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned when:</p> <ul> <li> <p>It contains a
     * metadata attribute whose name matches the <code>key</code> and whose value
     * doesn't match the <code>value</code> in this object.</p> </li> <li> <p>The key
     * is not present in the document.</p> </li> </ul> <p>The following example would
     * return data sources that don't contain an <code>animal</code> attribute whose
     * value is <code>cat</code>.</p> <p> <code>"notEquals": { "key": "animal",
     * "value": "cat" }</code> </p>
     */
    inline const FilterAttribute& GetNotEquals() const { return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    template<typename NotEqualsT = FilterAttribute>
    void SetNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::forward<NotEqualsT>(value); }
    template<typename NotEqualsT = FilterAttribute>
    RetrievalFilter& WithNotEquals(NotEqualsT&& value) { SetNotEquals(std::forward<NotEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value is greater than the
     * <code>value</code> in this object.</p> <p>The following example would return
     * data sources with an <code>year</code> attribute whose value is greater than
     * <code>1989</code>:</p> <p> <code>"greaterThan": { "key": "year", "value": 1989
     * }</code> </p>
     */
    inline const FilterAttribute& GetGreaterThan() const { return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    template<typename GreaterThanT = FilterAttribute>
    void SetGreaterThan(GreaterThanT&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::forward<GreaterThanT>(value); }
    template<typename GreaterThanT = FilterAttribute>
    RetrievalFilter& WithGreaterThan(GreaterThanT&& value) { SetGreaterThan(std::forward<GreaterThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value is greater than or equal
     * to the <code>value</code> in this object.</p> <p>The following example would
     * return data sources with an <code>year</code> attribute whose value is greater
     * than or equal to <code>1989</code>:</p> <p> <code>"greaterThanOrEquals": {
     * "key": "year", "value": 1989 }</code> </p>
     */
    inline const FilterAttribute& GetGreaterThanOrEquals() const { return m_greaterThanOrEquals; }
    inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }
    template<typename GreaterThanOrEqualsT = FilterAttribute>
    void SetGreaterThanOrEquals(GreaterThanOrEqualsT&& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = std::forward<GreaterThanOrEqualsT>(value); }
    template<typename GreaterThanOrEqualsT = FilterAttribute>
    RetrievalFilter& WithGreaterThanOrEquals(GreaterThanOrEqualsT&& value) { SetGreaterThanOrEquals(std::forward<GreaterThanOrEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value is less than the
     * <code>value</code> in this object.</p> <p>The following example would return
     * data sources with an <code>year</code> attribute whose value is less than to
     * <code>1989</code>.</p> <p> <code>"lessThan": { "key": "year", "value": 1989
     * }</code> </p>
     */
    inline const FilterAttribute& GetLessThan() const { return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    template<typename LessThanT = FilterAttribute>
    void SetLessThan(LessThanT&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::forward<LessThanT>(value); }
    template<typename LessThanT = FilterAttribute>
    RetrievalFilter& WithLessThan(LessThanT&& value) { SetLessThan(std::forward<LessThanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value is less than or equal to
     * the <code>value</code> in this object.</p> <p>The following example would return
     * data sources with an <code>year</code> attribute whose value is less than or
     * equal to <code>1989</code>.</p> <p> <code>"lessThanOrEquals": { "key": "year",
     * "value": 1989 }</code> </p>
     */
    inline const FilterAttribute& GetLessThanOrEquals() const { return m_lessThanOrEquals; }
    inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }
    template<typename LessThanOrEqualsT = FilterAttribute>
    void SetLessThanOrEquals(LessThanOrEqualsT&& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = std::forward<LessThanOrEqualsT>(value); }
    template<typename LessThanOrEqualsT = FilterAttribute>
    RetrievalFilter& WithLessThanOrEquals(LessThanOrEqualsT&& value) { SetLessThanOrEquals(std::forward<LessThanOrEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value is in the list specified
     * in the <code>value</code> in this object.</p> <p>The following example would
     * return data sources with an <code>animal</code> attribute that is either
     * <code>cat</code> or <code>dog</code>:</p> <p> <code>"in": { "key": "animal",
     * "value": ["cat", "dog"] }</code> </p>
     */
    inline const FilterAttribute& GetIn() const { return m_in; }
    inline bool InHasBeenSet() const { return m_inHasBeenSet; }
    template<typename InT = FilterAttribute>
    void SetIn(InT&& value) { m_inHasBeenSet = true; m_in = std::forward<InT>(value); }
    template<typename InT = FilterAttribute>
    RetrievalFilter& WithIn(InT&& value) { SetIn(std::forward<InT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value isn't in the list
     * specified in the <code>value</code> in this object.</p> <p>The following example
     * would return data sources whose <code>animal</code> attribute is neither
     * <code>cat</code> nor <code>dog</code>.</p> <p> <code>"notIn": { "key": "animal",
     * "value": ["cat", "dog"] }</code> </p>
     */
    inline const FilterAttribute& GetNotIn() const { return m_notIn; }
    inline bool NotInHasBeenSet() const { return m_notInHasBeenSet; }
    template<typename NotInT = FilterAttribute>
    void SetNotIn(NotInT&& value) { m_notInHasBeenSet = true; m_notIn = std::forward<NotInT>(value); }
    template<typename NotInT = FilterAttribute>
    RetrievalFilter& WithNotIn(NotInT&& value) { SetNotIn(std::forward<NotInT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value starts with the
     * <code>value</code> in this object. This filter is currently only supported for
     * Amazon OpenSearch Serverless vector stores.</p> <p>The following example would
     * return data sources with an <code>animal</code> attribute starts with
     * <code>ca</code> (for example, <code>cat</code> or <code>camel</code>).</p> <p>
     * <code>"startsWith": { "key": "animal", "value": "ca" }</code> </p>
     */
    inline const FilterAttribute& GetStartsWith() const { return m_startsWith; }
    inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }
    template<typename StartsWithT = FilterAttribute>
    void SetStartsWith(StartsWithT&& value) { m_startsWithHasBeenSet = true; m_startsWith = std::forward<StartsWithT>(value); }
    template<typename StartsWithT = FilterAttribute>
    RetrievalFilter& WithStartsWith(StartsWithT&& value) { SetStartsWith(std::forward<StartsWithT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value is a list that contains
     * the <code>value</code> as one of its members.</p> <p>The following example would
     * return data sources with an <code>animals</code> attribute that is a list
     * containing a <code>cat</code> member (for example <code>["dog",
     * "cat"]</code>).</p> <p> <code>"listContains": { "key": "animals", "value": "cat"
     * }</code> </p>
     */
    inline const FilterAttribute& GetListContains() const { return m_listContains; }
    inline bool ListContainsHasBeenSet() const { return m_listContainsHasBeenSet; }
    template<typename ListContainsT = FilterAttribute>
    void SetListContains(ListContainsT&& value) { m_listContainsHasBeenSet = true; m_listContains = std::forward<ListContainsT>(value); }
    template<typename ListContainsT = FilterAttribute>
    RetrievalFilter& WithListContains(ListContainsT&& value) { SetListContains(std::forward<ListContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if they contain a metadata attribute
     * whose name matches the <code>key</code> and whose value is one of the
     * following:</p> <ul> <li> <p>A string that contains the <code>value</code> as a
     * substring. The following example would return data sources with an
     * <code>animal</code> attribute that contains the substring <code>at</code> (for
     * example <code>cat</code>).</p> <p> <code>"stringContains": { "key": "animal",
     * "value": "at" }</code> </p> </li> <li> <p>A list with a member that contains the
     * <code>value</code> as a substring. The following example would return data
     * sources with an <code>animals</code> attribute that is a list containing a
     * member that contains the substring <code>at</code> (for example <code>["dog",
     * "cat"]</code>).</p> <p> <code>"stringContains": { "key": "animals", "value":
     * "at" }</code> </p> </li> </ul>
     */
    inline const FilterAttribute& GetStringContains() const { return m_stringContains; }
    inline bool StringContainsHasBeenSet() const { return m_stringContainsHasBeenSet; }
    template<typename StringContainsT = FilterAttribute>
    void SetStringContains(StringContainsT&& value) { m_stringContainsHasBeenSet = true; m_stringContains = std::forward<StringContainsT>(value); }
    template<typename StringContainsT = FilterAttribute>
    RetrievalFilter& WithStringContains(StringContainsT&& value) { SetStringContains(std::forward<StringContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if their metadata attributes fulfill
     * all the filter conditions inside this list.</p>
     */
    inline const Aws::Vector<RetrievalFilter>& GetAndAll() const { return m_andAll; }
    inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }
    template<typename AndAllT = Aws::Vector<RetrievalFilter>>
    void SetAndAll(AndAllT&& value) { m_andAllHasBeenSet = true; m_andAll = std::forward<AndAllT>(value); }
    template<typename AndAllT = Aws::Vector<RetrievalFilter>>
    RetrievalFilter& WithAndAll(AndAllT&& value) { SetAndAll(std::forward<AndAllT>(value)); return *this;}
    template<typename AndAllT = RetrievalFilter>
    RetrievalFilter& AddAndAll(AndAllT&& value) { m_andAllHasBeenSet = true; m_andAll.emplace_back(std::forward<AndAllT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Knowledge base data sources are returned if their metadata attributes fulfill
     * at least one of the filter conditions inside this list.</p>
     */
    inline const Aws::Vector<RetrievalFilter>& GetOrAll() const { return m_orAll; }
    inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }
    template<typename OrAllT = Aws::Vector<RetrievalFilter>>
    void SetOrAll(OrAllT&& value) { m_orAllHasBeenSet = true; m_orAll = std::forward<OrAllT>(value); }
    template<typename OrAllT = Aws::Vector<RetrievalFilter>>
    RetrievalFilter& WithOrAll(OrAllT&& value) { SetOrAll(std::forward<OrAllT>(value)); return *this;}
    template<typename OrAllT = RetrievalFilter>
    RetrievalFilter& AddOrAll(OrAllT&& value) { m_orAllHasBeenSet = true; m_orAll.emplace_back(std::forward<OrAllT>(value)); return *this; }
    ///@}
  private:

    FilterAttribute m_equals;
    bool m_equalsHasBeenSet = false;

    FilterAttribute m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    FilterAttribute m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    FilterAttribute m_greaterThanOrEquals;
    bool m_greaterThanOrEqualsHasBeenSet = false;

    FilterAttribute m_lessThan;
    bool m_lessThanHasBeenSet = false;

    FilterAttribute m_lessThanOrEquals;
    bool m_lessThanOrEqualsHasBeenSet = false;

    FilterAttribute m_in;
    bool m_inHasBeenSet = false;

    FilterAttribute m_notIn;
    bool m_notInHasBeenSet = false;

    FilterAttribute m_startsWith;
    bool m_startsWithHasBeenSet = false;

    FilterAttribute m_listContains;
    bool m_listContainsHasBeenSet = false;

    FilterAttribute m_stringContains;
    bool m_stringContainsHasBeenSet = false;

    Aws::Vector<RetrievalFilter> m_andAll;
    bool m_andAllHasBeenSet = false;

    Aws::Vector<RetrievalFilter> m_orAll;
    bool m_orAllHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
