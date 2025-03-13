/**
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
    AWS_KAFKA_API VpcConnectionInfo() = default;
    AWS_KAFKA_API VpcConnectionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnectionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
      
     *   
     */
    inline const Aws::String& GetVpcConnectionArn() const { return m_vpcConnectionArn; }
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }
    template<typename VpcConnectionArnT = Aws::String>
    void SetVpcConnectionArn(VpcConnectionArnT&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::forward<VpcConnectionArnT>(value); }
    template<typename VpcConnectionArnT = Aws::String>
    VpcConnectionInfo& WithVpcConnectionArn(VpcConnectionArnT&& value) { SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The owner of the VPC Connection.</p>
         
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    VpcConnectionInfo& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
 
     *        
     */
    inline const UserIdentity& GetUserIdentity() const { return m_userIdentity; }
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }
    template<typename UserIdentityT = UserIdentity>
    void SetUserIdentity(UserIdentityT&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::forward<UserIdentityT>(value); }
    template<typename UserIdentityT = UserIdentity>
    VpcConnectionInfo& WithUserIdentity(UserIdentityT&& value) { SetUserIdentity(std::forward<UserIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
      
     *   
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    VpcConnectionInfo& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    UserIdentity m_userIdentity;
    bool m_userIdentityHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
