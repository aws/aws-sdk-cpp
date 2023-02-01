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
    AWS_GLUE_API Merge();
    AWS_GLUE_API Merge(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Merge& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Merge& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Merge& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline Merge& WithName(const char* value) { SetName(value); return *this;}


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
    inline Merge& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Merge& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Merge& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Merge& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline Merge& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline Merge& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline Merge& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source <code>DynamicFrame</code> that will be merged with a staging
     * <code>DynamicFrame</code>.</p>
     */
    inline Merge& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetPrimaryKeys() const{ return m_primaryKeys; }

    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline bool PrimaryKeysHasBeenSet() const { return m_primaryKeysHasBeenSet; }

    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline void SetPrimaryKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys = value; }

    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline void SetPrimaryKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys = std::move(value); }

    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline Merge& WithPrimaryKeys(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetPrimaryKeys(value); return *this;}

    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline Merge& WithPrimaryKeys(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetPrimaryKeys(std::move(value)); return *this;}

    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline Merge& AddPrimaryKeys(const Aws::Vector<Aws::String>& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.push_back(value); return *this; }

    /**
     * <p>The list of primary key fields to match records from the source and staging
     * dynamic frames.</p>
     */
    inline Merge& AddPrimaryKeys(Aws::Vector<Aws::String>&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.push_back(std::move(value)); return *this; }

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
