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
  class UpdateProtectedJobResult
  {
  public:
    AWS_CLEANROOMS_API UpdateProtectedJobResult();
    AWS_CLEANROOMS_API UpdateProtectedJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateProtectedJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The protected job output.</p>
     */
    inline const ProtectedJob& GetProtectedJob() const{ return m_protectedJob; }
    inline void SetProtectedJob(const ProtectedJob& value) { m_protectedJob = value; }
    inline void SetProtectedJob(ProtectedJob&& value) { m_protectedJob = std::move(value); }
    inline UpdateProtectedJobResult& WithProtectedJob(const ProtectedJob& value) { SetProtectedJob(value); return *this;}
    inline UpdateProtectedJobResult& WithProtectedJob(ProtectedJob&& value) { SetProtectedJob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateProtectedJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateProtectedJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateProtectedJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ProtectedJob m_protectedJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
