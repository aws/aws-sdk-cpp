/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Information about a serialization/deserialization program (SerDe) that serves
   * as an extractor and loader.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SerDeInfo">AWS API
   * Reference</a></p>
   */
  class SerDeInfo
  {
  public:
    AWS_GLUE_API SerDeInfo() = default;
    AWS_GLUE_API SerDeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SerDeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the SerDe.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SerDeInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usually the class that implements the SerDe. An example is
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline const Aws::String& GetSerializationLibrary() const { return m_serializationLibrary; }
    inline bool SerializationLibraryHasBeenSet() const { return m_serializationLibraryHasBeenSet; }
    template<typename SerializationLibraryT = Aws::String>
    void SetSerializationLibrary(SerializationLibraryT&& value) { m_serializationLibraryHasBeenSet = true; m_serializationLibrary = std::forward<SerializationLibraryT>(value); }
    template<typename SerializationLibraryT = Aws::String>
    SerDeInfo& WithSerializationLibrary(SerializationLibraryT&& value) { SetSerializationLibrary(std::forward<SerializationLibraryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    SerDeInfo& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    SerDeInfo& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_serializationLibrary;
    bool m_serializationLibraryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
