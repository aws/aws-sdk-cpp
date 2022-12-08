/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/IdentityProvider.h>
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
  class UpdateIdentityProviderResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateIdentityProviderResult();
    AWS_WORKSPACESWEB_API UpdateIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }

    /**
     * <p>The identity provider.</p>
     */
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProvider = value; }

    /**
     * <p>The identity provider.</p>
     */
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProvider = std::move(value); }

    /**
     * <p>The identity provider.</p>
     */
    inline UpdateIdentityProviderResult& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>The identity provider.</p>
     */
    inline UpdateIdentityProviderResult& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}

  private:

    IdentityProvider m_identityProvider;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
