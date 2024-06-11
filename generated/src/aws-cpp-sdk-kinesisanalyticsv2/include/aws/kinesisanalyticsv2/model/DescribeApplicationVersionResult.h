﻿/**
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
  class DescribeApplicationVersionResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DescribeApplicationVersionResult();
    AWS_KINESISANALYTICSV2_API DescribeApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DescribeApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationDetail& GetApplicationVersionDetail() const{ return m_applicationVersionDetail; }
    inline void SetApplicationVersionDetail(const ApplicationDetail& value) { m_applicationVersionDetail = value; }
    inline void SetApplicationVersionDetail(ApplicationDetail&& value) { m_applicationVersionDetail = std::move(value); }
    inline DescribeApplicationVersionResult& WithApplicationVersionDetail(const ApplicationDetail& value) { SetApplicationVersionDetail(value); return *this;}
    inline DescribeApplicationVersionResult& WithApplicationVersionDetail(ApplicationDetail&& value) { SetApplicationVersionDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeApplicationVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeApplicationVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeApplicationVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationDetail m_applicationVersionDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
