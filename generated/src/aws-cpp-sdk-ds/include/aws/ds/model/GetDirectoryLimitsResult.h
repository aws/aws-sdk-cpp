/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DirectoryLimits.h>
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
   * <p>Contains the results of the <a>GetDirectoryLimits</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/GetDirectoryLimitsResult">AWS
   * API Reference</a></p>
   */
  class GetDirectoryLimitsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult() = default;
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API GetDirectoryLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>DirectoryLimits</a> object that contains the directory limits for the
     * current Region.</p>
     */
    inline const DirectoryLimits& GetDirectoryLimits() const { return m_directoryLimits; }
    template<typename DirectoryLimitsT = DirectoryLimits>
    void SetDirectoryLimits(DirectoryLimitsT&& value) { m_directoryLimitsHasBeenSet = true; m_directoryLimits = std::forward<DirectoryLimitsT>(value); }
    template<typename DirectoryLimitsT = DirectoryLimits>
    GetDirectoryLimitsResult& WithDirectoryLimits(DirectoryLimitsT&& value) { SetDirectoryLimits(std::forward<DirectoryLimitsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDirectoryLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DirectoryLimits m_directoryLimits;
    bool m_directoryLimitsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
