/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetCallerIdentityResult
  {
  public:
    AWS_STS_API GetCallerIdentityResult();
    AWS_STS_API GetCallerIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_STS_API GetCallerIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity that is making the call. The values returned are those listed in
     * the <b>aws:userid</b> column in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity that is making the call. The values returned are those listed in
     * the <b>aws:userid</b> column in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userId = value; }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity that is making the call. The values returned are those listed in
     * the <b>aws:userid</b> column in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity that is making the call. The values returned are those listed in
     * the <b>aws:userid</b> column in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline void SetUserId(const char* value) { m_userId.assign(value); }

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity that is making the call. The values returned are those listed in
     * the <b>aws:userid</b> column in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline GetCallerIdentityResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity that is making the call. The values returned are those listed in
     * the <b>aws:userid</b> column in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline GetCallerIdentityResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the calling entity. The exact value depends on the
     * type of entity that is making the call. The values returned are those listed in
     * the <b>aws:userid</b> column in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_variables.html#principaltable">Principal
     * table</a> found on the <b>Policy Variables</b> reference page in the <i>IAM User
     * Guide</i>.</p>
     */
    inline GetCallerIdentityResult& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID number of the account that owns or
     * contains the calling entity.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The Amazon Web Services account ID number of the account that owns or
     * contains the calling entity.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_account = value; }

    /**
     * <p>The Amazon Web Services account ID number of the account that owns or
     * contains the calling entity.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_account = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID number of the account that owns or
     * contains the calling entity.</p>
     */
    inline void SetAccount(const char* value) { m_account.assign(value); }

    /**
     * <p>The Amazon Web Services account ID number of the account that owns or
     * contains the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID number of the account that owns or
     * contains the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID number of the account that owns or
     * contains the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The Amazon Web Services ARN associated with the calling entity.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Web Services ARN associated with the calling entity.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Web Services ARN associated with the calling entity.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Web Services ARN associated with the calling entity.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Web Services ARN associated with the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Web Services ARN associated with the calling entity.</p>
     */
    inline GetCallerIdentityResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services ARN associated with the calling entity.</p>
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
