﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateJobOutput">AWS
   * API Reference</a></p>
   */
  class InitiateJobResult
  {
  public:
    AWS_GLACIER_API InitiateJobResult();
    AWS_GLACIER_API InitiateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API InitiateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The relative URI path of the job.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline InitiateJobResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline InitiateJobResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline InitiateJobResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline InitiateJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline InitiateJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline InitiateJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the location of where the select results are stored.</p>
     */
    inline const Aws::String& GetJobOutputPath() const{ return m_jobOutputPath; }
    inline void SetJobOutputPath(const Aws::String& value) { m_jobOutputPath = value; }
    inline void SetJobOutputPath(Aws::String&& value) { m_jobOutputPath = std::move(value); }
    inline void SetJobOutputPath(const char* value) { m_jobOutputPath.assign(value); }
    inline InitiateJobResult& WithJobOutputPath(const Aws::String& value) { SetJobOutputPath(value); return *this;}
    inline InitiateJobResult& WithJobOutputPath(Aws::String&& value) { SetJobOutputPath(std::move(value)); return *this;}
    inline InitiateJobResult& WithJobOutputPath(const char* value) { SetJobOutputPath(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InitiateJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InitiateJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InitiateJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_location;

    Aws::String m_jobId;

    Aws::String m_jobOutputPath;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
