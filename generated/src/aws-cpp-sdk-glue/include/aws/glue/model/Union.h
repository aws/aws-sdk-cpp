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
    AWS_GLUE_API Union() = default;
    AWS_GLUE_API Union(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Union& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Union& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node ID inputs to the transform.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    Union& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    Union& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the type of Union transform. </p> <p>Specify <code>ALL</code> to
     * join all rows from data sources to the resulting DynamicFrame. The resulting
     * union does not remove duplicate rows.</p> <p>Specify <code>DISTINCT</code> to
     * remove duplicate rows in the resulting DynamicFrame.</p>
     */
    inline UnionType GetUnionType() const { return m_unionType; }
    inline bool UnionTypeHasBeenSet() const { return m_unionTypeHasBeenSet; }
    inline void SetUnionType(UnionType value) { m_unionTypeHasBeenSet = true; m_unionType = value; }
    inline Union& WithUnionType(UnionType value) { SetUnionType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    UnionType m_unionType{UnionType::NOT_SET};
    bool m_unionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
