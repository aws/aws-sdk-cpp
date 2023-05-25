/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserImportJobType.h>
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
  /**
   * <p>Represents the response from the server to the request to stop the user
   * import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StopUserImportJobResponse">AWS
   * API Reference</a></p>
   */
  class StopUserImportJobResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API StopUserImportJobResult();
    AWS_COGNITOIDENTITYPROVIDER_API StopUserImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API StopUserImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline StopUserImportJobResult& WithUserImportJob(const UserImportJobType& value) { SetUserImportJob(value); return *this;}

    /**
     * <p>The job object that represents the user import job.</p>
     */
    inline StopUserImportJobResult& WithUserImportJob(UserImportJobType&& value) { SetUserImportJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopUserImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopUserImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopUserImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    UserImportJobType m_userImportJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
