/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/CustomEntityConfig.h>
#include <aws/cleanroomsml/model/EntityType.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>The configuration for log redaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/LogRedactionConfiguration">AWS
   * API Reference</a></p>
   */
  class LogRedactionConfiguration
  {
  public:
    AWS_CLEANROOMSML_API LogRedactionConfiguration() = default;
    AWS_CLEANROOMSML_API LogRedactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API LogRedactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the entities to be redacted from logs. Entities to redact are
     * "ALL_PERSONALLY_IDENTIFIABLE_INFORMATION", "NUMBERS","CUSTOM". If CUSTOM is
     * supplied or configured, custom patterns (customDataIdentifiers) should be
     * provided, and the patterns will be redacted in logs or error messages.</p>
     */
    inline const Aws::Vector<EntityType>& GetEntitiesToRedact() const { return m_entitiesToRedact; }
    inline bool EntitiesToRedactHasBeenSet() const { return m_entitiesToRedactHasBeenSet; }
    template<typename EntitiesToRedactT = Aws::Vector<EntityType>>
    void SetEntitiesToRedact(EntitiesToRedactT&& value) { m_entitiesToRedactHasBeenSet = true; m_entitiesToRedact = std::forward<EntitiesToRedactT>(value); }
    template<typename EntitiesToRedactT = Aws::Vector<EntityType>>
    LogRedactionConfiguration& WithEntitiesToRedact(EntitiesToRedactT&& value) { SetEntitiesToRedact(std::forward<EntitiesToRedactT>(value)); return *this;}
    inline LogRedactionConfiguration& AddEntitiesToRedact(EntityType value) { m_entitiesToRedactHasBeenSet = true; m_entitiesToRedact.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for custom entities in the context of log
     * redaction.</p>
     */
    inline const CustomEntityConfig& GetCustomEntityConfig() const { return m_customEntityConfig; }
    inline bool CustomEntityConfigHasBeenSet() const { return m_customEntityConfigHasBeenSet; }
    template<typename CustomEntityConfigT = CustomEntityConfig>
    void SetCustomEntityConfig(CustomEntityConfigT&& value) { m_customEntityConfigHasBeenSet = true; m_customEntityConfig = std::forward<CustomEntityConfigT>(value); }
    template<typename CustomEntityConfigT = CustomEntityConfig>
    LogRedactionConfiguration& WithCustomEntityConfig(CustomEntityConfigT&& value) { SetCustomEntityConfig(std::forward<CustomEntityConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EntityType> m_entitiesToRedact;
    bool m_entitiesToRedactHasBeenSet = false;

    CustomEntityConfig m_customEntityConfig;
    bool m_customEntityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
