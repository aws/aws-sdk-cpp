/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a transform that chooses one <code>DynamicFrame</code> from a
   * collection of <code>DynamicFrames</code>. The output is the selected
   * <code>DynamicFrame</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SelectFromCollection">AWS
   * API Reference</a></p>
   */
  class SelectFromCollection
  {
  public:
    AWS_GLUE_API SelectFromCollection();
    AWS_GLUE_API SelectFromCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SelectFromCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline SelectFromCollection& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SelectFromCollection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SelectFromCollection& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline SelectFromCollection& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline SelectFromCollection& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline SelectFromCollection& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline SelectFromCollection& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline SelectFromCollection& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The index for the DynamicFrame to be selected.</p>
     */
    inline int GetIndex() const{ return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline SelectFromCollection& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    int m_index;
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
