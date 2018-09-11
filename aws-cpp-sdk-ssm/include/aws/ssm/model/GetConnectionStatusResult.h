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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ConnectionStatus.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetConnectionStatusResult
  {
  public:
    GetConnectionStatusResult();
    GetConnectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConnectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the instance to check connection status. </p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The ID of the instance to check connection status. </p>
     */
    inline void SetTarget(const Aws::String& value) { m_target = value; }

    /**
     * <p>The ID of the instance to check connection status. </p>
     */
    inline void SetTarget(Aws::String&& value) { m_target = std::move(value); }

    /**
     * <p>The ID of the instance to check connection status. </p>
     */
    inline void SetTarget(const char* value) { m_target.assign(value); }

    /**
     * <p>The ID of the instance to check connection status. </p>
     */
    inline GetConnectionStatusResult& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The ID of the instance to check connection status. </p>
     */
    inline GetConnectionStatusResult& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance to check connection status. </p>
     */
    inline GetConnectionStatusResult& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The status of the connection to the instance. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline const ConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the connection to the instance. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline void SetStatus(const ConnectionStatus& value) { m_status = value; }

    /**
     * <p>The status of the connection to the instance. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline void SetStatus(ConnectionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the connection to the instance. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline GetConnectionStatusResult& WithStatus(const ConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the connection to the instance. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline GetConnectionStatusResult& WithStatus(ConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_target;

    ConnectionStatus m_status;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
