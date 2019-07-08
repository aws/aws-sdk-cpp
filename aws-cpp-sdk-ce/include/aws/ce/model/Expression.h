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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/Expression.h>
#include <aws/ce/model/DimensionValues.h>
#include <aws/ce/model/TagValues.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Use <code>Expression</code> to filter by cost or by usage. There are two
   * patterns: </p> <ul> <li> <p>Simple dimension values - You can set the dimension
   * name and values for the filters that you plan to use. For example, you can
   * filter for <code>INSTANCE_TYPE==m4.xlarge OR INSTANCE_TYPE==c4.large</code>. The
   * <code>Expression</code> for that looks like this:</p> <p> <code>{ "Dimensions":
   * { "Key": "INSTANCE_TYPE", "Values": [ "m4.xlarge", “c4.large” ] } }</code> </p>
   * <p>The list of dimension values are OR'd together to retrieve cost or usage
   * data. You can create <code>Expression</code> and <code>DimensionValues</code>
   * objects using either <code>with*</code> methods or <code>set*</code> methods in
   * multiple lines. </p> </li> <li> <p>Compound dimension values with logical
   * operations - You can use multiple <code>Expression</code> types and the logical
   * operators <code>AND/OR/NOT</code> to create a list of one or more
   * <code>Expression</code> objects. This allows you to filter on more advanced
   * options. For example, you can filter on <code>((INSTANCE_TYPE == m4.large OR
   * INSTANCE_TYPE == m3.large) OR (TAG.Type == Type1)) AND (USAGE_TYPE !=
   * DataTransfer)</code>. The <code>Expression</code> for that looks like this:</p>
   * <p> <code>{ "And": [ {"Or": [ {"Dimensions": { "Key": "INSTANCE_TYPE", "Values":
   * [ "m4.x.large", "c4.large" ] }}, {"Tags": { "Key": "TagName", "Values":
   * ["Value1"] } } ]}, {"Not": {"Dimensions": { "Key": "USAGE_TYPE", "Values":
   * ["DataTransfer"] }}} ] } </code> </p> <note> <p>Because each
   * <code>Expression</code> can have only one operator, the service returns an error
   * if more than one is specified. The following example shows an
   * <code>Expression</code> object that creates an error.</p> </note> <p> <code> {
   * "And": [ ... ], "DimensionValues": { "Dimension": "USAGE_TYPE", "Values": [
   * "DataTransfer" ] } } </code> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Expression">AWS API
   * Reference</a></p>
   */
  class AWS_COSTEXPLORER_API Expression
  {
  public:
    Expression();
    Expression(Aws::Utils::Json::JsonView jsonValue);
    Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline const Aws::Vector<Expression>& GetOr() const{ return m_or; }

    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }

    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline void SetOr(const Aws::Vector<Expression>& value) { m_orHasBeenSet = true; m_or = value; }

    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline void SetOr(Aws::Vector<Expression>&& value) { m_orHasBeenSet = true; m_or = std::move(value); }

    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline Expression& WithOr(const Aws::Vector<Expression>& value) { SetOr(value); return *this;}

    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline Expression& WithOr(Aws::Vector<Expression>&& value) { SetOr(std::move(value)); return *this;}

    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline Expression& AddOr(const Expression& value) { m_orHasBeenSet = true; m_or.push_back(value); return *this; }

    /**
     * <p>Return results that match either <code>Dimension</code> object.</p>
     */
    inline Expression& AddOr(Expression&& value) { m_orHasBeenSet = true; m_or.push_back(std::move(value)); return *this; }


    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline const Aws::Vector<Expression>& GetAnd() const{ return m_and; }

    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline void SetAnd(const Aws::Vector<Expression>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline void SetAnd(Aws::Vector<Expression>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline Expression& WithAnd(const Aws::Vector<Expression>& value) { SetAnd(value); return *this;}

    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline Expression& WithAnd(Aws::Vector<Expression>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline Expression& AddAnd(const Expression& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>Return results that match both <code>Dimension</code> objects.</p>
     */
    inline Expression& AddAnd(Expression&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }


    /**
     * <p>Return results that don't match a <code>Dimension</code> object.</p>
     */
    inline const Expression& GetNot() const{ return m_not[0]; }

    /**
     * <p>Return results that don't match a <code>Dimension</code> object.</p>
     */
    inline bool NotHasBeenSet() const { return m_notHasBeenSet; }

    /**
     * <p>Return results that don't match a <code>Dimension</code> object.</p>
     */
    inline void SetNot(const Expression& value) { m_notHasBeenSet = true; m_not.resize(1); m_not[0] = value; }

    /**
     * <p>Return results that don't match a <code>Dimension</code> object.</p>
     */
    inline void SetNot(Expression&& value) { m_notHasBeenSet = true; m_not.resize(1); m_not[0] = std::move(value); }

    /**
     * <p>Return results that don't match a <code>Dimension</code> object.</p>
     */
    inline Expression& WithNot(const Expression& value) { SetNot(value); return *this;}

    /**
     * <p>Return results that don't match a <code>Dimension</code> object.</p>
     */
    inline Expression& WithNot(Expression&& value) { SetNot(std::move(value)); return *this;}


    /**
     * <p>The specific <code>Dimension</code> to use for <code>Expression</code>.</p>
     */
    inline const DimensionValues& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The specific <code>Dimension</code> to use for <code>Expression</code>.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The specific <code>Dimension</code> to use for <code>Expression</code>.</p>
     */
    inline void SetDimensions(const DimensionValues& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The specific <code>Dimension</code> to use for <code>Expression</code>.</p>
     */
    inline void SetDimensions(DimensionValues&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The specific <code>Dimension</code> to use for <code>Expression</code>.</p>
     */
    inline Expression& WithDimensions(const DimensionValues& value) { SetDimensions(value); return *this;}

    /**
     * <p>The specific <code>Dimension</code> to use for <code>Expression</code>.</p>
     */
    inline Expression& WithDimensions(DimensionValues&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The specific <code>Tag</code> to use for <code>Expression</code>.</p>
     */
    inline const TagValues& GetTags() const{ return m_tags; }

    /**
     * <p>The specific <code>Tag</code> to use for <code>Expression</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The specific <code>Tag</code> to use for <code>Expression</code>.</p>
     */
    inline void SetTags(const TagValues& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The specific <code>Tag</code> to use for <code>Expression</code>.</p>
     */
    inline void SetTags(TagValues&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The specific <code>Tag</code> to use for <code>Expression</code>.</p>
     */
    inline Expression& WithTags(const TagValues& value) { SetTags(value); return *this;}

    /**
     * <p>The specific <code>Tag</code> to use for <code>Expression</code>.</p>
     */
    inline Expression& WithTags(TagValues&& value) { SetTags(std::move(value)); return *this;}

  private:

    Aws::Vector<Expression> m_or;
    bool m_orHasBeenSet;

    Aws::Vector<Expression> m_and;
    bool m_andHasBeenSet;

    Aws::Vector<Expression> m_not;
    bool m_notHasBeenSet;

    DimensionValues m_dimensions;
    bool m_dimensionsHasBeenSet;

    TagValues m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
