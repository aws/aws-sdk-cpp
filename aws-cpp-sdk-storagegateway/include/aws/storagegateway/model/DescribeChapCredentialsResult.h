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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/ChapInfo.h>
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
   * <p>A JSON object containing a .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeChapCredentialsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeChapCredentialsResult
  {
  public:
    DescribeChapCredentialsResult();
    DescribeChapCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeChapCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline const Aws::Vector<ChapInfo>& GetChapCredentials() const{ return m_chapCredentials; }

    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline void SetChapCredentials(const Aws::Vector<ChapInfo>& value) { m_chapCredentials = value; }

    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline void SetChapCredentials(Aws::Vector<ChapInfo>&& value) { m_chapCredentials = std::move(value); }

    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline DescribeChapCredentialsResult& WithChapCredentials(const Aws::Vector<ChapInfo>& value) { SetChapCredentials(value); return *this;}

    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline DescribeChapCredentialsResult& WithChapCredentials(Aws::Vector<ChapInfo>&& value) { SetChapCredentials(std::move(value)); return *this;}

    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline DescribeChapCredentialsResult& AddChapCredentials(const ChapInfo& value) { m_chapCredentials.push_back(value); return *this; }

    /**
     * <p>An array of <a>ChapInfo</a> objects that represent CHAP credentials. Each
     * object in the array contains CHAP credential information for one
     * target-initiator pair. If no CHAP credentials are set, an empty array is
     * returned. CHAP credential information is provided in a JSON object with the
     * following fields:</p> <ul> <li> <p> <b>InitiatorName</b>: The iSCSI initiator
     * that connects to the target.</p> </li> <li> <p>
     * <b>SecretToAuthenticateInitiator</b>: The secret key that the initiator (for
     * example, the Windows client) must provide to participate in mutual CHAP with the
     * target.</p> </li> <li> <p> <b>SecretToAuthenticateTarget</b>: The secret key
     * that the target must provide to participate in mutual CHAP with the initiator
     * (e.g. Windows client).</p> </li> <li> <p> <b>TargetARN</b>: The Amazon Resource
     * Name (ARN) of the storage volume.</p> </li> </ul>
     */
    inline DescribeChapCredentialsResult& AddChapCredentials(ChapInfo&& value) { m_chapCredentials.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ChapInfo> m_chapCredentials;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
