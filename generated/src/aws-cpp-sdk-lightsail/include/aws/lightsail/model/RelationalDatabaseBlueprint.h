/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RelationalDatabaseBlueprint
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabaseBlueprint();
    AWS_LIGHTSAIL_API RelationalDatabaseBlueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseBlueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::move(value); }
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }
    inline RelationalDatabaseBlueprint& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}
    inline RelationalDatabaseBlueprint& WithBlueprintId(Aws::String&& value) { SetBlueprintId(std::move(value)); return *this;}
    inline RelationalDatabaseBlueprint& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline const RelationalDatabaseEngine& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const RelationalDatabaseEngine& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(RelationalDatabaseEngine&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline RelationalDatabaseBlueprint& WithEngine(const RelationalDatabaseEngine& value) { SetEngine(value); return *this;}
    inline RelationalDatabaseBlueprint& WithEngine(RelationalDatabaseEngine&& value) { SetEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline RelationalDatabaseBlueprint& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline RelationalDatabaseBlueprint& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline RelationalDatabaseBlueprint& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline const Aws::String& GetEngineDescription() const{ return m_engineDescription; }
    inline bool EngineDescriptionHasBeenSet() const { return m_engineDescriptionHasBeenSet; }
    inline void SetEngineDescription(const Aws::String& value) { m_engineDescriptionHasBeenSet = true; m_engineDescription = value; }
    inline void SetEngineDescription(Aws::String&& value) { m_engineDescriptionHasBeenSet = true; m_engineDescription = std::move(value); }
    inline void SetEngineDescription(const char* value) { m_engineDescriptionHasBeenSet = true; m_engineDescription.assign(value); }
    inline RelationalDatabaseBlueprint& WithEngineDescription(const Aws::String& value) { SetEngineDescription(value); return *this;}
    inline RelationalDatabaseBlueprint& WithEngineDescription(Aws::String&& value) { SetEngineDescription(std::move(value)); return *this;}
    inline RelationalDatabaseBlueprint& WithEngineDescription(const char* value) { SetEngineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline const Aws::String& GetEngineVersionDescription() const{ return m_engineVersionDescription; }
    inline bool EngineVersionDescriptionHasBeenSet() const { return m_engineVersionDescriptionHasBeenSet; }
    inline void SetEngineVersionDescription(const Aws::String& value) { m_engineVersionDescriptionHasBeenSet = true; m_engineVersionDescription = value; }
    inline void SetEngineVersionDescription(Aws::String&& value) { m_engineVersionDescriptionHasBeenSet = true; m_engineVersionDescription = std::move(value); }
    inline void SetEngineVersionDescription(const char* value) { m_engineVersionDescriptionHasBeenSet = true; m_engineVersionDescription.assign(value); }
    inline RelationalDatabaseBlueprint& WithEngineVersionDescription(const Aws::String& value) { SetEngineVersionDescription(value); return *this;}
    inline RelationalDatabaseBlueprint& WithEngineVersionDescription(Aws::String&& value) { SetEngineVersionDescription(std::move(value)); return *this;}
    inline RelationalDatabaseBlueprint& WithEngineVersionDescription(const char* value) { SetEngineVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the engine version is the default for the
     * database blueprint.</p>
     */
    inline bool GetIsEngineDefault() const{ return m_isEngineDefault; }
    inline bool IsEngineDefaultHasBeenSet() const { return m_isEngineDefaultHasBeenSet; }
    inline void SetIsEngineDefault(bool value) { m_isEngineDefaultHasBeenSet = true; m_isEngineDefault = value; }
    inline RelationalDatabaseBlueprint& WithIsEngineDefault(bool value) { SetIsEngineDefault(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet = false;

    RelationalDatabaseEngine m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_engineDescription;
    bool m_engineDescriptionHasBeenSet = false;

    Aws::String m_engineVersionDescription;
    bool m_engineVersionDescriptionHasBeenSet = false;

    bool m_isEngineDefault;
    bool m_isEngineDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
