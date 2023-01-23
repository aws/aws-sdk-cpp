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
  class UpdateApplicationResult
  {
  public:
    AWS_KINESISANALYTICSV2_API UpdateApplicationResult();
    AWS_KINESISANALYTICSV2_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes application updates.</p>
     */
    inline const ApplicationDetail& GetApplicationDetail() const{ return m_applicationDetail; }

    /**
     * <p>Describes application updates.</p>
     */
    inline void SetApplicationDetail(const ApplicationDetail& value) { m_applicationDetail = value; }

    /**
     * <p>Describes application updates.</p>
     */
    inline void SetApplicationDetail(ApplicationDetail&& value) { m_applicationDetail = std::move(value); }

    /**
     * <p>Describes application updates.</p>
     */
    inline UpdateApplicationResult& WithApplicationDetail(const ApplicationDetail& value) { SetApplicationDetail(value); return *this;}

    /**
     * <p>Describes application updates.</p>
     */
    inline UpdateApplicationResult& WithApplicationDetail(ApplicationDetail&& value) { SetApplicationDetail(std::move(value)); return *this;}

  private:

    ApplicationDetail m_applicationDetail;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
