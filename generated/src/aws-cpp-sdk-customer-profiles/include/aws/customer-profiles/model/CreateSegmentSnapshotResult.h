/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class CreateSegmentSnapshotResult
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateSegmentSnapshotResult();
    AWS_CUSTOMERPROFILES_API CreateSegmentSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API CreateSegmentSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the segment snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline CreateSegmentSnapshotResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline CreateSegmentSnapshotResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline CreateSegmentSnapshotResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSegmentSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSegmentSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSegmentSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
