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
   * <p>Specifies a transform that merges a <code>DynamicFrame</code> with a staging
   * <code>DynamicFrame</code> based on the specified primary keys to identify
   * records. Duplicate records (records with the same primary keys) are not
   * de-duplicated. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Merge">AWS API
   * Reference</a></p>
   */
  class Merge
  {
  public:
    AWS_GLUE_API Merge() = default;
    AWS_GLUE_API Merge(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Merge& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Merge& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    Merge& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    Merge& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    Merge& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPrimaryKeys() const { return m_primaryKeys; }
    inline bool PrimaryKeysHasBeenSet() const { return m_primaryKeysHasBeenSet; }
    template<typename PrimaryKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetPrimaryKeys(PrimaryKeysT&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys = std::forward<PrimaryKeysT>(value); }
    template<typename PrimaryKeysT = Aws::Vector<Aws::Vector<Aws::String>>>
    Merge& WithPrimaryKeys(PrimaryKeysT&& value) { SetPrimaryKeys(std::forward<PrimaryKeysT>(value)); return *this;}
    template<typename PrimaryKeysT = Aws::Vector<Aws::String>>
    Merge& AddPrimaryKeys(PrimaryKeysT&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.emplace_back(std::forward<PrimaryKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_primaryKeys;
    bool m_primaryKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
