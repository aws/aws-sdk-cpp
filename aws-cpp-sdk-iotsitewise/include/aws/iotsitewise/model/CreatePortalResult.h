/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOTSITEWISE_API CreatePortalResult
  {
  public:
    CreatePortalResult();
    CreatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The public URL for the AWS IoT SiteWise Monitor portal.</p>
     */
    inline const Aws::String& GetPortalStartUrl() const{ return m_portalStartUrl; }

    /**
     * <p>The public URL for the AWS IoT SiteWise Monitor portal.</p>
     */
    inline void SetPortalStartUrl(const Aws::String& value) { m_portalStartUrl = value; }

    /**
     * <p>The public URL for the AWS IoT SiteWise Monitor portal.</p>
     */
    inline void SetPortalStartUrl(Aws::String&& value) { m_portalStartUrl = std::move(value); }

    /**
     * <p>The public URL for the AWS IoT SiteWise Monitor portal.</p>
     */
    inline void SetPortalStartUrl(const char* value) { m_portalStartUrl.assign(value); }

    /**
     * <p>The public URL for the AWS IoT SiteWise Monitor portal.</p>
     */
    inline CreatePortalResult& WithPortalStartUrl(const Aws::String& value) { SetPortalStartUrl(value); return *this;}

    /**
     * <p>The public URL for the AWS IoT SiteWise Monitor portal.</p>
     */
    inline CreatePortalResult& WithPortalStartUrl(Aws::String&& value) { SetPortalStartUrl(std::move(value)); return *this;}

    /**
     * <p>The public URL for the AWS IoT SiteWise Monitor portal.</p>
     */
    inline CreatePortalResult& WithPortalStartUrl(const char* value) { SetPortalStartUrl(value); return *this;}


    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatus = value; }

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatus = std::move(value); }

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline CreatePortalResult& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the portal, which contains a state (<code>CREATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline CreatePortalResult& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}


    /**
     * <p>The associated AWS SSO application Id.</p>
     */
    inline const Aws::String& GetSsoApplicationId() const{ return m_ssoApplicationId; }

    /**
     * <p>The associated AWS SSO application Id.</p>
     */
    inline void SetSsoApplicationId(const Aws::String& value) { m_ssoApplicationId = value; }

    /**
     * <p>The associated AWS SSO application Id.</p>
     */
    inline void SetSsoApplicationId(Aws::String&& value) { m_ssoApplicationId = std::move(value); }

    /**
     * <p>The associated AWS SSO application Id.</p>
     */
    inline void SetSsoApplicationId(const char* value) { m_ssoApplicationId.assign(value); }

    /**
     * <p>The associated AWS SSO application Id.</p>
     */
    inline CreatePortalResult& WithSsoApplicationId(const Aws::String& value) { SetSsoApplicationId(value); return *this;}

    /**
     * <p>The associated AWS SSO application Id.</p>
     */
    inline CreatePortalResult& WithSsoApplicationId(Aws::String&& value) { SetSsoApplicationId(std::move(value)); return *this;}

    /**
     * <p>The associated AWS SSO application Id.</p>
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
