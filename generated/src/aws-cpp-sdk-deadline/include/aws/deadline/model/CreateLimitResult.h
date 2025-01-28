/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateLimitResult
  {
  public:
    AWS_DEADLINE_API CreateLimitResult();
    AWS_DEADLINE_API CreateLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the limit. Use this identifier in other operations,
     * such as <code>CreateQueueLimitAssociation</code> and
     * <code>DeleteLimit</code>.</p>
     */
    inline const Aws::String& GetLimitId() const{ return m_limitId; }
    inline void SetLimitId(const Aws::String& value) { m_limitId = value; }
    inline void SetLimitId(Aws::String&& value) { m_limitId = std::move(value); }
    inline void SetLimitId(const char* value) { m_limitId.assign(value); }
    inline CreateLimitResult& WithLimitId(const Aws::String& value) { SetLimitId(value); return *this;}
    inline CreateLimitResult& WithLimitId(Aws::String&& value) { SetLimitId(std::move(value)); return *this;}
    inline CreateLimitResult& WithLimitId(const char* value) { SetLimitId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLimitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLimitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLimitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_limitId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
