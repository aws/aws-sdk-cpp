﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/UserIdentity.h>
#include <aws/core/utils/DateTime.h>
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
            <p>Description of the VPC connection.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/VpcConnectionInfo">AWS
   * API Reference</a></p>
   */
  class VpcConnectionInfo
  {
  public:
    AWS_KAFKA_API VpcConnectionInfo();
    AWS_KAFKA_API VpcConnectionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnectionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
      
     *   
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = value; }
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::move(value); }
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn.assign(value); }
    inline VpcConnectionInfo& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}
    inline VpcConnectionInfo& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}
    inline VpcConnectionInfo& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The owner of the VPC Connection.</p>
         
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline VpcConnectionInfo& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline VpcConnectionInfo& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline VpcConnectionInfo& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
 
     *        
     */
    inline const UserIdentity& GetUserIdentity() const{ return m_userIdentity; }
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }
    inline void SetUserIdentity(const UserIdentity& value) { m_userIdentityHasBeenSet = true; m_userIdentity = value; }
    inline void SetUserIdentity(UserIdentity&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::move(value); }
    inline VpcConnectionInfo& WithUserIdentity(const UserIdentity& value) { SetUserIdentity(value); return *this;}
    inline VpcConnectionInfo& WithUserIdentity(UserIdentity&& value) { SetUserIdentity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
      
     *   
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline VpcConnectionInfo& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline VpcConnectionInfo& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    UserIdentity m_userIdentity;
    bool m_userIdentityHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
