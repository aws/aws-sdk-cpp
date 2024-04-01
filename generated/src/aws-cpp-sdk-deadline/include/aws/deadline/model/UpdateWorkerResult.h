/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/LogConfiguration.h>
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
namespace deadline
{
namespace Model
{
  class UpdateWorkerResult
  {
  public:
    AWS_DEADLINE_API UpdateWorkerResult();
    AWS_DEADLINE_API UpdateWorkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API UpdateWorkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The worker log to update.</p>
     */
    inline const LogConfiguration& GetLog() const{ return m_log; }

    /**
     * <p>The worker log to update.</p>
     */
    inline void SetLog(const LogConfiguration& value) { m_log = value; }

    /**
     * <p>The worker log to update.</p>
     */
    inline void SetLog(LogConfiguration&& value) { m_log = std::move(value); }

    /**
     * <p>The worker log to update.</p>
     */
    inline UpdateWorkerResult& WithLog(const LogConfiguration& value) { SetLog(value); return *this;}

    /**
     * <p>The worker log to update.</p>
     */
    inline UpdateWorkerResult& WithLog(LogConfiguration&& value) { SetLog(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateWorkerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateWorkerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateWorkerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LogConfiguration m_log;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
