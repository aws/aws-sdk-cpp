/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/LakeFormationConfiguration.h>
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
   * <p>The provisioning configuration of the blueprint.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProvisioningConfiguration">AWS
   * API Reference</a></p>
   */
  class ProvisioningConfiguration
  {
  public:
    AWS_DATAZONE_API ProvisioningConfiguration();
    AWS_DATAZONE_API ProvisioningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProvisioningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lake Formation configuration of the Data Lake blueprint.</p>
     */
    inline const LakeFormationConfiguration& GetLakeFormationConfiguration() const{ return m_lakeFormationConfiguration; }
    inline bool LakeFormationConfigurationHasBeenSet() const { return m_lakeFormationConfigurationHasBeenSet; }
    inline void SetLakeFormationConfiguration(const LakeFormationConfiguration& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = value; }
    inline void SetLakeFormationConfiguration(LakeFormationConfiguration&& value) { m_lakeFormationConfigurationHasBeenSet = true; m_lakeFormationConfiguration = std::move(value); }
    inline ProvisioningConfiguration& WithLakeFormationConfiguration(const LakeFormationConfiguration& value) { SetLakeFormationConfiguration(value); return *this;}
    inline ProvisioningConfiguration& WithLakeFormationConfiguration(LakeFormationConfiguration&& value) { SetLakeFormationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    LakeFormationConfiguration m_lakeFormationConfiguration;
    bool m_lakeFormationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
