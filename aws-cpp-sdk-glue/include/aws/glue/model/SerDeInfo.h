/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Information about a serialization/deserialization program (SerDe) which
   * serves as an extractor and loader.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SerDeInfo">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API SerDeInfo
  {
  public:
    SerDeInfo();
    SerDeInfo(Aws::Utils::Json::JsonView jsonValue);
    SerDeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the SerDe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the SerDe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the SerDe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the SerDe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the SerDe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the SerDe.</p>
     */
    inline SerDeInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the SerDe.</p>
     */
    inline SerDeInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the SerDe.</p>
     */
    inline SerDeInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline const Aws::String& GetSerializationLibrary() const{ return m_serializationLibrary; }

    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline bool SerializationLibraryHasBeenSet() const { return m_serializationLibraryHasBeenSet; }

    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline void SetSerializationLibrary(const Aws::String& value) { m_serializationLibraryHasBeenSet = true; m_serializationLibrary = value; }

    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline void SetSerializationLibrary(Aws::String&& value) { m_serializationLibraryHasBeenSet = true; m_serializationLibrary = std::move(value); }

    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline void SetSerializationLibrary(const char* value) { m_serializationLibraryHasBeenSet = true; m_serializationLibrary.assign(value); }

    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline SerDeInfo& WithSerializationLibrary(const Aws::String& value) { SetSerializationLibrary(value); return *this;}

    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline SerDeInfo& WithSerializationLibrary(Aws::String&& value) { SetSerializationLibrary(std::move(value)); return *this;}

    /**
     * <p>Usually the class that implements the SerDe. An example is:
     * <code>org.apache.hadoop.hive.serde2.columnar.ColumnarSerDe</code>.</p>
     */
    inline SerDeInfo& WithSerializationLibrary(const char* value) { SetSerializationLibrary(value); return *this;}


    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define initialization parameters for the SerDe.</p>
     */
    inline SerDeInfo& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_serializationLibrary;
    bool m_serializationLibraryHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
