/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationDetail.h>
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


    
    inline const ApplicationDetail& GetApplicationVersionDetail() const{ return m_applicationVersionDetail; }

    
    inline void SetApplicationVersionDetail(const ApplicationDetail& value) { m_applicationVersionDetail = value; }

    
    inline void SetApplicationVersionDetail(ApplicationDetail&& value) { m_applicationVersionDetail = std::move(value); }

    
    inline DescribeApplicationVersionResult& WithApplicationVersionDetail(const ApplicationDetail& value) { SetApplicationVersionDetail(value); return *this;}

    
    inline DescribeApplicationVersionResult& WithApplicationVersionDetail(ApplicationDetail&& value) { SetApplicationVersionDetail(std::move(value)); return *this;}

  private:

    ApplicationDetail m_applicationVersionDetail;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
