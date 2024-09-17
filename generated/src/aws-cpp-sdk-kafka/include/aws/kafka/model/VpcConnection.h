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
    AWS_KAFKA_API VpcConnection();
    AWS_KAFKA_API VpcConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline VpcConnection& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}
    inline VpcConnection& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}
    inline VpcConnection& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The ARN that identifies the Cluster which the Vpc Connection
     * belongs to.</p>
         
     */
    inline const Aws::String& GetTargetClusterArn() const{ return m_targetClusterArn; }
    inline bool TargetClusterArnHasBeenSet() const { return m_targetClusterArnHasBeenSet; }
    inline void SetTargetClusterArn(const Aws::String& value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn = value; }
    inline void SetTargetClusterArn(Aws::String&& value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn = std::move(value); }
    inline void SetTargetClusterArn(const char* value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn.assign(value); }
    inline VpcConnection& WithTargetClusterArn(const Aws::String& value) { SetTargetClusterArn(value); return *this;}
    inline VpcConnection& WithTargetClusterArn(Aws::String&& value) { SetTargetClusterArn(std::move(value)); return *this;}
    inline VpcConnection& WithTargetClusterArn(const char* value) { SetTargetClusterArn(value); return *this;}
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
    inline VpcConnection& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline VpcConnection& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

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
    inline VpcConnection& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}
    inline VpcConnection& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}
    inline VpcConnection& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The vpcId that belongs to the Vpc Connection.</p>
         
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline VpcConnection& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline VpcConnection& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline VpcConnection& WithVpcId(const char* value) { SetVpcId(value); return *this;}
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
    inline VpcConnection& WithState(const VpcConnectionState& value) { SetState(value); return *this;}
    inline VpcConnection& WithState(VpcConnectionState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;

    Aws::String m_targetClusterArn;
    bool m_targetClusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    VpcConnectionState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
