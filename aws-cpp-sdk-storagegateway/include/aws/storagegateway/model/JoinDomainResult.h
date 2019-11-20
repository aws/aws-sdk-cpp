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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/ActiveDirectoryStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>JoinDomainOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/JoinDomainOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API JoinDomainResult
  {
  public:
    JoinDomainResult();
    JoinDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    JoinDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline JoinDomainResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline JoinDomainResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that joined the
     * domain.</p>
     */
    inline JoinDomainResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>Indicates the status of the gateway as a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline const ActiveDirectoryStatus& GetActiveDirectoryStatus() const{ return m_activeDirectoryStatus; }

    /**
     * <p>Indicates the status of the gateway as a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline void SetActiveDirectoryStatus(const ActiveDirectoryStatus& value) { m_activeDirectoryStatus = value; }

    /**
     * <p>Indicates the status of the gateway as a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline void SetActiveDirectoryStatus(ActiveDirectoryStatus&& value) { m_activeDirectoryStatus = std::move(value); }

    /**
     * <p>Indicates the status of the gateway as a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline JoinDomainResult& WithActiveDirectoryStatus(const ActiveDirectoryStatus& value) { SetActiveDirectoryStatus(value); return *this;}

    /**
     * <p>Indicates the status of the gateway as a member of the Active Directory
     * domain.</p> <ul> <li> <p>ACCESS_DENIED: Indicates that the
     * <code>JoinDomain</code> operation failed due to an authentication error.</p>
     * </li> <li> <p>DETACHED: Indicates that gateway is not joined to a domain.</p>
     * </li> <li> <p>JOINED: Indicates that the gateway has successfully joined a
     * domain.</p> </li> <li> <p>JOINING: Indicates that a <code>JoinDomain</code>
     * operation is in progress.</p> </li> <li> <p>NETWORK_ERROR: Indicates that
     * <code>JoinDomain</code> operation failed due to a network or connectivity
     * error.</p> </li> <li> <p>TIMEOUT: Indicates that the <code>JoinDomain</code>
     * operation failed because the operation didn't complete within the allotted
     * time.</p> </li> <li> <p>UNKNOWN_ERROR: Indicates that the
     * <code>JoinDomain</code> operation failed due to another type of error.</p> </li>
     * </ul>
     */
    inline JoinDomainResult& WithActiveDirectoryStatus(ActiveDirectoryStatus&& value) { SetActiveDirectoryStatus(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayARN;

    ActiveDirectoryStatus m_activeDirectoryStatus;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
