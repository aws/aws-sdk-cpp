/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API AssociateWebsiteAuthorizationProviderResult
  {
  public:
    AssociateWebsiteAuthorizationProviderResult();
    AssociateWebsiteAuthorizationProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateWebsiteAuthorizationProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline const Aws::String& GetAuthorizationProviderId() const{ return m_authorizationProviderId; }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline void SetAuthorizationProviderId(const Aws::String& value) { m_authorizationProviderId = value; }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline void SetAuthorizationProviderId(Aws::String&& value) { m_authorizationProviderId = std::move(value); }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline void SetAuthorizationProviderId(const char* value) { m_authorizationProviderId.assign(value); }

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline AssociateWebsiteAuthorizationProviderResult& WithAuthorizationProviderId(const Aws::String& value) { SetAuthorizationProviderId(value); return *this;}

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline AssociateWebsiteAuthorizationProviderResult& WithAuthorizationProviderId(Aws::String&& value) { SetAuthorizationProviderId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline AssociateWebsiteAuthorizationProviderResult& WithAuthorizationProviderId(const char* value) { SetAuthorizationProviderId(value); return *this;}

  private:

    Aws::String m_authorizationProviderId;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
