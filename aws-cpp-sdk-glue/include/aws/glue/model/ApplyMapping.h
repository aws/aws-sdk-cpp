/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Mapping.h>
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
   * <p>Specifies a transform that maps data property keys in the data source to data
   * property keys in the data target. You can rename keys, modify the data types for
   * keys, and choose which keys to drop from the dataset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ApplyMapping">AWS
   * API Reference</a></p>
   */
  class ApplyMapping
  {
  public:
    AWS_GLUE_API ApplyMapping();
    AWS_GLUE_API ApplyMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ApplyMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ApplyMapping& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline ApplyMapping& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform node.</p>
     */
    inline ApplyMapping& WithName(const char* value) { SetName(value); return *this;}


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
    inline ApplyMapping& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline ApplyMapping& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline ApplyMapping& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline ApplyMapping& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The data inputs identified by their node names.</p>
     */
    inline ApplyMapping& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }


    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline const Aws::Vector<Mapping>& GetMapping() const{ return m_mapping; }

    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }

    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline void SetMapping(const Aws::Vector<Mapping>& value) { m_mappingHasBeenSet = true; m_mapping = value; }

    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline void SetMapping(Aws::Vector<Mapping>&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }

    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline ApplyMapping& WithMapping(const Aws::Vector<Mapping>& value) { SetMapping(value); return *this;}

    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline ApplyMapping& WithMapping(Aws::Vector<Mapping>&& value) { SetMapping(std::move(value)); return *this;}

    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline ApplyMapping& AddMapping(const Mapping& value) { m_mappingHasBeenSet = true; m_mapping.push_back(value); return *this; }

    /**
     * <p>Specifies the mapping of data property keys in the data source to data
     * property keys in the data target.</p>
     */
    inline ApplyMapping& AddMapping(Mapping&& value) { m_mappingHasBeenSet = true; m_mapping.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Mapping> m_mapping;
    bool m_mappingHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
