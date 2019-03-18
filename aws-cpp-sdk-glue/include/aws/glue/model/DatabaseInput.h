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
   * <p>The structure used to create or update a database.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DatabaseInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DatabaseInput
  {
  public:
    DatabaseInput();
    DatabaseInput(Aws::Utils::Json::JsonView jsonValue);
    DatabaseInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline DatabaseInput& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline DatabaseInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline DatabaseInput& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description of the database</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the database</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the database</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the database</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the database</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the database</p>
     */
    inline DatabaseInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the database</p>
     */
    inline DatabaseInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the database</p>
     */
    inline DatabaseInput& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline DatabaseInput& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline DatabaseInput& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline DatabaseInput& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Thes key-value pairs define parameters and properties of the database.</p>
     */
    inline DatabaseInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
