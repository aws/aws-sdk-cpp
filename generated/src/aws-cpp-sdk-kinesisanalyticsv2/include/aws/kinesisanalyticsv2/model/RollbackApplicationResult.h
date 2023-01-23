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
  class RollbackApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API RollbackApplicationResult();
    AWS_KINESISANALYTICSV2_API RollbackApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API RollbackApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApplicationDetail& GetApplicationDetail() const{ return m_applicationDetail; }

    
    inline void SetApplicationDetail(const ApplicationDetail& value) { m_applicationDetail = value; }

    
    inline void SetApplicationDetail(ApplicationDetail&& value) { m_applicationDetail = std::move(value); }

    
    inline RollbackApplicationResult& WithApplicationDetail(const ApplicationDetail& value) { SetApplicationDetail(value); return *this;}

    
    inline RollbackApplicationResult& WithApplicationDetail(ApplicationDetail&& value) { SetApplicationDetail(std::move(value)); return *this;}

  private:

    ApplicationDetail m_applicationDetail;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
