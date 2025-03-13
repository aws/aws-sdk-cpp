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
    AWS_DIRECTORYSERVICE_API GetSnapshotLimitsResult() = default;
    AWS_DIRECTORYSERVICE_API GetSnapshotLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API GetSnapshotLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>SnapshotLimits</a> object that contains the manual snapshot limits for
     * the specified directory.</p>
     */
    inline const SnapshotLimits& GetSnapshotLimits() const { return m_snapshotLimits; }
    template<typename SnapshotLimitsT = SnapshotLimits>
    void SetSnapshotLimits(SnapshotLimitsT&& value) { m_snapshotLimitsHasBeenSet = true; m_snapshotLimits = std::forward<SnapshotLimitsT>(value); }
    template<typename SnapshotLimitsT = SnapshotLimits>
    GetSnapshotLimitsResult& WithSnapshotLimits(SnapshotLimitsT&& value) { SetSnapshotLimits(std::forward<SnapshotLimitsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSnapshotLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SnapshotLimits m_snapshotLimits;
    bool m_snapshotLimitsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
