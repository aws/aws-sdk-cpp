/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/CloudFormationProperties.h>
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
   * <p>The provisioning properties of an environment blueprint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProvisioningProperties">AWS
   * API Reference</a></p>
   */
  class ProvisioningProperties
  {
  public:
    AWS_DATAZONE_API ProvisioningProperties() = default;
    AWS_DATAZONE_API ProvisioningProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProvisioningProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cloud formation properties included as part of the provisioning
     * properties of an environment blueprint.</p>
     */
    inline const CloudFormationProperties& GetCloudFormation() const { return m_cloudFormation; }
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }
    template<typename CloudFormationT = CloudFormationProperties>
    void SetCloudFormation(CloudFormationT&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::forward<CloudFormationT>(value); }
    template<typename CloudFormationT = CloudFormationProperties>
    ProvisioningProperties& WithCloudFormation(CloudFormationT&& value) { SetCloudFormation(std::forward<CloudFormationT>(value)); return *this;}
    ///@}
  private:

    CloudFormationProperties m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
