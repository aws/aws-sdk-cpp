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
  class CreateJobTemplateResult
  {
  public:
    AWS_IOT_API CreateJobTemplateResult();
    AWS_IOT_API CreateJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateArn() const{ return m_jobTemplateArn; }
    inline void SetJobTemplateArn(const Aws::String& value) { m_jobTemplateArn = value; }
    inline void SetJobTemplateArn(Aws::String&& value) { m_jobTemplateArn = std::move(value); }
    inline void SetJobTemplateArn(const char* value) { m_jobTemplateArn.assign(value); }
    inline CreateJobTemplateResult& WithJobTemplateArn(const Aws::String& value) { SetJobTemplateArn(value); return *this;}
    inline CreateJobTemplateResult& WithJobTemplateArn(Aws::String&& value) { SetJobTemplateArn(std::move(value)); return *this;}
    inline CreateJobTemplateResult& WithJobTemplateArn(const char* value) { SetJobTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const{ return m_jobTemplateId; }
    inline void SetJobTemplateId(const Aws::String& value) { m_jobTemplateId = value; }
    inline void SetJobTemplateId(Aws::String&& value) { m_jobTemplateId = std::move(value); }
    inline void SetJobTemplateId(const char* value) { m_jobTemplateId.assign(value); }
    inline CreateJobTemplateResult& WithJobTemplateId(const Aws::String& value) { SetJobTemplateId(value); return *this;}
    inline CreateJobTemplateResult& WithJobTemplateId(Aws::String&& value) { SetJobTemplateId(std::move(value)); return *this;}
    inline CreateJobTemplateResult& WithJobTemplateId(const char* value) { SetJobTemplateId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateJobTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateJobTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateJobTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobTemplateArn;

    Aws::String m_jobTemplateId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
