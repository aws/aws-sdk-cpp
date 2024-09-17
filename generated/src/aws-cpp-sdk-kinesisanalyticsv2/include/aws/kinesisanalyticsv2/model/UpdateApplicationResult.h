/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationDetail.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API UpdateApplicationResult();
    AWS_KINESISANALYTICSV2_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes application updates.</p>
     */
    inline const ApplicationDetail& GetApplicationDetail() const{ return m_applicationDetail; }
    inline void SetApplicationDetail(const ApplicationDetail& value) { m_applicationDetail = value; }
    inline void SetApplicationDetail(ApplicationDetail&& value) { m_applicationDetail = std::move(value); }
    inline UpdateApplicationResult& WithApplicationDetail(const ApplicationDetail& value) { SetApplicationDetail(value); return *this;}
    inline UpdateApplicationResult& WithApplicationDetail(ApplicationDetail&& value) { SetApplicationDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Operation ID for tracking UpdateApplication request
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }
    inline UpdateApplicationResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline UpdateApplicationResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationDetail m_applicationDetail;

    Aws::String m_operationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
