/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/SnapshotLimits.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>GetSnapshotLimits</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetSnapshotLimitsResult">AWS
   * API Reference</a></p>
   */
  class GetSnapshotLimitsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API GetSnapshotLimitsResult();
    AWS_DIRECTORYSERVICE_API GetSnapshotLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API GetSnapshotLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline const SnapshotLimits& GetSnapshotLimits() const{ return m_snapshotLimits; }

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline void SetSnapshotLimits(const SnapshotLimits& value) { m_snapshotLimits = value; }

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline void SetSnapshotLimits(SnapshotLimits&& value) { m_snapshotLimits = std::move(value); }

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline GetSnapshotLimitsResult& WithSnapshotLimits(const SnapshotLimits& value) { SetSnapshotLimits(value); return *this;}

    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline GetSnapshotLimitsResult& WithSnapshotLimits(SnapshotLimits&& value) { SetSnapshotLimits(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSnapshotLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSnapshotLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSnapshotLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SnapshotLimits m_snapshotLimits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
