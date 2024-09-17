/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/CodeDeliveryDetailsType.h>
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
  /**
   * <p>Represents the response from the server for the request to update user
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributesResponse">AWS
   * API Reference</a></p>
   */
  class UpdateUserAttributesResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesResult();
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline const Aws::Vector<CodeDeliveryDetailsType>& GetCodeDeliveryDetailsList() const{ return m_codeDeliveryDetailsList; }
    inline void SetCodeDeliveryDetailsList(const Aws::Vector<CodeDeliveryDetailsType>& value) { m_codeDeliveryDetailsList = value; }
    inline void SetCodeDeliveryDetailsList(Aws::Vector<CodeDeliveryDetailsType>&& value) { m_codeDeliveryDetailsList = std::move(value); }
    inline UpdateUserAttributesResult& WithCodeDeliveryDetailsList(const Aws::Vector<CodeDeliveryDetailsType>& value) { SetCodeDeliveryDetailsList(value); return *this;}
    inline UpdateUserAttributesResult& WithCodeDeliveryDetailsList(Aws::Vector<CodeDeliveryDetailsType>&& value) { SetCodeDeliveryDetailsList(std::move(value)); return *this;}
    inline UpdateUserAttributesResult& AddCodeDeliveryDetailsList(const CodeDeliveryDetailsType& value) { m_codeDeliveryDetailsList.push_back(value); return *this; }
    inline UpdateUserAttributesResult& AddCodeDeliveryDetailsList(CodeDeliveryDetailsType&& value) { m_codeDeliveryDetailsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateUserAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateUserAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateUserAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CodeDeliveryDetailsType> m_codeDeliveryDetailsList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
