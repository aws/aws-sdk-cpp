/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/RepositorySyncAttempt.h>
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
namespace CodeConnections
{
namespace Model
{
  class GetRepositorySyncStatusResult
  {
  public:
    AWS_CODECONNECTIONS_API GetRepositorySyncStatusResult();
    AWS_CODECONNECTIONS_API GetRepositorySyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API GetRepositorySyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the latest sync returned for a specified repository and
     * branch.</p>
     */
    inline const RepositorySyncAttempt& GetLatestSync() const{ return m_latestSync; }

    /**
     * <p>The status of the latest sync returned for a specified repository and
     * branch.</p>
     */
    inline void SetLatestSync(const RepositorySyncAttempt& value) { m_latestSync = value; }

    /**
     * <p>The status of the latest sync returned for a specified repository and
     * branch.</p>
     */
    inline void SetLatestSync(RepositorySyncAttempt&& value) { m_latestSync = std::move(value); }

    /**
     * <p>The status of the latest sync returned for a specified repository and
     * branch.</p>
     */
    inline GetRepositorySyncStatusResult& WithLatestSync(const RepositorySyncAttempt& value) { SetLatestSync(value); return *this;}

    /**
     * <p>The status of the latest sync returned for a specified repository and
     * branch.</p>
     */
    inline GetRepositorySyncStatusResult& WithLatestSync(RepositorySyncAttempt&& value) { SetLatestSync(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRepositorySyncStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRepositorySyncStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRepositorySyncStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RepositorySyncAttempt m_latestSync;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
