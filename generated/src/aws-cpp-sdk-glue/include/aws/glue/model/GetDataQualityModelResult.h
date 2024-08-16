/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityModelStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{
  class GetDataQualityModelResult
  {
  public:
    AWS_GLUE_API GetDataQualityModelResult();
    AWS_GLUE_API GetDataQualityModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The training status of the data quality model.</p>
     */
    inline const DataQualityModelStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataQualityModelStatus& value) { m_status = value; }
    inline void SetStatus(DataQualityModelStatus&& value) { m_status = std::move(value); }
    inline GetDataQualityModelResult& WithStatus(const DataQualityModelStatus& value) { SetStatus(value); return *this;}
    inline GetDataQualityModelResult& WithStatus(DataQualityModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data quality model training started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOn = std::move(value); }
    inline GetDataQualityModelResult& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline GetDataQualityModelResult& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the data quality model training completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }
    inline GetDataQualityModelResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline GetDataQualityModelResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetDataQualityModelResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetDataQualityModelResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetDataQualityModelResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataQualityModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataQualityModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataQualityModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataQualityModelStatus m_status;

    Aws::Utils::DateTime m_startedOn;

    Aws::Utils::DateTime m_completedOn;

    Aws::String m_failureReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
