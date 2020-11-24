/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class AWS_IOTSITEWISE_API CreatePresignedPortalUrlResult
  {
  public:
    CreatePresignedPortalUrlResult();
    CreatePresignedPortalUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePresignedPortalUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pre-signed URL to the portal. The URL contains the portal ID and an
     * authentication token that lets you access the portal. The URL has the following
     * format.</p> <p>
     * <code>https://&lt;portal-id&gt;.app.iotsitewise.aws/iam?token=&lt;encrypted-token&gt;</code>
     * </p>
     */
    inline const Aws::String& GetPresignedPortalUrl() const{ return m_presignedPortalUrl; }

    /**
     * <p>The pre-signed URL to the portal. The URL contains the portal ID and an
     * authentication token that lets you access the portal. The URL has the following
     * format.</p> <p>
     * <code>https://&lt;portal-id&gt;.app.iotsitewise.aws/iam?token=&lt;encrypted-token&gt;</code>
     * </p>
     */
    inline void SetPresignedPortalUrl(const Aws::String& value) { m_presignedPortalUrl = value; }

    /**
     * <p>The pre-signed URL to the portal. The URL contains the portal ID and an
     * authentication token that lets you access the portal. The URL has the following
     * format.</p> <p>
     * <code>https://&lt;portal-id&gt;.app.iotsitewise.aws/iam?token=&lt;encrypted-token&gt;</code>
     * </p>
     */
    inline void SetPresignedPortalUrl(Aws::String&& value) { m_presignedPortalUrl = std::move(value); }

    /**
     * <p>The pre-signed URL to the portal. The URL contains the portal ID and an
     * authentication token that lets you access the portal. The URL has the following
     * format.</p> <p>
     * <code>https://&lt;portal-id&gt;.app.iotsitewise.aws/iam?token=&lt;encrypted-token&gt;</code>
     * </p>
     */
    inline void SetPresignedPortalUrl(const char* value) { m_presignedPortalUrl.assign(value); }

    /**
     * <p>The pre-signed URL to the portal. The URL contains the portal ID and an
     * authentication token that lets you access the portal. The URL has the following
     * format.</p> <p>
     * <code>https://&lt;portal-id&gt;.app.iotsitewise.aws/iam?token=&lt;encrypted-token&gt;</code>
     * </p>
     */
    inline CreatePresignedPortalUrlResult& WithPresignedPortalUrl(const Aws::String& value) { SetPresignedPortalUrl(value); return *this;}

    /**
     * <p>The pre-signed URL to the portal. The URL contains the portal ID and an
     * authentication token that lets you access the portal. The URL has the following
     * format.</p> <p>
     * <code>https://&lt;portal-id&gt;.app.iotsitewise.aws/iam?token=&lt;encrypted-token&gt;</code>
     * </p>
     */
    inline CreatePresignedPortalUrlResult& WithPresignedPortalUrl(Aws::String&& value) { SetPresignedPortalUrl(std::move(value)); return *this;}

    /**
     * <p>The pre-signed URL to the portal. The URL contains the portal ID and an
     * authentication token that lets you access the portal. The URL has the following
     * format.</p> <p>
     * <code>https://&lt;portal-id&gt;.app.iotsitewise.aws/iam?token=&lt;encrypted-token&gt;</code>
     * </p>
     */
    inline CreatePresignedPortalUrlResult& WithPresignedPortalUrl(const char* value) { SetPresignedPortalUrl(value); return *this;}

  private:

    Aws::String m_presignedPortalUrl;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
