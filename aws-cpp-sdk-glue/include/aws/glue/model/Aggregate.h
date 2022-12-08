/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/AggregateOperation.h>
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
   * <p>Specifies a transform that groups rows by chosen fields and computes the
   * aggregated value by specified function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Aggregate">AWS API
   * Reference</a></p>
   */
  class Aggregate
  {
  public:
    AWS_GLUE_API Aggregate();
    AWS_GLUE_API Aggregate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aggregate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Aggregate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Aggregate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Aggregate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline Aggregate& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline Aggregate& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline Aggregate& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline Aggregate& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the fields and rows to use as inputs for the aggregate
     * transform.</p>
     */
    inline Aggregate& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetGroups() const{ return m_groups; }

    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline Aggregate& WithGroups(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetGroups(value); return *this;}

    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline Aggregate& WithGroups(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline Aggregate& AddGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Specifies the fields to group by.</p>
     */
    inline Aggregate& AddGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline const Aws::Vector<AggregateOperation>& GetAggs() const{ return m_aggs; }

    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline bool AggsHasBeenSet() const { return m_aggsHasBeenSet; }

    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline void SetAggs(const Aws::Vector<AggregateOperation>& value) { m_aggsHasBeenSet = true; m_aggs = value; }

    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline void SetAggs(Aws::Vector<AggregateOperation>&& value) { m_aggsHasBeenSet = true; m_aggs = std::move(value); }

    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline Aggregate& WithAggs(const Aws::Vector<AggregateOperation>& value) { SetAggs(value); return *this;}

    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline Aggregate& WithAggs(Aws::Vector<AggregateOperation>&& value) { SetAggs(std::move(value)); return *this;}

    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline Aggregate& AddAggs(const AggregateOperation& value) { m_aggsHasBeenSet = true; m_aggs.push_back(value); return *this; }

    /**
     * <p>Specifies the aggregate functions to be performed on specified fields. </p>
     */
    inline Aggregate& AddAggs(AggregateOperation&& value) { m_aggsHasBeenSet = true; m_aggs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<AggregateOperation> m_aggs;
    bool m_aggsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
