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
    AWS_DATAZONE_API ProvisioningProperties();
    AWS_DATAZONE_API ProvisioningProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProvisioningProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cloud formation properties included as part of the provisioning
     * properties of an environment blueprint.</p>
     */
    inline const CloudFormationProperties& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p>The cloud formation properties included as part of the provisioning
     * properties of an environment blueprint.</p>
     */
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    /**
     * <p>The cloud formation properties included as part of the provisioning
     * properties of an environment blueprint.</p>
     */
    inline void SetCloudFormation(const CloudFormationProperties& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    /**
     * <p>The cloud formation properties included as part of the provisioning
     * properties of an environment blueprint.</p>
     */
    inline void SetCloudFormation(CloudFormationProperties&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    /**
     * <p>The cloud formation properties included as part of the provisioning
     * properties of an environment blueprint.</p>
     */
    inline ProvisioningProperties& WithCloudFormation(const CloudFormationProperties& value) { SetCloudFormation(value); return *this;}

    /**
     * <p>The cloud formation properties included as part of the provisioning
     * properties of an environment blueprint.</p>
     */
    inline ProvisioningProperties& WithCloudFormation(CloudFormationProperties&& value) { SetCloudFormation(std::move(value)); return *this;}

  private:

    CloudFormationProperties m_cloudFormation;
    bool m_cloudFormationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
