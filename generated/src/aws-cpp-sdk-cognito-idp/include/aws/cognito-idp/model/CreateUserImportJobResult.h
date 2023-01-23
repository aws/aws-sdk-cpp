/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserImportJobType.h>
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
   * <p>Represents the response from the server to the request to create the user
   * import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserImportJobResponse">AWS
   * API Reference</a></p>
   */
  class CreateUserImportJobResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserImportJobResult();
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetUserImportJob(UserImportJobType&& value) { m_userImportJob = std::move(value); }

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline CreateUserImportJobResult& WithUserImportJob(const UserImportJobType& value) { SetUserImportJob(value); return *this;}

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline CreateUserImportJobResult& WithUserImportJob(UserImportJobType&& value) { SetUserImportJob(std::move(value)); return *this;}

  private:

    UserImportJobType m_userImportJob;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
