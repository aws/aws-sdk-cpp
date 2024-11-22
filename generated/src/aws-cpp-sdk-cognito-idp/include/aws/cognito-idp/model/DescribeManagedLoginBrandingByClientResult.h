/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ManagedLoginBrandingType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class DescribeManagedLoginBrandingByClientResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeManagedLoginBrandingByClientResult();
    AWS_COGNITOIDENTITYPROVIDER_API DescribeManagedLoginBrandingByClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API DescribeManagedLoginBrandingByClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the requested branding style.</p>
     */
    inline const ManagedLoginBrandingType& GetManagedLoginBranding() const{ return m_managedLoginBranding; }
    inline void SetManagedLoginBranding(const ManagedLoginBrandingType& value) { m_managedLoginBranding = value; }
    inline void SetManagedLoginBranding(ManagedLoginBrandingType&& value) { m_managedLoginBranding = std::move(value); }
    inline DescribeManagedLoginBrandingByClientResult& WithManagedLoginBranding(const ManagedLoginBrandingType& value) { SetManagedLoginBranding(value); return *this;}
    inline DescribeManagedLoginBrandingByClientResult& WithManagedLoginBranding(ManagedLoginBrandingType&& value) { SetManagedLoginBranding(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeManagedLoginBrandingByClientResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeManagedLoginBrandingByClientResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeManagedLoginBrandingByClientResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ManagedLoginBrandingType m_managedLoginBranding;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
