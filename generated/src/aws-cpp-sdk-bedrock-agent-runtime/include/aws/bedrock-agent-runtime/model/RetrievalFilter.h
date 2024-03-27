/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FilterAttribute.h>
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
   * configurations</a>.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
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
    AWS_BEDROCKAGENTRUNTIME_API RetrievalFilter();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline const Aws::Vector<RetrievalFilter>& GetAndAll() const{ return m_andAll; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline void SetAndAll(const Aws::Vector<RetrievalFilter>& value) { m_andAllHasBeenSet = true; m_andAll = value; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline void SetAndAll(Aws::Vector<RetrievalFilter>&& value) { m_andAllHasBeenSet = true; m_andAll = std::move(value); }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& WithAndAll(const Aws::Vector<RetrievalFilter>& value) { SetAndAll(value); return *this;}

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& WithAndAll(Aws::Vector<RetrievalFilter>&& value) { SetAndAll(std::move(value)); return *this;}

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& AddAndAll(const RetrievalFilter& value) { m_andAllHasBeenSet = true; m_andAll.push_back(value); return *this; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill all the filter
     * conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& AddAndAll(RetrievalFilter&& value) { m_andAllHasBeenSet = true; m_andAll.push_back(std::move(value)); return *this; }


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value matches the <code>value</code> in
     * this object are returned.</p>
     */
    inline const FilterAttribute& GetEquals() const{ return m_equals; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value matches the <code>value</code> in
     * this object are returned.</p>
     */
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value matches the <code>value</code> in
     * this object are returned.</p>
     */
    inline void SetEquals(const FilterAttribute& value) { m_equalsHasBeenSet = true; m_equals = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value matches the <code>value</code> in
     * this object are returned.</p>
     */
    inline void SetEquals(FilterAttribute&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value matches the <code>value</code> in
     * this object are returned.</p>
     */
    inline RetrievalFilter& WithEquals(const FilterAttribute& value) { SetEquals(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value matches the <code>value</code> in
     * this object are returned.</p>
     */
    inline RetrievalFilter& WithEquals(FilterAttribute&& value) { SetEquals(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than the
     * <code>value</code> in this object are returned.</p>
     */
    inline const FilterAttribute& GetGreaterThan() const{ return m_greaterThan; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than the
     * <code>value</code> in this object are returned.</p>
     */
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetGreaterThan(const FilterAttribute& value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetGreaterThan(FilterAttribute&& value) { m_greaterThanHasBeenSet = true; m_greaterThan = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithGreaterThan(const FilterAttribute& value) { SetGreaterThan(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithGreaterThan(FilterAttribute&& value) { SetGreaterThan(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline const FilterAttribute& GetGreaterThanOrEquals() const{ return m_greaterThanOrEquals; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline bool GreaterThanOrEqualsHasBeenSet() const { return m_greaterThanOrEqualsHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetGreaterThanOrEquals(const FilterAttribute& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetGreaterThanOrEquals(FilterAttribute&& value) { m_greaterThanOrEqualsHasBeenSet = true; m_greaterThanOrEquals = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithGreaterThanOrEquals(const FilterAttribute& value) { SetGreaterThanOrEquals(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is greater than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithGreaterThanOrEquals(FilterAttribute&& value) { SetGreaterThanOrEquals(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline const FilterAttribute& GetIn() const{ return m_in; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline bool InHasBeenSet() const { return m_inHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetIn(const FilterAttribute& value) { m_inHasBeenSet = true; m_in = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetIn(FilterAttribute&& value) { m_inHasBeenSet = true; m_in = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithIn(const FilterAttribute& value) { SetIn(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithIn(FilterAttribute&& value) { SetIn(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than the <code>value</code>
     * in this object are returned.</p>
     */
    inline const FilterAttribute& GetLessThan() const{ return m_lessThan; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than the <code>value</code>
     * in this object are returned.</p>
     */
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than the <code>value</code>
     * in this object are returned.</p>
     */
    inline void SetLessThan(const FilterAttribute& value) { m_lessThanHasBeenSet = true; m_lessThan = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than the <code>value</code>
     * in this object are returned.</p>
     */
    inline void SetLessThan(FilterAttribute&& value) { m_lessThanHasBeenSet = true; m_lessThan = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than the <code>value</code>
     * in this object are returned.</p>
     */
    inline RetrievalFilter& WithLessThan(const FilterAttribute& value) { SetLessThan(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than the <code>value</code>
     * in this object are returned.</p>
     */
    inline RetrievalFilter& WithLessThan(FilterAttribute&& value) { SetLessThan(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline const FilterAttribute& GetLessThanOrEquals() const{ return m_lessThanOrEquals; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline bool LessThanOrEqualsHasBeenSet() const { return m_lessThanOrEqualsHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetLessThanOrEquals(const FilterAttribute& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetLessThanOrEquals(FilterAttribute&& value) { m_lessThanOrEqualsHasBeenSet = true; m_lessThanOrEquals = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithLessThanOrEquals(const FilterAttribute& value) { SetLessThanOrEquals(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value is less than or equal to the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithLessThanOrEquals(FilterAttribute&& value) { SetLessThanOrEquals(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value doesn't match the
     * <code>value</code> in this object are returned.</p>
     */
    inline const FilterAttribute& GetNotEquals() const{ return m_notEquals; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value doesn't match the
     * <code>value</code> in this object are returned.</p>
     */
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value doesn't match the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetNotEquals(const FilterAttribute& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value doesn't match the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetNotEquals(FilterAttribute&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value doesn't match the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithNotEquals(const FilterAttribute& value) { SetNotEquals(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value doesn't match the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithNotEquals(FilterAttribute&& value) { SetNotEquals(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value isn't in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline const FilterAttribute& GetNotIn() const{ return m_notIn; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value isn't in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline bool NotInHasBeenSet() const { return m_notInHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value isn't in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetNotIn(const FilterAttribute& value) { m_notInHasBeenSet = true; m_notIn = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value isn't in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline void SetNotIn(FilterAttribute&& value) { m_notInHasBeenSet = true; m_notIn = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value isn't in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithNotIn(const FilterAttribute& value) { SetNotIn(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value isn't in the list specified in the
     * <code>value</code> in this object are returned.</p>
     */
    inline RetrievalFilter& WithNotIn(FilterAttribute&& value) { SetNotIn(std::move(value)); return *this;}


    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline const Aws::Vector<RetrievalFilter>& GetOrAll() const{ return m_orAll; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline void SetOrAll(const Aws::Vector<RetrievalFilter>& value) { m_orAllHasBeenSet = true; m_orAll = value; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline void SetOrAll(Aws::Vector<RetrievalFilter>&& value) { m_orAllHasBeenSet = true; m_orAll = std::move(value); }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& WithOrAll(const Aws::Vector<RetrievalFilter>& value) { SetOrAll(value); return *this;}

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& WithOrAll(Aws::Vector<RetrievalFilter>&& value) { SetOrAll(std::move(value)); return *this;}

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& AddOrAll(const RetrievalFilter& value) { m_orAllHasBeenSet = true; m_orAll.push_back(value); return *this; }

    /**
     * <p>Knowledge base data sources whose metadata attributes fulfill at least one of
     * the filter conditions inside this list are returned.</p>
     */
    inline RetrievalFilter& AddOrAll(RetrievalFilter&& value) { m_orAllHasBeenSet = true; m_orAll.push_back(std::move(value)); return *this; }


    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value starts with the <code>value</code>
     * in this object are returned. This filter is currently only supported for Amazon
     * OpenSearch Serverless vector stores.</p>
     */
    inline const FilterAttribute& GetStartsWith() const{ return m_startsWith; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value starts with the <code>value</code>
     * in this object are returned. This filter is currently only supported for Amazon
     * OpenSearch Serverless vector stores.</p>
     */
    inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value starts with the <code>value</code>
     * in this object are returned. This filter is currently only supported for Amazon
     * OpenSearch Serverless vector stores.</p>
     */
    inline void SetStartsWith(const FilterAttribute& value) { m_startsWithHasBeenSet = true; m_startsWith = value; }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value starts with the <code>value</code>
     * in this object are returned. This filter is currently only supported for Amazon
     * OpenSearch Serverless vector stores.</p>
     */
    inline void SetStartsWith(FilterAttribute&& value) { m_startsWithHasBeenSet = true; m_startsWith = std::move(value); }

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value starts with the <code>value</code>
     * in this object are returned. This filter is currently only supported for Amazon
     * OpenSearch Serverless vector stores.</p>
     */
    inline RetrievalFilter& WithStartsWith(const FilterAttribute& value) { SetStartsWith(value); return *this;}

    /**
     * <p>Knowledge base data sources that contain a metadata attribute whose name
     * matches the <code>key</code> and whose value starts with the <code>value</code>
     * in this object are returned. This filter is currently only supported for Amazon
     * OpenSearch Serverless vector stores.</p>
     */
    inline RetrievalFilter& WithStartsWith(FilterAttribute&& value) { SetStartsWith(std::move(value)); return *this;}

  private:

    Aws::Vector<RetrievalFilter> m_andAll;
    bool m_andAllHasBeenSet = false;

    FilterAttribute m_equals;
    bool m_equalsHasBeenSet = false;

    FilterAttribute m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    FilterAttribute m_greaterThanOrEquals;
    bool m_greaterThanOrEqualsHasBeenSet = false;

    FilterAttribute m_in;
    bool m_inHasBeenSet = false;

    FilterAttribute m_lessThan;
    bool m_lessThanHasBeenSet = false;

    FilterAttribute m_lessThanOrEquals;
    bool m_lessThanOrEqualsHasBeenSet = false;

    FilterAttribute m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    FilterAttribute m_notIn;
    bool m_notInHasBeenSet = false;

    Aws::Vector<RetrievalFilter> m_orAll;
    bool m_orAllHasBeenSet = false;

    FilterAttribute m_startsWith;
    bool m_startsWithHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
