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
   * information for the .csv file for the user import job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetCSVHeaderResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API GetCSVHeaderResult
  {
  public:
    GetCSVHeaderResult();
    GetCSVHeaderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCSVHeaderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user pool ID for the user pool that the users are to be imported
     * into.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool that the users are to be imported
     * into.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool that the users are to be imported
     * into.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool that the users are to be imported
     * into.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool that the users are to be imported
     * into.</p>
     */
    inline GetCSVHeaderResult& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool that the users are to be imported
     * into.</p>
     */
    inline GetCSVHeaderResult& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool that the users are to be imported
     * into.</p>
     */
    inline GetCSVHeaderResult& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCSVHeader() const{ return m_cSVHeader; }

    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline void SetCSVHeader(const Aws::Vector<Aws::String>& value) { m_cSVHeader = value; }

    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline void SetCSVHeader(Aws::Vector<Aws::String>&& value) { m_cSVHeader = std::move(value); }

    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline GetCSVHeaderResult& WithCSVHeader(const Aws::Vector<Aws::String>& value) { SetCSVHeader(value); return *this;}

    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline GetCSVHeaderResult& WithCSVHeader(Aws::Vector<Aws::String>&& value) { SetCSVHeader(std::move(value)); return *this;}

    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline GetCSVHeaderResult& AddCSVHeader(const Aws::String& value) { m_cSVHeader.push_back(value); return *this; }

    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline GetCSVHeaderResult& AddCSVHeader(Aws::String&& value) { m_cSVHeader.push_back(std::move(value)); return *this; }

    /**
     * <p>The header information for the .csv file for the user import job.</p>
     */
    inline GetCSVHeaderResult& AddCSVHeader(const char* value) { m_cSVHeader.push_back(value); return *this; }

  private:

    Aws::String m_userPoolId;

    Aws::Vector<Aws::String> m_cSVHeader;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
