/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafka/model/VpcConnectionState.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>The VPC connection object.</p>
         <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/VpcConnection">AWS
   * API Reference</a></p>
   */
  class VpcConnection
  {
  public:
    AWS_KAFKA_API VpcConnection() = default;
    AWS_KAFKA_API VpcConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The ARN that identifies the Vpc Connection.</p>
         
     */
    inline const Aws::String& GetVpcConnectionArn() const { return m_vpcConnectionArn; }
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
    template<typename VpcConnectionArnT = Aws::String>
    void SetVpcConnectionArn(VpcConnectionArnT&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::forward<VpcConnectionArnT>(value); }
    template<typename VpcConnectionArnT = Aws::String>
    VpcConnection& WithVpcConnectionArn(VpcConnectionArnT&& value) { SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ARN that identifies the Cluster which the Vpc Connection
     * belongs to.</p>
         
     */
    inline const Aws::String& GetTargetClusterArn() const { return m_targetClusterArn; }
    inline bool TargetClusterArnHasBeenSet() const { return m_targetClusterArnHasBeenSet; }
    template<typename TargetClusterArnT = Aws::String>
    void SetTargetClusterArn(TargetClusterArnT&& value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn = std::forward<TargetClusterArnT>(value); }
    template<typename TargetClusterArnT = Aws::String>
    VpcConnection& WithTargetClusterArn(TargetClusterArnT&& value) { SetTargetClusterArn(std::forward<TargetClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Creation time of the Vpc Connection.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    VpcConnection& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about the auth scheme of Vpc Connection.</p>
       
     *  
     */
    inline const Aws::String& GetAuthentication() const { return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    template<typename AuthenticationT = Aws::String>
    void SetAuthentication(AuthenticationT&& value) { m_authenticationHasBeenSet = true; m_authentication = std::forward<AuthenticationT>(value); }
    template<typename AuthenticationT = Aws::String>
    VpcConnection& WithAuthentication(AuthenticationT&& value) { SetAuthentication(std::forward<AuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The vpcId that belongs to the Vpc Connection.</p>
         
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    VpcConnection& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>State of the Vpc Connection.</p>
         
     */
    inline VpcConnectionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VpcConnectionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline VpcConnection& WithState(VpcConnectionState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;

    Aws::String m_targetClusterArn;
    bool m_targetClusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    VpcConnectionState m_state{VpcConnectionState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
