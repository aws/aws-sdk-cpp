/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The IAM properties of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/IamPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class IamPropertiesOutput
  {
  public:
    AWS_DATAZONE_API IamPropertiesOutput() = default;
    AWS_DATAZONE_API IamPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API IamPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment ID of the connection.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    IamPropertiesOutput& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon Web Services Glue lineage sync is enabled for a
     * connection.</p>
     */
    inline bool GetGlueLineageSyncEnabled() const { return m_glueLineageSyncEnabled; }
    inline bool GlueLineageSyncEnabledHasBeenSet() const { return m_glueLineageSyncEnabledHasBeenSet; }
    inline void SetGlueLineageSyncEnabled(bool value) { m_glueLineageSyncEnabledHasBeenSet = true; m_glueLineageSyncEnabled = value; }
    inline IamPropertiesOutput& WithGlueLineageSyncEnabled(bool value) { SetGlueLineageSyncEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    bool m_glueLineageSyncEnabled{false};
    bool m_glueLineageSyncEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
