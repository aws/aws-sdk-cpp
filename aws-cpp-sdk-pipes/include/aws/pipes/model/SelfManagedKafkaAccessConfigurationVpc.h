/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>This structure specifies the VPC subnets and security groups for the stream,
   * and whether a public IP address is to be used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/SelfManagedKafkaAccessConfigurationVpc">AWS
   * API Reference</a></p>
   */
  class SelfManagedKafkaAccessConfigurationVpc
  {
  public:
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationVpc();
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationVpc(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationVpc& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroup() const{ return m_securityGroup; }

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline void SetSecurityGroup(const Aws::Vector<Aws::String>& value) { m_securityGroupHasBeenSet = true; m_securityGroup = value; }

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline void SetSecurityGroup(Aws::Vector<Aws::String>&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::move(value); }

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& WithSecurityGroup(const Aws::Vector<Aws::String>& value) { SetSecurityGroup(value); return *this;}

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& WithSecurityGroup(Aws::Vector<Aws::String>&& value) { SetSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& AddSecurityGroup(const Aws::String& value) { m_securityGroupHasBeenSet = true; m_securityGroup.push_back(value); return *this; }

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& AddSecurityGroup(Aws::String&& value) { m_securityGroupHasBeenSet = true; m_securityGroup.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the security groups associated with the stream. These security
     * groups must all be in the same VPC. You can specify as many as five security
     * groups. If you do not specify a security group, the default security group for
     * the VPC is used.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& AddSecurityGroup(const char* value) { m_securityGroupHasBeenSet = true; m_securityGroup.push_back(value); return *this; }


    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the subnets associated with the stream. These subnets must all be
     * in the same VPC. You can specify as many as 16 subnets.</p>
     */
    inline SelfManagedKafkaAccessConfigurationVpc& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityGroup;
    bool m_securityGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
