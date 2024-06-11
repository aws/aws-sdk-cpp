﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/EnvironmentStatus.h>
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
namespace Cloud9
{
namespace Model
{
  class DescribeEnvironmentStatusResult
  {
  public:
    AWS_CLOUD9_API DescribeEnvironmentStatusResult();
    AWS_CLOUD9_API DescribeEnvironmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API DescribeEnvironmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the environment. Available values include:</p> <ul> <li> <p>
     * <code>connecting</code>: The environment is connecting.</p> </li> <li> <p>
     * <code>creating</code>: The environment is being created.</p> </li> <li> <p>
     * <code>deleting</code>: The environment is being deleted.</p> </li> <li> <p>
     * <code>error</code>: The environment is in an error state.</p> </li> <li> <p>
     * <code>ready</code>: The environment is ready.</p> </li> <li> <p>
     * <code>stopped</code>: The environment is stopped.</p> </li> <li> <p>
     * <code>stopping</code>: The environment is stopping.</p> </li> </ul>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }
    inline void SetStatus(EnvironmentStatus&& value) { m_status = std::move(value); }
    inline DescribeEnvironmentStatusResult& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}
    inline DescribeEnvironmentStatusResult& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any informational message about the status of the environment.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeEnvironmentStatusResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeEnvironmentStatusResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeEnvironmentStatusResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEnvironmentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEnvironmentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEnvironmentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EnvironmentStatus m_status;

    Aws::String m_message;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
