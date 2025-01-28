/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p> The structure for details of the VPC Endpoint Service which Firehose uses to
   * create a PrivateLink to the database. </p> <p>Amazon Data Firehose is in preview
   * release and is subject to change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseSourceVPCConfiguration">AWS
   * API Reference</a></p>
   */
  class DatabaseSourceVPCConfiguration
  {
  public:
    AWS_FIREHOSE_API DatabaseSourceVPCConfiguration();
    AWS_FIREHOSE_API DatabaseSourceVPCConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseSourceVPCConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The VPC endpoint service name which Firehose uses to create a PrivateLink to
     * the database. The endpoint service must have the Firehose service principle
     * <code>firehose.amazonaws.com</code> as an allowed principal on the VPC endpoint
     * service. The VPC endpoint service name is a string that looks like
     * <code>com.amazonaws.vpce.&lt;region&gt;.&lt;vpc-endpoint-service-id&gt;</code>.
     * </p> <p>Amazon Data Firehose is in preview release and is subject to change.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }
    inline DatabaseSourceVPCConfiguration& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}
    inline DatabaseSourceVPCConfiguration& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}
    inline DatabaseSourceVPCConfiguration& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
