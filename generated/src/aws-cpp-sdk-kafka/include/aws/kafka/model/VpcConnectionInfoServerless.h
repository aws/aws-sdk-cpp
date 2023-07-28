/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/UserIdentity.h>
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
   * Description of the VPC connection.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/VpcConnectionInfoServerless">AWS
   * API Reference</a></p>
   */
  class VpcConnectionInfoServerless
  {
  public:
    AWS_KAFKA_API VpcConnectionInfoServerless();
    AWS_KAFKA_API VpcConnectionInfoServerless(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API VpcConnectionInfoServerless& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
     */
    inline VpcConnectionInfoServerless& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when Amazon MSK creates the VPC Connnection.</p>
     */
    inline VpcConnectionInfoServerless& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline VpcConnectionInfoServerless& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline VpcConnectionInfoServerless& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * 
            <p>The owner of the VPC Connection.</p>
     */
    inline VpcConnectionInfoServerless& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
     */
    inline const UserIdentity& GetUserIdentity() const{ return m_userIdentity; }

    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
     */
    inline bool UserIdentityHasBeenSet() const { return m_userIdentityHasBeenSet; }

    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
     */
    inline void SetUserIdentity(const UserIdentity& value) { m_userIdentityHasBeenSet = true; m_userIdentity = value; }

    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
     */
    inline void SetUserIdentity(UserIdentity&& value) { m_userIdentityHasBeenSet = true; m_userIdentity = std::move(value); }

    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
     */
    inline VpcConnectionInfoServerless& WithUserIdentity(const UserIdentity& value) { SetUserIdentity(value); return *this;}

    /**
     * 
            <p>Description of the requester that calls the API operation.</p>
     */
    inline VpcConnectionInfoServerless& WithUserIdentity(UserIdentity&& value) { SetUserIdentity(std::move(value)); return *this;}


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline VpcConnectionInfoServerless& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline VpcConnectionInfoServerless& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline VpcConnectionInfoServerless& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    UserIdentity m_userIdentity;
    bool m_userIdentityHasBeenSet = false;

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
