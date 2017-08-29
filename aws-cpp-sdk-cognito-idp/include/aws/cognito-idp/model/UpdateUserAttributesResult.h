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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesResult
  {
  public:
    UpdateUserAttributesResult();
    UpdateUserAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateUserAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline const Aws::Vector<CodeDeliveryDetailsType>& GetCodeDeliveryDetailsList() const{ return m_codeDeliveryDetailsList; }

    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline void SetCodeDeliveryDetailsList(const Aws::Vector<CodeDeliveryDetailsType>& value) { m_codeDeliveryDetailsList = value; }

    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline void SetCodeDeliveryDetailsList(Aws::Vector<CodeDeliveryDetailsType>&& value) { m_codeDeliveryDetailsList = std::move(value); }

    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline UpdateUserAttributesResult& WithCodeDeliveryDetailsList(const Aws::Vector<CodeDeliveryDetailsType>& value) { SetCodeDeliveryDetailsList(value); return *this;}

    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline UpdateUserAttributesResult& WithCodeDeliveryDetailsList(Aws::Vector<CodeDeliveryDetailsType>&& value) { SetCodeDeliveryDetailsList(std::move(value)); return *this;}

    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline UpdateUserAttributesResult& AddCodeDeliveryDetailsList(const CodeDeliveryDetailsType& value) { m_codeDeliveryDetailsList.push_back(value); return *this; }

    /**
     * <p>The code delivery details list from the server for the request to update user
     * attributes.</p>
     */
    inline UpdateUserAttributesResult& AddCodeDeliveryDetailsList(CodeDeliveryDetailsType&& value) { m_codeDeliveryDetailsList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CodeDeliveryDetailsType> m_codeDeliveryDetailsList;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
