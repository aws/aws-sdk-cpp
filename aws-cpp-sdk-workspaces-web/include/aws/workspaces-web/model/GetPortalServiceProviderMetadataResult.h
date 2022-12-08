/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class GetPortalServiceProviderMetadataResult
  {
  public:
    AWS_WORKSPACESWEB_API GetPortalServiceProviderMetadataResult();
    AWS_WORKSPACESWEB_API GetPortalServiceProviderMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetPortalServiceProviderMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline GetPortalServiceProviderMetadataResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline GetPortalServiceProviderMetadataResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline GetPortalServiceProviderMetadataResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline const Aws::String& GetServiceProviderSamlMetadata() const{ return m_serviceProviderSamlMetadata; }

    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline void SetServiceProviderSamlMetadata(const Aws::String& value) { m_serviceProviderSamlMetadata = value; }

    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline void SetServiceProviderSamlMetadata(Aws::String&& value) { m_serviceProviderSamlMetadata = std::move(value); }

    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline void SetServiceProviderSamlMetadata(const char* value) { m_serviceProviderSamlMetadata.assign(value); }

    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline GetPortalServiceProviderMetadataResult& WithServiceProviderSamlMetadata(const Aws::String& value) { SetServiceProviderSamlMetadata(value); return *this;}

    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline GetPortalServiceProviderMetadataResult& WithServiceProviderSamlMetadata(Aws::String&& value) { SetServiceProviderSamlMetadata(std::move(value)); return *this;}

    /**
     * <p>The service provider SAML metadata.</p>
     */
    inline GetPortalServiceProviderMetadataResult& WithServiceProviderSamlMetadata(const char* value) { SetServiceProviderSamlMetadata(value); return *this;}

  private:

    Aws::String m_portalArn;

    Aws::String m_serviceProviderSamlMetadata;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
