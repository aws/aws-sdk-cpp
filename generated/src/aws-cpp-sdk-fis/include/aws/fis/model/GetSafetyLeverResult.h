/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/SafetyLever.h>
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
namespace FIS
{
namespace Model
{
  class GetSafetyLeverResult
  {
  public:
    AWS_FIS_API GetSafetyLeverResult();
    AWS_FIS_API GetSafetyLeverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API GetSafetyLeverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the safety lever. </p>
     */
    inline const SafetyLever& GetSafetyLever() const{ return m_safetyLever; }
    inline void SetSafetyLever(const SafetyLever& value) { m_safetyLever = value; }
    inline void SetSafetyLever(SafetyLever&& value) { m_safetyLever = std::move(value); }
    inline GetSafetyLeverResult& WithSafetyLever(const SafetyLever& value) { SetSafetyLever(value); return *this;}
    inline GetSafetyLeverResult& WithSafetyLever(SafetyLever&& value) { SetSafetyLever(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSafetyLeverResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSafetyLeverResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSafetyLeverResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SafetyLever m_safetyLever;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
