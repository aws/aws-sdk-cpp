/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/State.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a VPC endpoint connection to a service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEndpointConnection">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpcEndpointConnection
  {
  public:
    VpcEndpointConnection();
    VpcEndpointConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcEndpointConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline VpcEndpointConnection& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline VpcEndpointConnection& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline VpcEndpointConnection& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The AWS account ID of the owner of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }

    /**
     * <p>The AWS account ID of the owner of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }

    /**
     * <p>The AWS account ID of the owner of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }

    /**
     * <p>The AWS account ID of the owner of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the owner of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}


    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline const State& GetVpcEndpointState() const{ return m_vpcEndpointState; }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointState(const State& value) { m_vpcEndpointStateHasBeenSet = true; m_vpcEndpointState = value; }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointState(State&& value) { m_vpcEndpointStateHasBeenSet = true; m_vpcEndpointState = std::move(value); }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointState(const State& value) { SetVpcEndpointState(value); return *this;}

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointState(State&& value) { SetVpcEndpointState(std::move(value)); return *this;}


    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline VpcEndpointConnection& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The date and time the VPC endpoint was created.</p>
     */
    inline VpcEndpointConnection& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet;

    State m_vpcEndpointState;
    bool m_vpcEndpointStateHasBeenSet;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
