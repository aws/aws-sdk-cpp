/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/S3AccessPointVpcConfiguration.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Used to create an S3 access point that accepts requests only from a virtual
   * private cloud (VPC) to restrict data access to a private network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateAndAttachS3AccessPointS3Configuration">AWS
   * API Reference</a></p>
   */
  class CreateAndAttachS3AccessPointS3Configuration
  {
  public:
    AWS_FSX_API CreateAndAttachS3AccessPointS3Configuration() = default;
    AWS_FSX_API CreateAndAttachS3AccessPointS3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateAndAttachS3AccessPointS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If included, Amazon S3 restricts access to this S3 access point to requests
     * made from the specified virtual private cloud (VPC).</p>
     */
    inline const S3AccessPointVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = S3AccessPointVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = S3AccessPointVpcConfiguration>
    CreateAndAttachS3AccessPointS3Configuration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an access policy to associate with the S3 access point
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html">Configuring
     * IAM policies for using access points</a> in the Amazon Simple Storage Service
     * User Guide.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    CreateAndAttachS3AccessPointS3Configuration& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}
  private:

    S3AccessPointVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
