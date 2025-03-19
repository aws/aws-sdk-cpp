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
  class CreateManagedLoginBrandingResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateManagedLoginBrandingResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API CreateManagedLoginBrandingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API CreateManagedLoginBrandingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the branding style that you created.</p>
     */
    inline const ManagedLoginBrandingType& GetManagedLoginBranding() const { return m_managedLoginBranding; }
    template<typename ManagedLoginBrandingT = ManagedLoginBrandingType>
    void SetManagedLoginBranding(ManagedLoginBrandingT&& value) { m_managedLoginBrandingHasBeenSet = true; m_managedLoginBranding = std::forward<ManagedLoginBrandingT>(value); }
    template<typename ManagedLoginBrandingT = ManagedLoginBrandingType>
    CreateManagedLoginBrandingResult& WithManagedLoginBranding(ManagedLoginBrandingT&& value) { SetManagedLoginBranding(std::forward<ManagedLoginBrandingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateManagedLoginBrandingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ManagedLoginBrandingType m_managedLoginBranding;
    bool m_managedLoginBrandingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
