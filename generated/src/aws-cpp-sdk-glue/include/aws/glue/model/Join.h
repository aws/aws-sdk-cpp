/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/JoinType.h>
#include <aws/glue/model/JoinColumn.h>
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
   * <p>Specifies a transform that joins two datasets into one dataset using a
   * comparison phrase on the specified data property keys. You can use inner, outer,
   * left, right, left semi, and left anti joins.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Join">AWS API
   * Reference</a></p>
   */
  class Join
  {
  public:
    AWS_GLUE_API Join();
    AWS_GLUE_API Join(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Join& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Join& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Join& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Join& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline Join& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline Join& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline Join& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline Join& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline Join& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of join to be performed on the datasets.</p>
     */
    inline const JoinType& GetJoinType() const{ return m_joinType; }
    inline bool JoinTypeHasBeenSet() const { return m_joinTypeHasBeenSet; }
    inline void SetJoinType(const JoinType& value) { m_joinTypeHasBeenSet = true; m_joinType = value; }
    inline void SetJoinType(JoinType&& value) { m_joinTypeHasBeenSet = true; m_joinType = std::move(value); }
    inline Join& WithJoinType(const JoinType& value) { SetJoinType(value); return *this;}
    inline Join& WithJoinType(JoinType&& value) { SetJoinType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the two columns to be joined.</p>
     */
    inline const Aws::Vector<JoinColumn>& GetColumns() const{ return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    inline void SetColumns(const Aws::Vector<JoinColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }
    inline void SetColumns(Aws::Vector<JoinColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }
    inline Join& WithColumns(const Aws::Vector<JoinColumn>& value) { SetColumns(value); return *this;}
    inline Join& WithColumns(Aws::Vector<JoinColumn>&& value) { SetColumns(std::move(value)); return *this;}
    inline Join& AddColumns(const JoinColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    inline Join& AddColumns(JoinColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    JoinType m_joinType;
    bool m_joinTypeHasBeenSet = false;

    Aws::Vector<JoinColumn> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
