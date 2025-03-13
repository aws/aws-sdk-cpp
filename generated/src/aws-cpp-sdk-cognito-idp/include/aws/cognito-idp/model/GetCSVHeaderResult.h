/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the response from the server to the request to get the header
   * information of the CSV file for the user import job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetCSVHeaderResponse">AWS
   * API Reference</a></p>
   */
  class GetCSVHeaderResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetCSVHeaderResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetCSVHeaderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetCSVHeaderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the requested user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    GetCSVHeaderResult& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of attributes from your user pool. Save this output to
     * a <code>.csv</code> file and populate it with the attributes of the users that
     * you want to import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCSVHeader() const { return m_cSVHeader; }
    template<typename CSVHeaderT = Aws::Vector<Aws::String>>
    void SetCSVHeader(CSVHeaderT&& value) { m_cSVHeaderHasBeenSet = true; m_cSVHeader = std::forward<CSVHeaderT>(value); }
    template<typename CSVHeaderT = Aws::Vector<Aws::String>>
    GetCSVHeaderResult& WithCSVHeader(CSVHeaderT&& value) { SetCSVHeader(std::forward<CSVHeaderT>(value)); return *this;}
    template<typename CSVHeaderT = Aws::String>
    GetCSVHeaderResult& AddCSVHeader(CSVHeaderT&& value) { m_cSVHeaderHasBeenSet = true; m_cSVHeader.emplace_back(std::forward<CSVHeaderT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCSVHeaderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_cSVHeader;
    bool m_cSVHeaderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
