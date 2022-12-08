/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/FilterLogicalOperator.h>
#include <aws/glue/model/FilterExpression.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a transform that splits a dataset into two, based on a filter
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_GLUE_API Filter();
    AWS_GLUE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the transform node.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Filter& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Filter& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Filter& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Filter& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Filter& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>The operator used to filter rows by comparing the key value to a specified
     * value.</p>
     */
    inline const FilterLogicalOperator& GetLogicalOperator() const{ return m_logicalOperator; }

    /**
     * <p>The operator used to filter rows by comparing the key value to a specified
     * value.</p>
     */
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }

    /**
     * <p>The operator used to filter rows by comparing the key value to a specified
     * value.</p>
     */
    inline void SetLogicalOperator(const FilterLogicalOperator& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }

    /**
     * <p>The operator used to filter rows by comparing the key value to a specified
     * value.</p>
     */
    inline void SetLogicalOperator(FilterLogicalOperator&& value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = std::move(value); }

    /**
     * <p>The operator used to filter rows by comparing the key value to a specified
     * value.</p>
     */
    inline Filter& WithLogicalOperator(const FilterLogicalOperator& value) { SetLogicalOperator(value); return *this;}

    /**
     * <p>The operator used to filter rows by comparing the key value to a specified
     * value.</p>
     */
    inline Filter& WithLogicalOperator(FilterLogicalOperator&& value) { SetLogicalOperator(std::move(value)); return *this;}


    /**
     * <p>Specifies a filter expression.</p>
     */
    inline const Aws::Vector<FilterExpression>& GetFilters() const{ return m_filters; }

    /**
     * <p>Specifies a filter expression.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Specifies a filter expression.</p>
     */
    inline void SetFilters(const Aws::Vector<FilterExpression>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Specifies a filter expression.</p>
     */
    inline void SetFilters(Aws::Vector<FilterExpression>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Specifies a filter expression.</p>
     */
    inline Filter& WithFilters(const Aws::Vector<FilterExpression>& value) { SetFilters(value); return *this;}

    /**
     * <p>Specifies a filter expression.</p>
     */
    inline Filter& WithFilters(Aws::Vector<FilterExpression>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies a filter expression.</p>
     */
    inline Filter& AddFilters(const FilterExpression& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Specifies a filter expression.</p>
     */
    inline Filter& AddFilters(FilterExpression&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    FilterLogicalOperator m_logicalOperator;
    bool m_logicalOperatorHasBeenSet = false;

    Aws::Vector<FilterExpression> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
