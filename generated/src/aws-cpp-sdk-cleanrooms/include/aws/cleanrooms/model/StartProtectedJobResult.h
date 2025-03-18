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
  class StartProtectedJobResult
  {
  public:
    AWS_CLEANROOMS_API StartProtectedJobResult();
    AWS_CLEANROOMS_API StartProtectedJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API StartProtectedJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The protected job.</p>
     */
    inline const ProtectedJob& GetProtectedJob() const{ return m_protectedJob; }
    inline void SetProtectedJob(const ProtectedJob& value) { m_protectedJob = value; }
    inline void SetProtectedJob(ProtectedJob&& value) { m_protectedJob = std::move(value); }
    inline StartProtectedJobResult& WithProtectedJob(const ProtectedJob& value) { SetProtectedJob(value); return *this;}
    inline StartProtectedJobResult& WithProtectedJob(ProtectedJob&& value) { SetProtectedJob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartProtectedJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartProtectedJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartProtectedJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ProtectedJob m_protectedJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
