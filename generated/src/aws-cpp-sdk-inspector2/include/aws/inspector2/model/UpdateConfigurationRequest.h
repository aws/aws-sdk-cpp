/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/Ec2Configuration.h>
#include <aws/inspector2/model/EcrConfiguration.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class UpdateConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies how the Amazon EC2 automated scan will be updated for your
     * environment.</p>
     */
    inline const Ec2Configuration& GetEc2Configuration() const{ return m_ec2Configuration; }
    inline bool Ec2ConfigurationHasBeenSet() const { return m_ec2ConfigurationHasBeenSet; }
    inline void SetEc2Configuration(const Ec2Configuration& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration = value; }
    inline void SetEc2Configuration(Ec2Configuration&& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration = std::move(value); }
    inline UpdateConfigurationRequest& WithEc2Configuration(const Ec2Configuration& value) { SetEc2Configuration(value); return *this;}
    inline UpdateConfigurationRequest& WithEc2Configuration(Ec2Configuration&& value) { SetEc2Configuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the ECR automated re-scan will be updated for your
     * environment.</p>
     */
    inline const EcrConfiguration& GetEcrConfiguration() const{ return m_ecrConfiguration; }
    inline bool EcrConfigurationHasBeenSet() const { return m_ecrConfigurationHasBeenSet; }
    inline void SetEcrConfiguration(const EcrConfiguration& value) { m_ecrConfigurationHasBeenSet = true; m_ecrConfiguration = value; }
    inline void SetEcrConfiguration(EcrConfiguration&& value) { m_ecrConfigurationHasBeenSet = true; m_ecrConfiguration = std::move(value); }
    inline UpdateConfigurationRequest& WithEcrConfiguration(const EcrConfiguration& value) { SetEcrConfiguration(value); return *this;}
    inline UpdateConfigurationRequest& WithEcrConfiguration(EcrConfiguration&& value) { SetEcrConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Ec2Configuration m_ec2Configuration;
    bool m_ec2ConfigurationHasBeenSet = false;

    EcrConfiguration m_ecrConfiguration;
    bool m_ecrConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
