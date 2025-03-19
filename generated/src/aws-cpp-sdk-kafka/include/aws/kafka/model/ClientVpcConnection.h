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
            <p>The client VPC connection object.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClientVpcConnection">AWS
   * API Reference</a></p>
   */
  class ClientVpcConnection
  {
  public:
    AWS_KAFKA_API ClientVpcConnection() = default;
    AWS_KAFKA_API ClientVpcConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClientVpcConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    ClientVpcConnection& WithAuthentication(AuthenticationT&& value) { SetAuthentication(std::forward<AuthenticationT>(value)); return *this;}
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
    ClientVpcConnection& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>State of the Vpc Connection.</p>
         
     */
    inline VpcConnectionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VpcConnectionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ClientVpcConnection& WithState(VpcConnectionState value) { SetState(value); return *this;}
    ///@}

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
    ClientVpcConnection& WithVpcConnectionArn(VpcConnectionArnT&& value) { SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Owner of the Vpc Connection.</p>
         
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ClientVpcConnection& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    VpcConnectionState m_state{VpcConnectionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
