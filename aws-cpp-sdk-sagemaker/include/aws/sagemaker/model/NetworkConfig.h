/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/VpcConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Networking options for a job, such as network traffic encryption between
   * containers, whether to allow inbound and outbound network calls to and from
   * containers, and the VPC subnets and security groups to use for VPC-enabled
   * jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NetworkConfig">AWS
   * API Reference</a></p>
   */
  class NetworkConfig
  {
  public:
    AWS_SAGEMAKER_API NetworkConfig();
    AWS_SAGEMAKER_API NetworkConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NetworkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to encrypt all communications between distributed processing jobs.
     * Choose <code>True</code> to encrypt communications. Encryption provides greater
     * security for distributed processing jobs, but the processing might take
     * longer.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const{ return m_enableInterContainerTrafficEncryption; }

    /**
     * <p>Whether to encrypt all communications between distributed processing jobs.
     * Choose <code>True</code> to encrypt communications. Encryption provides greater
     * security for distributed processing jobs, but the processing might take
     * longer.</p>
     */
    inline bool EnableInterContainerTrafficEncryptionHasBeenSet() const { return m_enableInterContainerTrafficEncryptionHasBeenSet; }

    /**
     * <p>Whether to encrypt all communications between distributed processing jobs.
     * Choose <code>True</code> to encrypt communications. Encryption provides greater
     * security for distributed processing jobs, but the processing might take
     * longer.</p>
     */
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryptionHasBeenSet = true; m_enableInterContainerTrafficEncryption = value; }

    /**
     * <p>Whether to encrypt all communications between distributed processing jobs.
     * Choose <code>True</code> to encrypt communications. Encryption provides greater
     * security for distributed processing jobs, but the processing might take
     * longer.</p>
     */
    inline NetworkConfig& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}


    /**
     * <p>Whether to allow inbound and outbound network calls to and from the
     * containers used for the processing job.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>Whether to allow inbound and outbound network calls to and from the
     * containers used for the processing job.</p>
     */
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }

    /**
     * <p>Whether to allow inbound and outbound network calls to and from the
     * containers used for the processing job.</p>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }

    /**
     * <p>Whether to allow inbound and outbound network calls to and from the
     * containers used for the processing job.</p>
     */
    inline NetworkConfig& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}


    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline NetworkConfig& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    
    inline NetworkConfig& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    bool m_enableInterContainerTrafficEncryption;
    bool m_enableInterContainerTrafficEncryptionHasBeenSet = false;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
