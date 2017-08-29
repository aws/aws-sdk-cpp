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
#include <aws/sts/model/Credentials.h>
#include <aws/sts/model/AssumedRoleUser.h>
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
   * <p>Contains the response to a successful <a>AssumeRoleWithSAML</a> request,
   * including temporary AWS credentials that can be used to make AWS requests.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/AssumeRoleWithSAMLResponse">AWS
   * API Reference</a></p>
   */
  class AWS_STS_API AssumeRoleWithSAMLResult
  {
  public:
    AssumeRoleWithSAMLResult();
    AssumeRoleWithSAMLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AssumeRoleWithSAMLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline AssumeRoleWithSAMLResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security (or session) token.</p> <p> <b>Note:</b> The size of
     * the security token that STS APIs return is not fixed. We strongly recommend that
     * you make no assumptions about the maximum size. As of this writing, the typical
     * size is less than 4096 bytes, but that can vary. Also, future updates to AWS
     * might require larger sizes.</p>
     */
    inline AssumeRoleWithSAMLResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The identifiers for the temporary security credentials that the operation
     * returns.</p>
     */
    inline const AssumedRoleUser& GetAssumedRoleUser() const{ return m_assumedRoleUser; }

    /**
     * <p>The identifiers for the temporary security credentials that the operation
     * returns.</p>
     */
    inline void SetAssumedRoleUser(const AssumedRoleUser& value) { m_assumedRoleUser = value; }

    /**
     * <p>The identifiers for the temporary security credentials that the operation
     * returns.</p>
     */
    inline void SetAssumedRoleUser(AssumedRoleUser&& value) { m_assumedRoleUser = std::move(value); }

    /**
     * <p>The identifiers for the temporary security credentials that the operation
     * returns.</p>
     */
    inline AssumeRoleWithSAMLResult& WithAssumedRoleUser(const AssumedRoleUser& value) { SetAssumedRoleUser(value); return *this;}

    /**
     * <p>The identifiers for the temporary security credentials that the operation
     * returns.</p>
     */
    inline AssumeRoleWithSAMLResult& WithAssumedRoleUser(AssumedRoleUser&& value) { SetAssumedRoleUser(std::move(value)); return *this;}


    /**
     * <p>A percentage value that indicates the size of the policy in packed form. The
     * service rejects any policy with a packed size greater than 100 percent, which
     * means the policy exceeded the allowed space.</p>
     */
    inline int GetPackedPolicySize() const{ return m_packedPolicySize; }

    /**
     * <p>A percentage value that indicates the size of the policy in packed form. The
     * service rejects any policy with a packed size greater than 100 percent, which
     * means the policy exceeded the allowed space.</p>
     */
    inline void SetPackedPolicySize(int value) { m_packedPolicySize = value; }

    /**
     * <p>A percentage value that indicates the size of the policy in packed form. The
     * service rejects any policy with a packed size greater than 100 percent, which
     * means the policy exceeded the allowed space.</p>
     */
    inline AssumeRoleWithSAMLResult& WithPackedPolicySize(int value) { SetPackedPolicySize(value); return *this;}


    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subject = value; }

    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subject = std::move(value); }

    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline void SetSubject(const char* value) { m_subject.assign(value); }

    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline AssumeRoleWithSAMLResult& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline AssumeRoleWithSAMLResult& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>NameID</code> element in the <code>Subject</code>
     * element of the SAML assertion.</p>
     */
    inline AssumeRoleWithSAMLResult& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline const Aws::String& GetSubjectType() const{ return m_subjectType; }

    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline void SetSubjectType(const Aws::String& value) { m_subjectType = value; }

    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline void SetSubjectType(Aws::String&& value) { m_subjectType = std::move(value); }

    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline void SetSubjectType(const char* value) { m_subjectType.assign(value); }

    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline AssumeRoleWithSAMLResult& WithSubjectType(const Aws::String& value) { SetSubjectType(value); return *this;}

    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline AssumeRoleWithSAMLResult& WithSubjectType(Aws::String&& value) { SetSubjectType(std::move(value)); return *this;}

    /**
     * <p> The format of the name ID, as defined by the <code>Format</code> attribute
     * in the <code>NameID</code> element of the SAML assertion. Typical examples of
     * the format are <code>transient</code> or <code>persistent</code>. </p> <p> If
     * the format includes the prefix
     * <code>urn:oasis:names:tc:SAML:2.0:nameid-format</code>, that prefix is removed.
     * For example, <code>urn:oasis:names:tc:SAML:2.0:nameid-format:transient</code> is
     * returned as <code>transient</code>. If the format includes any other prefix, the
     * format is returned with no modifications.</p>
     */
    inline AssumeRoleWithSAMLResult& WithSubjectType(const char* value) { SetSubjectType(value); return *this;}


    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuer = value; }

    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuer = std::move(value); }

    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline void SetIssuer(const char* value) { m_issuer.assign(value); }

    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline AssumeRoleWithSAMLResult& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline AssumeRoleWithSAMLResult& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The value of the <code>Issuer</code> element of the SAML assertion.</p>
     */
    inline AssumeRoleWithSAMLResult& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline const Aws::String& GetAudience() const{ return m_audience; }

    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline void SetAudience(const Aws::String& value) { m_audience = value; }

    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline void SetAudience(Aws::String&& value) { m_audience = std::move(value); }

    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline void SetAudience(const char* value) { m_audience.assign(value); }

    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline AssumeRoleWithSAMLResult& WithAudience(const Aws::String& value) { SetAudience(value); return *this;}

    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline AssumeRoleWithSAMLResult& WithAudience(Aws::String&& value) { SetAudience(std::move(value)); return *this;}

    /**
     * <p> The value of the <code>Recipient</code> attribute of the
     * <code>SubjectConfirmationData</code> element of the SAML assertion. </p>
     */
    inline AssumeRoleWithSAMLResult& WithAudience(const char* value) { SetAudience(value); return *this;}


    /**
     * <p>A hash value based on the concatenation of the <code>Issuer</code> response
     * value, the AWS account ID, and the friendly name (the last part of the ARN) of
     * the SAML provider in IAM. The combination of <code>NameQualifier</code> and
     * <code>Subject</code> can be used to uniquely identify a federated user. </p>
     * <p>The following pseudocode shows how the hash value is calculated:</p> <p>
     * <code>BASE64 ( SHA1 ( "https://example.com/saml" + "123456789012" + "/MySAMLIdP"
     * ) )</code> </p>
     */
    inline const Aws::String& GetNameQualifier() const{ return m_nameQualifier; }

    /**
     * <p>A hash value based on the concatenation of the <code>Issuer</code> response
     * value, the AWS account ID, and the friendly name (the last part of the ARN) of
     * the SAML provider in IAM. The combination of <code>NameQualifier</code> and
     * <code>Subject</code> can be used to uniquely identify a federated user. </p>
     * <p>The following pseudocode shows how the hash value is calculated:</p> <p>
     * <code>BASE64 ( SHA1 ( "https://example.com/saml" + "123456789012" + "/MySAMLIdP"
     * ) )</code> </p>
     */
    inline void SetNameQualifier(const Aws::String& value) { m_nameQualifier = value; }

    /**
     * <p>A hash value based on the concatenation of the <code>Issuer</code> response
     * value, the AWS account ID, and the friendly name (the last part of the ARN) of
     * the SAML provider in IAM. The combination of <code>NameQualifier</code> and
     * <code>Subject</code> can be used to uniquely identify a federated user. </p>
     * <p>The following pseudocode shows how the hash value is calculated:</p> <p>
     * <code>BASE64 ( SHA1 ( "https://example.com/saml" + "123456789012" + "/MySAMLIdP"
     * ) )</code> </p>
     */
    inline void SetNameQualifier(Aws::String&& value) { m_nameQualifier = std::move(value); }

    /**
     * <p>A hash value based on the concatenation of the <code>Issuer</code> response
     * value, the AWS account ID, and the friendly name (the last part of the ARN) of
     * the SAML provider in IAM. The combination of <code>NameQualifier</code> and
     * <code>Subject</code> can be used to uniquely identify a federated user. </p>
     * <p>The following pseudocode shows how the hash value is calculated:</p> <p>
     * <code>BASE64 ( SHA1 ( "https://example.com/saml" + "123456789012" + "/MySAMLIdP"
     * ) )</code> </p>
     */
    inline void SetNameQualifier(const char* value) { m_nameQualifier.assign(value); }

    /**
     * <p>A hash value based on the concatenation of the <code>Issuer</code> response
     * value, the AWS account ID, and the friendly name (the last part of the ARN) of
     * the SAML provider in IAM. The combination of <code>NameQualifier</code> and
     * <code>Subject</code> can be used to uniquely identify a federated user. </p>
     * <p>The following pseudocode shows how the hash value is calculated:</p> <p>
     * <code>BASE64 ( SHA1 ( "https://example.com/saml" + "123456789012" + "/MySAMLIdP"
     * ) )</code> </p>
     */
    inline AssumeRoleWithSAMLResult& WithNameQualifier(const Aws::String& value) { SetNameQualifier(value); return *this;}

    /**
     * <p>A hash value based on the concatenation of the <code>Issuer</code> response
     * value, the AWS account ID, and the friendly name (the last part of the ARN) of
     * the SAML provider in IAM. The combination of <code>NameQualifier</code> and
     * <code>Subject</code> can be used to uniquely identify a federated user. </p>
     * <p>The following pseudocode shows how the hash value is calculated:</p> <p>
     * <code>BASE64 ( SHA1 ( "https://example.com/saml" + "123456789012" + "/MySAMLIdP"
     * ) )</code> </p>
     */
    inline AssumeRoleWithSAMLResult& WithNameQualifier(Aws::String&& value) { SetNameQualifier(std::move(value)); return *this;}

    /**
     * <p>A hash value based on the concatenation of the <code>Issuer</code> response
     * value, the AWS account ID, and the friendly name (the last part of the ARN) of
     * the SAML provider in IAM. The combination of <code>NameQualifier</code> and
     * <code>Subject</code> can be used to uniquely identify a federated user. </p>
     * <p>The following pseudocode shows how the hash value is calculated:</p> <p>
     * <code>BASE64 ( SHA1 ( "https://example.com/saml" + "123456789012" + "/MySAMLIdP"
     * ) )</code> </p>
     */
    inline AssumeRoleWithSAMLResult& WithNameQualifier(const char* value) { SetNameQualifier(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssumeRoleWithSAMLResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssumeRoleWithSAMLResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Credentials m_credentials;

    AssumedRoleUser m_assumedRoleUser;

    int m_packedPolicySize;

    Aws::String m_subject;

    Aws::String m_subjectType;

    Aws::String m_issuer;

    Aws::String m_audience;

    Aws::String m_nameQualifier;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
