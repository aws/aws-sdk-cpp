/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJob.h>
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
namespace CleanRooms
{
namespace Model
{
  class GetProtectedJobResult
  {
  public:
    AWS_CLEANROOMS_API GetProtectedJobResult() = default;
    AWS_CLEANROOMS_API GetProtectedJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetProtectedJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The protected job metadata.</p>
     */
    inline const ProtectedJob& GetProtectedJob() const { return m_protectedJob; }
    template<typename ProtectedJobT = ProtectedJob>
    void SetProtectedJob(ProtectedJobT&& value) { m_protectedJobHasBeenSet = true; m_protectedJob = std::forward<ProtectedJobT>(value); }
    template<typename ProtectedJobT = ProtectedJob>
    GetProtectedJobResult& WithProtectedJob(ProtectedJobT&& value) { SetProtectedJob(std::forward<ProtectedJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProtectedJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProtectedJob m_protectedJob;
    bool m_protectedJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
