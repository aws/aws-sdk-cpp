/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/UnionType.h>
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
   * <p>Specifies a transform that combines the rows from two or more datasets into a
   * single result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Union">AWS API
   * Reference</a></p>
   */
  class Union
  {
  public:
    AWS_GLUE_API Union();
    AWS_GLUE_API Union(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Union& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Union& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Union& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Union& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline Union& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline Union& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline Union& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline Union& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline Union& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>Indicates the type of Union transform. </p> <p>Specify <code>ALL</code> to
     * join all rows from data sources to the resulting DynamicFrame. The resulting
     * union does not remove duplicate rows.</p> <p>Specify <code>DISTINCT</code> to
     * remove duplicate rows in the resulting DynamicFrame.</p>
     */
    inline const UnionType& GetUnionType() const{ return m_unionType; }

    /**
     * <p>Indicates the type of Union transform. </p> <p>Specify <code>ALL</code> to
     * join all rows from data sources to the resulting DynamicFrame. The resulting
     * union does not remove duplicate rows.</p> <p>Specify <code>DISTINCT</code> to
     * remove duplicate rows in the resulting DynamicFrame.</p>
     */
    inline bool UnionTypeHasBeenSet() const { return m_unionTypeHasBeenSet; }

    /**
     * <p>Indicates the type of Union transform. </p> <p>Specify <code>ALL</code> to
     * join all rows from data sources to the resulting DynamicFrame. The resulting
     * union does not remove duplicate rows.</p> <p>Specify <code>DISTINCT</code> to
     * remove duplicate rows in the resulting DynamicFrame.</p>
     */
    inline void SetUnionType(const UnionType& value) { m_unionTypeHasBeenSet = true; m_unionType = value; }

    /**
     * <p>Indicates the type of Union transform. </p> <p>Specify <code>ALL</code> to
     * join all rows from data sources to the resulting DynamicFrame. The resulting
     * union does not remove duplicate rows.</p> <p>Specify <code>DISTINCT</code> to
     * remove duplicate rows in the resulting DynamicFrame.</p>
     */
    inline void SetUnionType(UnionType&& value) { m_unionTypeHasBeenSet = true; m_unionType = std::move(value); }

    /**
     * <p>Indicates the type of Union transform. </p> <p>Specify <code>ALL</code> to
     * join all rows from data sources to the resulting DynamicFrame. The resulting
     * union does not remove duplicate rows.</p> <p>Specify <code>DISTINCT</code> to
     * remove duplicate rows in the resulting DynamicFrame.</p>
     */
    inline Union& WithUnionType(const UnionType& value) { SetUnionType(value); return *this;}

    /**
     * <p>Indicates the type of Union transform. </p> <p>Specify <code>ALL</code> to
     * join all rows from data sources to the resulting DynamicFrame. The resulting
     * union does not remove duplicate rows.</p> <p>Specify <code>DISTINCT</code> to
     * remove duplicate rows in the resulting DynamicFrame.</p>
     */
    inline Union& WithUnionType(UnionType&& value) { SetUnionType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    UnionType m_unionType;
    bool m_unionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
