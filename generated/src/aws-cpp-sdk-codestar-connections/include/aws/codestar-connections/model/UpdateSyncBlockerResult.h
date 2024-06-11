/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/SyncBlocker.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class UpdateSyncBlockerResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API UpdateSyncBlockerResult();
    AWS_CODESTARCONNECTIONS_API UpdateSyncBlockerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API UpdateSyncBlockerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource name for the sync blocker.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline void SetResourceName(const Aws::String& value) { m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceName.assign(value); }
    inline UpdateSyncBlockerResult& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline UpdateSyncBlockerResult& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline UpdateSyncBlockerResult& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent resource name for the sync blocker.</p>
     */
    inline const Aws::String& GetParentResourceName() const{ return m_parentResourceName; }
    inline void SetParentResourceName(const Aws::String& value) { m_parentResourceName = value; }
    inline void SetParentResourceName(Aws::String&& value) { m_parentResourceName = std::move(value); }
    inline void SetParentResourceName(const char* value) { m_parentResourceName.assign(value); }
    inline UpdateSyncBlockerResult& WithParentResourceName(const Aws::String& value) { SetParentResourceName(value); return *this;}
    inline UpdateSyncBlockerResult& WithParentResourceName(Aws::String&& value) { SetParentResourceName(std::move(value)); return *this;}
    inline UpdateSyncBlockerResult& WithParentResourceName(const char* value) { SetParentResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the sync blocker to be updated.</p>
     */
    inline const SyncBlocker& GetSyncBlocker() const{ return m_syncBlocker; }
    inline void SetSyncBlocker(const SyncBlocker& value) { m_syncBlocker = value; }
    inline void SetSyncBlocker(SyncBlocker&& value) { m_syncBlocker = std::move(value); }
    inline UpdateSyncBlockerResult& WithSyncBlocker(const SyncBlocker& value) { SetSyncBlocker(value); return *this;}
    inline UpdateSyncBlockerResult& WithSyncBlocker(SyncBlocker&& value) { SetSyncBlocker(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSyncBlockerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSyncBlockerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSyncBlockerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;

    Aws::String m_parentResourceName;

    SyncBlocker m_syncBlocker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
