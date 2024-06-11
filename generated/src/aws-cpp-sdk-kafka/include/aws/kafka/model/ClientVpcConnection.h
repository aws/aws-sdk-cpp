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
    AWS_KAFKA_API ClientVpcConnection();
    AWS_KAFKA_API ClientVpcConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClientVpcConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Information about the auth scheme of Vpc Connection.</p>
       
     *  
     */
    inline const Aws::String& GetAuthentication() const{ return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    inline void SetAuthentication(const Aws::String& value) { m_authenticationHasBeenSet = true; m_authentication = value; }
    inline void SetAuthentication(Aws::String&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }
    inline void SetAuthentication(const char* value) { m_authenticationHasBeenSet = true; m_authentication.assign(value); }
    inline ClientVpcConnection& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}
    inline ClientVpcConnection& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}
    inline ClientVpcConnection& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Creation time of the Vpc Connection.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ClientVpcConnection& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ClientVpcConnection& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>State of the Vpc Connection.</p>
         
     */
    inline const VpcConnectionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpcConnectionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpcConnectionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ClientVpcConnection& WithState(const VpcConnectionState& value) { SetState(value); return *this;}
    inline ClientVpcConnection& WithState(VpcConnectionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ARN that identifies the Vpc Connection.</p>
         
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = value; }
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::move(value); }
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn.assign(value); }
    inline ClientVpcConnection& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}
    inline ClientVpcConnection& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}
    inline ClientVpcConnection& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Owner of the Vpc Connection.</p>
         
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ClientVpcConnection& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ClientVpcConnection& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ClientVpcConnection& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    VpcConnectionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
