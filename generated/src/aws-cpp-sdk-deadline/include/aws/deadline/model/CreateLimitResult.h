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
    AWS_DEADLINE_API CreateLimitResult() = default;
    AWS_DEADLINE_API CreateLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the limit. Use this identifier in other operations,
     * such as <code>CreateQueueLimitAssociation</code> and
     * <code>DeleteLimit</code>.</p>
     */
    inline const Aws::String& GetLimitId() const { return m_limitId; }
    template<typename LimitIdT = Aws::String>
    void SetLimitId(LimitIdT&& value) { m_limitIdHasBeenSet = true; m_limitId = std::forward<LimitIdT>(value); }
    template<typename LimitIdT = Aws::String>
    CreateLimitResult& WithLimitId(LimitIdT&& value) { SetLimitId(std::forward<LimitIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLimitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_limitId;
    bool m_limitIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
