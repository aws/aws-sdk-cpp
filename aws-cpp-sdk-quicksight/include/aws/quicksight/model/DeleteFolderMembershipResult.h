/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API DeleteFolderMembershipResult
  {
  public:
    DeleteFolderMembershipResult();
    DeleteFolderMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteFolderMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of deleting the asset. If succeeded, the status is <code>SC_OK
     * (200)</code>.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The status of deleting the asset. If succeeded, the status is <code>SC_OK
     * (200)</code>.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The status of deleting the asset. If succeeded, the status is <code>SC_OK
     * (200)</code>.</p>
     */
    inline DeleteFolderMembershipResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The request ID.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID.</p>
     */
    inline DeleteFolderMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID.</p>
     */
    inline DeleteFolderMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID.</p>
     */
    inline DeleteFolderMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
