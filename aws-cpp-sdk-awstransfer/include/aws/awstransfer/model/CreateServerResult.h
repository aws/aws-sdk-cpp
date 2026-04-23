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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Transfer
{
namespace Model
{
  class AWS_TRANSFER_API CreateServerResult
  {
  public:
    CreateServerResult();
    CreateServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service-assigned ID of the SFTP server that is created.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The service-assigned ID of the SFTP server that is created.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>The service-assigned ID of the SFTP server that is created.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>The service-assigned ID of the SFTP server that is created.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>The service-assigned ID of the SFTP server that is created.</p>
     */
    inline CreateServerResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The service-assigned ID of the SFTP server that is created.</p>
     */
    inline CreateServerResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The service-assigned ID of the SFTP server that is created.</p>
     */
    inline CreateServerResult& WithServerId(const char* value) { SetServerId(value); return *this;}

  private:

    Aws::String m_serverId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
