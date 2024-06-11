﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateCaseResult
  {
  public:
    AWS_CONNECTCASES_API CreateCaseResult();
    AWS_CONNECTCASES_API CreateCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the case.</p>
     */
    inline const Aws::String& GetCaseArn() const{ return m_caseArn; }
    inline void SetCaseArn(const Aws::String& value) { m_caseArn = value; }
    inline void SetCaseArn(Aws::String&& value) { m_caseArn = std::move(value); }
    inline void SetCaseArn(const char* value) { m_caseArn.assign(value); }
    inline CreateCaseResult& WithCaseArn(const Aws::String& value) { SetCaseArn(value); return *this;}
    inline CreateCaseResult& WithCaseArn(Aws::String&& value) { SetCaseArn(std::move(value)); return *this;}
    inline CreateCaseResult& WithCaseArn(const char* value) { SetCaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of the case.</p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline void SetCaseId(const Aws::String& value) { m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseId.assign(value); }
    inline CreateCaseResult& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline CreateCaseResult& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline CreateCaseResult& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_caseArn;

    Aws::String m_caseId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
