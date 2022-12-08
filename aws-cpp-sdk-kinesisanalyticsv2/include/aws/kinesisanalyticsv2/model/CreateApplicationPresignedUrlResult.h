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
  class CreateApplicationPresignedUrlResult
  {
  public:
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlResult();
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API CreateApplicationPresignedUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL of the extension.</p>
     */
    inline const Aws::String& GetAuthorizedUrl() const{ return m_authorizedUrl; }

    /**
     * <p>The URL of the extension.</p>
     */
    inline void SetAuthorizedUrl(const Aws::String& value) { m_authorizedUrl = value; }

    /**
     * <p>The URL of the extension.</p>
     */
    inline void SetAuthorizedUrl(Aws::String&& value) { m_authorizedUrl = std::move(value); }

    /**
     * <p>The URL of the extension.</p>
     */
    inline void SetAuthorizedUrl(const char* value) { m_authorizedUrl.assign(value); }

    /**
     * <p>The URL of the extension.</p>
     */
    inline CreateApplicationPresignedUrlResult& WithAuthorizedUrl(const Aws::String& value) { SetAuthorizedUrl(value); return *this;}

    /**
     * <p>The URL of the extension.</p>
     */
    inline CreateApplicationPresignedUrlResult& WithAuthorizedUrl(Aws::String&& value) { SetAuthorizedUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the extension.</p>
     */
    inline CreateApplicationPresignedUrlResult& WithAuthorizedUrl(const char* value) { SetAuthorizedUrl(value); return *this;}

  private:

    Aws::String m_authorizedUrl;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
