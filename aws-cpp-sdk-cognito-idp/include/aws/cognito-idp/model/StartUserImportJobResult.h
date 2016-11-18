﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/UserImportJobType.h>

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
   * <p>Represents the response from the server to the request to start the user
   * import job.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API StartUserImportJobResult
  {
  public:
    StartUserImportJobResult();
    StartUserImportJobResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartUserImportJobResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline const UserImportJobType& GetUserImportJob() const{ return m_userImportJob; }

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline void SetUserImportJob(const UserImportJobType& value) { m_userImportJob = value; }

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline void SetUserImportJob(UserImportJobType&& value) { m_userImportJob = value; }

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline StartUserImportJobResult& WithUserImportJob(const UserImportJobType& value) { SetUserImportJob(value); return *this;}

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline StartUserImportJobResult& WithUserImportJob(UserImportJobType&& value) { SetUserImportJob(value); return *this;}

  private:
    UserImportJobType m_userImportJob;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
