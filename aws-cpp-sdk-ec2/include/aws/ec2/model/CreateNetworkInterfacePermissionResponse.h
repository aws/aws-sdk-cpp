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
#include <aws/ec2/model/NetworkInterfacePermission.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of CreateNetworkInterfacePermission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermissionResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateNetworkInterfacePermissionResponse
  {
  public:
    CreateNetworkInterfacePermissionResponse();
    CreateNetworkInterfacePermissionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateNetworkInterfacePermissionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the permission for the network interface.</p>
     */
    inline const NetworkInterfacePermission& GetInterfacePermission() const{ return m_interfacePermission; }

    /**
     * <p>Information about the permission for the network interface.</p>
     */
    inline void SetInterfacePermission(const NetworkInterfacePermission& value) { m_interfacePermission = value; }

    /**
     * <p>Information about the permission for the network interface.</p>
     */
    inline void SetInterfacePermission(NetworkInterfacePermission&& value) { m_interfacePermission = std::move(value); }

    /**
     * <p>Information about the permission for the network interface.</p>
     */
    inline CreateNetworkInterfacePermissionResponse& WithInterfacePermission(const NetworkInterfacePermission& value) { SetInterfacePermission(value); return *this;}

    /**
     * <p>Information about the permission for the network interface.</p>
     */
    inline CreateNetworkInterfacePermissionResponse& WithInterfacePermission(NetworkInterfacePermission&& value) { SetInterfacePermission(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateNetworkInterfacePermissionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateNetworkInterfacePermissionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkInterfacePermission m_interfacePermission;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
