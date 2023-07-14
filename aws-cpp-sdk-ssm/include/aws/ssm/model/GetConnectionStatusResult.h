﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * <p>The ID of the managed node to check connection status. </p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The ID of the managed node to check connection status. </p>
     */
    inline void SetTarget(const Aws::String& value) { m_target = value; }

    /**
     * <p>The ID of the managed node to check connection status. </p>
     */
    inline void SetTarget(Aws::String&& value) { m_target = std::move(value); }

    /**
     * <p>The ID of the managed node to check connection status. </p>
     */
    inline void SetTarget(const char* value) { m_target.assign(value); }

    /**
     * <p>The ID of the managed node to check connection status. </p>
     */
    inline GetConnectionStatusResult& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The ID of the managed node to check connection status. </p>
     */
    inline GetConnectionStatusResult& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed node to check connection status. </p>
     */
    inline GetConnectionStatusResult& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The status of the connection to the managed node. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline const ConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the connection to the managed node. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline void SetStatus(const ConnectionStatus& value) { m_status = value; }

    /**
     * <p>The status of the connection to the managed node. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline void SetStatus(ConnectionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the connection to the managed node. For example, 'Connected' or
     * 'Not Connected'.</p>
     */
    inline GetConnectionStatusResult& WithStatus(const ConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the connection to the managed node. For example, 'Connected' or
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
