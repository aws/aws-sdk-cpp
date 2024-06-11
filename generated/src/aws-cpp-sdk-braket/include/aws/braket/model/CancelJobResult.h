﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/CancellationStatus.h>
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
namespace Braket
{
namespace Model
{
  class CancelJobResult
  {
  public:
    AWS_BRAKET_API CancelJobResult();
    AWS_BRAKET_API CancelJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BRAKET_API CancelJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the job cancellation request.</p>
     */
    inline const CancellationStatus& GetCancellationStatus() const{ return m_cancellationStatus; }
    inline void SetCancellationStatus(const CancellationStatus& value) { m_cancellationStatus = value; }
    inline void SetCancellationStatus(CancellationStatus&& value) { m_cancellationStatus = std::move(value); }
    inline CancelJobResult& WithCancellationStatus(const CancellationStatus& value) { SetCancellationStatus(value); return *this;}
    inline CancelJobResult& WithCancellationStatus(CancellationStatus&& value) { SetCancellationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Braket job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline CancelJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline CancelJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline CancelJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CancellationStatus m_cancellationStatus;

    Aws::String m_jobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
