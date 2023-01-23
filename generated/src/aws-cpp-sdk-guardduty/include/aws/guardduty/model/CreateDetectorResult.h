/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/UnprocessedDataSourcesResult.h>
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
namespace GuardDuty
{
namespace Model
{
  class CreateDetectorResult
  {
  public:
    AWS_GUARDDUTY_API CreateDetectorResult();
    AWS_GUARDDUTY_API CreateDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorId = value; }

    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline CreateDetectorResult& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline CreateDetectorResult& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline CreateDetectorResult& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>Specifies the data sources that couldn't be enabled when GuardDuty was
     * enabled for the first time.</p>
     */
    inline const UnprocessedDataSourcesResult& GetUnprocessedDataSources() const{ return m_unprocessedDataSources; }

    /**
     * <p>Specifies the data sources that couldn't be enabled when GuardDuty was
     * enabled for the first time.</p>
     */
    inline void SetUnprocessedDataSources(const UnprocessedDataSourcesResult& value) { m_unprocessedDataSources = value; }

    /**
     * <p>Specifies the data sources that couldn't be enabled when GuardDuty was
     * enabled for the first time.</p>
     */
    inline void SetUnprocessedDataSources(UnprocessedDataSourcesResult&& value) { m_unprocessedDataSources = std::move(value); }

    /**
     * <p>Specifies the data sources that couldn't be enabled when GuardDuty was
     * enabled for the first time.</p>
     */
    inline CreateDetectorResult& WithUnprocessedDataSources(const UnprocessedDataSourcesResult& value) { SetUnprocessedDataSources(value); return *this;}

    /**
     * <p>Specifies the data sources that couldn't be enabled when GuardDuty was
     * enabled for the first time.</p>
     */
    inline CreateDetectorResult& WithUnprocessedDataSources(UnprocessedDataSourcesResult&& value) { SetUnprocessedDataSources(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;

    UnprocessedDataSourcesResult m_unprocessedDataSources;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
