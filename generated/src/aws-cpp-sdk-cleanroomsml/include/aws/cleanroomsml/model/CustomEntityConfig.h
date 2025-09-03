/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The configuration for defining custom patterns to be redacted from logs and
   * error messages. This is for the CUSTOM config under entitiesToRedact. Both
   * CustomEntityConfig and entitiesToRedact need to be present or not
   * present.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/CustomEntityConfig">AWS
   * API Reference</a></p>
   */
  class CustomEntityConfig
  {
  public:
    AWS_CLEANROOMSML_API CustomEntityConfig() = default;
    AWS_CLEANROOMSML_API CustomEntityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API CustomEntityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines data identifiers for the custom entity configuration. Provide this
     * only if CUSTOM redaction is configured. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDataIdentifiers() const { return m_customDataIdentifiers; }
    inline bool CustomDataIdentifiersHasBeenSet() const { return m_customDataIdentifiersHasBeenSet; }
    template<typename CustomDataIdentifiersT = Aws::Vector<Aws::String>>
    void SetCustomDataIdentifiers(CustomDataIdentifiersT&& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers = std::forward<CustomDataIdentifiersT>(value); }
    template<typename CustomDataIdentifiersT = Aws::Vector<Aws::String>>
    CustomEntityConfig& WithCustomDataIdentifiers(CustomDataIdentifiersT&& value) { SetCustomDataIdentifiers(std::forward<CustomDataIdentifiersT>(value)); return *this;}
    template<typename CustomDataIdentifiersT = Aws::String>
    CustomEntityConfig& AddCustomDataIdentifiers(CustomDataIdentifiersT&& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers.emplace_back(std::forward<CustomDataIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_customDataIdentifiers;
    bool m_customDataIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
