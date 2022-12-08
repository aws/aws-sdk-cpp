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
  class CreateApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API CreateApplicationResult();
    AWS_KINESISANALYTICSV2_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>In response to your <code>CreateApplication</code> request, Kinesis Data
     * Analytics returns a response with details of the application it created.</p>
     */
    inline const ApplicationDetail& GetApplicationDetail() const{ return m_applicationDetail; }

    /**
     * <p>In response to your <code>CreateApplication</code> request, Kinesis Data
     * Analytics returns a response with details of the application it created.</p>
     */
    inline void SetApplicationDetail(const ApplicationDetail& value) { m_applicationDetail = value; }

    /**
     * <p>In response to your <code>CreateApplication</code> request, Kinesis Data
     * Analytics returns a response with details of the application it created.</p>
     */
    inline void SetApplicationDetail(ApplicationDetail&& value) { m_applicationDetail = std::move(value); }

    /**
     * <p>In response to your <code>CreateApplication</code> request, Kinesis Data
     * Analytics returns a response with details of the application it created.</p>
     */
    inline CreateApplicationResult& WithApplicationDetail(const ApplicationDetail& value) { SetApplicationDetail(value); return *this;}

    /**
     * <p>In response to your <code>CreateApplication</code> request, Kinesis Data
     * Analytics returns a response with details of the application it created.</p>
     */
    inline CreateApplicationResult& WithApplicationDetail(ApplicationDetail&& value) { SetApplicationDetail(std::move(value)); return *this;}

  private:

    ApplicationDetail m_applicationDetail;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
