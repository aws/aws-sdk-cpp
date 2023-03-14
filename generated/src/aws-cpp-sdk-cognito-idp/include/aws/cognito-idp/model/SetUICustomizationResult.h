/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UICustomizationType.h>
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
  class SetUICustomizationResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationResult();
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API SetUICustomizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The UI customization information.</p>
     */
    inline const UICustomizationType& GetUICustomization() const{ return m_uICustomization; }

    /**
     * <p>The UI customization information.</p>
     */
    inline void SetUICustomization(const UICustomizationType& value) { m_uICustomization = value; }

    /**
     * <p>The UI customization information.</p>
     */
    inline void SetUICustomization(UICustomizationType&& value) { m_uICustomization = std::move(value); }

    /**
     * <p>The UI customization information.</p>
     */
    inline SetUICustomizationResult& WithUICustomization(const UICustomizationType& value) { SetUICustomization(value); return *this;}

    /**
     * <p>The UI customization information.</p>
     */
    inline SetUICustomizationResult& WithUICustomization(UICustomizationType&& value) { SetUICustomization(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SetUICustomizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SetUICustomizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SetUICustomizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    UICustomizationType m_uICustomization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
