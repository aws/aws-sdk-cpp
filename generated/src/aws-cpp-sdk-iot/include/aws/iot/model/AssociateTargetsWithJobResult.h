﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class AssociateTargetsWithJobResult
  {
  public:
    AWS_IOT_API AssociateTargetsWithJobResult();
    AWS_IOT_API AssociateTargetsWithJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API AssociateTargetsWithJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ARN identifying the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline AssociateTargetsWithJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline AssociateTargetsWithJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline AssociateTargetsWithJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline AssociateTargetsWithJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline AssociateTargetsWithJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline AssociateTargetsWithJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short text description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline AssociateTargetsWithJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssociateTargetsWithJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssociateTargetsWithJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateTargetsWithJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateTargetsWithJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateTargetsWithJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;

    Aws::String m_jobId;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
