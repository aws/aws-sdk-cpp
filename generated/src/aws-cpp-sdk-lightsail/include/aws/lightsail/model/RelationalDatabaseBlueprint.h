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
    AWS_LIGHTSAIL_API RelationalDatabaseBlueprint() = default;
    AWS_LIGHTSAIL_API RelationalDatabaseBlueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseBlueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the database blueprint.</p>
     */
    inline const Aws::String& GetBlueprintId() const { return m_blueprintId; }
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }
    template<typename BlueprintIdT = Aws::String>
    void SetBlueprintId(BlueprintIdT&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::forward<BlueprintIdT>(value); }
    template<typename BlueprintIdT = Aws::String>
    RelationalDatabaseBlueprint& WithBlueprintId(BlueprintIdT&& value) { SetBlueprintId(std::forward<BlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database software of the database blueprint (for example,
     * <code>MySQL</code>).</p>
     */
    inline RelationalDatabaseEngine GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(RelationalDatabaseEngine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline RelationalDatabaseBlueprint& WithEngine(RelationalDatabaseEngine value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version for the database blueprint (for example,
     * <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RelationalDatabaseBlueprint& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine for the database blueprint.</p>
     */
    inline const Aws::String& GetEngineDescription() const { return m_engineDescription; }
    inline bool EngineDescriptionHasBeenSet() const { return m_engineDescriptionHasBeenSet; }
    template<typename EngineDescriptionT = Aws::String>
    void SetEngineDescription(EngineDescriptionT&& value) { m_engineDescriptionHasBeenSet = true; m_engineDescription = std::forward<EngineDescriptionT>(value); }
    template<typename EngineDescriptionT = Aws::String>
    RelationalDatabaseBlueprint& WithEngineDescription(EngineDescriptionT&& value) { SetEngineDescription(std::forward<EngineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the database engine version for the database
     * blueprint.</p>
     */
    inline const Aws::String& GetEngineVersionDescription() const { return m_engineVersionDescription; }
    inline bool EngineVersionDescriptionHasBeenSet() const { return m_engineVersionDescriptionHasBeenSet; }
    template<typename EngineVersionDescriptionT = Aws::String>
    void SetEngineVersionDescription(EngineVersionDescriptionT&& value) { m_engineVersionDescriptionHasBeenSet = true; m_engineVersionDescription = std::forward<EngineVersionDescriptionT>(value); }
    template<typename EngineVersionDescriptionT = Aws::String>
    RelationalDatabaseBlueprint& WithEngineVersionDescription(EngineVersionDescriptionT&& value) { SetEngineVersionDescription(std::forward<EngineVersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the engine version is the default for the
     * database blueprint.</p>
     */
    inline bool GetIsEngineDefault() const { return m_isEngineDefault; }
    inline bool IsEngineDefaultHasBeenSet() const { return m_isEngineDefaultHasBeenSet; }
    inline void SetIsEngineDefault(bool value) { m_isEngineDefaultHasBeenSet = true; m_isEngineDefault = value; }
    inline RelationalDatabaseBlueprint& WithIsEngineDefault(bool value) { SetIsEngineDefault(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet = false;

    RelationalDatabaseEngine m_engine{RelationalDatabaseEngine::NOT_SET};
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_engineDescription;
    bool m_engineDescriptionHasBeenSet = false;

    Aws::String m_engineVersionDescription;
    bool m_engineVersionDescriptionHasBeenSet = false;

    bool m_isEngineDefault{false};
    bool m_isEngineDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
