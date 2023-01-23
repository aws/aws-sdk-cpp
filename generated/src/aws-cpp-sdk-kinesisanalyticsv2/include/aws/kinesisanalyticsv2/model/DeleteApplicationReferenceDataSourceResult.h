/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
  class DeleteApplicationReferenceDataSourceResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DeleteApplicationReferenceDataSourceResult();
    AWS_KINESISANALYTICSV2_API DeleteApplicationReferenceDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DeleteApplicationReferenceDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline DeleteApplicationReferenceDataSourceResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline DeleteApplicationReferenceDataSourceResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline DeleteApplicationReferenceDataSourceResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>The updated version ID of the application.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>The updated version ID of the application.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }

    /**
     * <p>The updated version ID of the application.</p>
     */
    inline DeleteApplicationReferenceDataSourceResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}

  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
