/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PortalStatus.h>
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
  class CreatePortalResult
  {
  public:
    AWS_IOTSITEWISE_API CreatePortalResult();
    AWS_IOTSITEWISE_API CreatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the created portal.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }

    /**
     * <p>The ID of the created portal.</p>
     */
    inline void SetPortalId(const Aws::String& value) { m_portalId = value; }

    /**
     * <p>The ID of the created portal.</p>
     */
    inline void SetPortalId(Aws::String&& value) { m_portalId = std::move(value); }

    /**
     * <p>The ID of the created portal.</p>
     */
    inline void SetPortalId(const char* value) { m_portalId.assign(value); }

    /**
     * <p>The ID of the created portal.</p>
     */
    inline CreatePortalResult& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}

    /**
     * <p>The ID of the created portal.</p>
     */
    inline CreatePortalResult& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the created portal.</p>
     */
    inline CreatePortalResult& WithPortalId(const char* value) { SetPortalId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline CreatePortalResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline CreatePortalResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the portal, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:portal/${PortalId}</code>
     * </p>
     */
    inline CreatePortalResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline const Aws::String& GetPortalStartUrl() const{ return m_portalStartUrl; }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline void SetPortalStartUrl(const Aws::String& value) { m_portalStartUrl = value; }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline void SetPortalStartUrl(Aws::String&& value) { m_portalStartUrl = std::move(value); }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline void SetPortalStartUrl(const char* value) { m_portalStartUrl.assign(value); }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline CreatePortalResult& WithPortalStartUrl(const Aws::String& value) { SetPortalStartUrl(value); return *this;}

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline CreatePortalResult& WithPortalStartUrl(Aws::String&& value) { SetPortalStartUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline CreatePortalResult& WithPortalStartUrl(const char* value) { SetPortalStartUrl(value); return *this;}


    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatus = value; }

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatus = std::move(value); }

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline CreatePortalResult& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline CreatePortalResult& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}


    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetSsoApplicationId() const{ return m_ssoApplicationId; }

    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline void SetSsoApplicationId(const Aws::String& value) { m_ssoApplicationId = value; }

    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline void SetSsoApplicationId(Aws::String&& value) { m_ssoApplicationId = std::move(value); }

    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline void SetSsoApplicationId(const char* value) { m_ssoApplicationId.assign(value); }

    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline CreatePortalResult& WithSsoApplicationId(const Aws::String& value) { SetSsoApplicationId(value); return *this;}

    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline CreatePortalResult& WithSsoApplicationId(Aws::String&& value) { SetSsoApplicationId(std::move(value)); return *this;}

    /**
     * <p>The associated IAM Identity Center application ID, if the portal uses IAM
     * Identity Center.</p>
     */
    inline CreatePortalResult& WithSsoApplicationId(const char* value) { SetSsoApplicationId(value); return *this;}

  private:

    Aws::String m_portalId;

    Aws::String m_portalArn;

    Aws::String m_portalStartUrl;

    PortalStatus m_portalStatus;

    Aws::String m_ssoApplicationId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
