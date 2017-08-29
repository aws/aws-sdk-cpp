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
#include <aws/sts/STS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace STS
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetCallerIdentity</a> request,
   * including information about the entity making the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/GetCallerIdentityResponse">AWS
   * API Reference</a></p>
   */
  class AWS_STS_API GetCallerIdentityResult
  {
  public:
    GetCallerIdentityResult();
    GetCallerIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetCallerIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity making the call. The values returned are those listed in the
     * <b>aws:userid</b> column in the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity making the call. The values returned are those listed in the
     * <b>aws:userid</b> column in the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity making the call. The values returned are those listed in the
     * <b>aws:userid</b> column in the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity making the call. The values returned are those listed in the
     * <b>aws:userid</b> column in the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity making the call. The values returned are those listed in the
     * <b>aws:userid</b> column in the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline GetCallerIdentityResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity making the call. The values returned are those listed in the
     * <b>aws:userid</b> column in the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline GetCallerIdentityResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity making the call. The values returned are those listed in the
     * <b>aws:userid</b> column in the <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline GetCallerIdentityResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The AWS account ID number of the account that owns or contains the calling
     * entity.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The AWS account ID number of the account that owns or contains the calling
     * entity.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_account = value; }

    /**
     * <p>The AWS account ID number of the account that owns or contains the calling
     * entity.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_account = std::move(value); }

    /**
     * <p>The AWS account ID number of the account that owns or contains the calling
     * entity.</p>
     */
    inline void SetAccount(const char* value) { m_account.assign(value); }

    /**
     * <p>The AWS account ID number of the account that owns or contains the calling
     * entity.</p>
     */
    inline GetCallerIdentityResult& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The AWS account ID number of the account that owns or contains the calling
     * entity.</p>
     */
    inline GetCallerIdentityResult& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID number of the account that owns or contains the calling
     * entity.</p>
     */
    inline GetCallerIdentityResult& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The AWS ARN associated with the calling entity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The AWS ARN associated with the calling entity.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The AWS ARN associated with the calling entity.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The AWS ARN associated with the calling entity.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The AWS ARN associated with the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The AWS ARN associated with the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The AWS ARN associated with the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetCallerIdentityResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetCallerIdentityResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_userId;

    Aws::String m_account;

    Aws::String m_arn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
