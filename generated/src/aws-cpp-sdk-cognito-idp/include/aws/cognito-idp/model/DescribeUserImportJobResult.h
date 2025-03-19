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
   * <p>Represents the response from the server to the request to describe the user
   * import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserImportJobResponse">AWS
   * API Reference</a></p>
   */
  class DescribeUserImportJobResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserImportJobResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the user import job. Includes logging destination, status, and
     * the Amazon S3 pre-signed URL for CSV upload.</p>
     */
    inline const UserImportJobType& GetUserImportJob() const { return m_userImportJob; }
    template<typename UserImportJobT = UserImportJobType>
    void SetUserImportJob(UserImportJobT&& value) { m_userImportJobHasBeenSet = true; m_userImportJob = std::forward<UserImportJobT>(value); }
    template<typename UserImportJobT = UserImportJobType>
    DescribeUserImportJobResult& WithUserImportJob(UserImportJobT&& value) { SetUserImportJob(std::forward<UserImportJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UserImportJobType m_userImportJob;
    bool m_userImportJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
