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
    AWS_GLUE_API SerDeInfo();
    AWS_GLUE_API SerDeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SerDeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the SerDe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SerDeInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SerDeInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SerDeInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usually the class that implements the SerDe. An example is
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline const Aws::String& GetSerializationLibrary() const{ return m_serializationLibrary; }
    inline bool SerializationLibraryHasBeenSet() const { return m_serializationLibraryHasBeenSet; }
    inline void SetSerializationLibrary(const Aws::String& value) { m_serializationLibraryHasBeenSet = true; m_serializationLibrary = value; }
    inline void SetSerializationLibrary(Aws::String&& value) { m_serializationLibraryHasBeenSet = true; m_serializationLibrary = std::move(value); }
    inline void SetSerializationLibrary(const char* value) { m_serializationLibraryHasBeenSet = true; m_serializationLibrary.assign(value); }
    inline SerDeInfo& WithSerializationLibrary(const Aws::String& value) { SetSerializationLibrary(value); return *this;}
    inline SerDeInfo& WithSerializationLibrary(Aws::String&& value) { SetSerializationLibrary(std::move(value)); return *this;}
    inline SerDeInfo& WithSerializationLibrary(const char* value) { SetSerializationLibrary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline SerDeInfo& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline SerDeInfo& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline SerDeInfo& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline SerDeInfo& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline SerDeInfo& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SerDeInfo& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SerDeInfo& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SerDeInfo& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline SerDeInfo& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
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
