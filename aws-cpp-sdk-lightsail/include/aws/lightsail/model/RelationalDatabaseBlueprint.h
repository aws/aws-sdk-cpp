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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseEngine.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a database image, or blueprint. A blueprint describes the major
   * engine version of a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseBlueprint">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API RelationalDatabaseBlueprint
  {
  public:
    RelationalDatabaseBlueprint();
    RelationalDatabaseBlueprint(Aws::Utils::Json::JsonView jsonValue);
    RelationalDatabaseBlueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }

    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }

    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }

    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::move(value); }

    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }

    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}

    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithBlueprintId(Aws::String&& value) { SetBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}


    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline const RelationalDatabaseEngine& GetEngine() const{ return m_engine; }

    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline void SetEngine(const RelationalDatabaseEngine& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline void SetEngine(RelationalDatabaseEngine&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline RelationalDatabaseBlueprint& WithEngine(const RelationalDatabaseEngine& value) { SetEngine(value); return *this;}

    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline RelationalDatabaseBlueprint& WithEngine(RelationalDatabaseEngine&& value) { SetEngine(std::move(value)); return *this;}


    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline const Aws::String& GetEngineDescription() const{ return m_engineDescription; }

    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline bool EngineDescriptionHasBeenSet() const { return m_engineDescriptionHasBeenSet; }

    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline void SetEngineDescription(const Aws::String& value) { m_engineDescriptionHasBeenSet = true; m_engineDescription = value; }

    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline void SetEngineDescription(Aws::String&& value) { m_engineDescriptionHasBeenSet = true; m_engineDescription = std::move(value); }

    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline void SetEngineDescription(const char* value) { m_engineDescriptionHasBeenSet = true; m_engineDescription.assign(value); }

    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineDescription(const Aws::String& value) { SetEngineDescription(value); return *this;}

    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineDescription(Aws::String&& value) { SetEngineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineDescription(const char* value) { SetEngineDescription(value); return *this;}


    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline const Aws::String& GetEngineVersionDescription() const{ return m_engineVersionDescription; }

    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline bool EngineVersionDescriptionHasBeenSet() const { return m_engineVersionDescriptionHasBeenSet; }

    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline void SetEngineVersionDescription(const Aws::String& value) { m_engineVersionDescriptionHasBeenSet = true; m_engineVersionDescription = value; }

    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline void SetEngineVersionDescription(Aws::String&& value) { m_engineVersionDescriptionHasBeenSet = true; m_engineVersionDescription = std::move(value); }

    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline void SetEngineVersionDescription(const char* value) { m_engineVersionDescriptionHasBeenSet = true; m_engineVersionDescription.assign(value); }

    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineVersionDescription(const Aws::String& value) { SetEngineVersionDescription(value); return *this;}

    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineVersionDescription(Aws::String&& value) { SetEngineVersionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithEngineVersionDescription(const char* value) { SetEngineVersionDescription(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the engine version is the default for the
     * database blueprint.</p>
     */
    inline bool GetIsEngineDefault() const{ return m_isEngineDefault; }

    /**
     * <p>A Boolean value indicating whether the engine version is the default for the
     * database blueprint.</p>
     */
    inline bool IsEngineDefaultHasBeenSet() const { return m_isEngineDefaultHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the engine version is the default for the
     * database blueprint.</p>
     */
    inline void SetIsEngineDefault(bool value) { m_isEngineDefaultHasBeenSet = true; m_isEngineDefault = value; }

    /**
     * <p>A Boolean value indicating whether the engine version is the default for the
     * database blueprint.</p>
     */
    inline RelationalDatabaseBlueprint& WithIsEngineDefault(bool value) { SetIsEngineDefault(value); return *this;}

  private:

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet;

    RelationalDatabaseEngine m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_engineDescription;
    bool m_engineDescriptionHasBeenSet;

    Aws::String m_engineVersionDescription;
    bool m_engineVersionDescriptionHasBeenSet;

    bool m_isEngineDefault;
    bool m_isEngineDefaultHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
