/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AvailabilityCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/UnavailabilityReasonCode.h>
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
namespace Macie2
{
namespace Model
{
  class GetSensitiveDataOccurrencesAvailabilityResult
  {
  public:
    AWS_MACIE2_API GetSensitiveDataOccurrencesAvailabilityResult();
    AWS_MACIE2_API GetSensitiveDataOccurrencesAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetSensitiveDataOccurrencesAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies whether occurrences of sensitive data can be retrieved for the
     * finding. Possible values are: AVAILABLE, the sensitive data can be retrieved;
     * and, UNAVAILABLE, the sensitive data can't be retrieved. If this value is
     * UNAVAILABLE, the reasons array indicates why the data can't be retrieved.</p>
     */
    inline const AvailabilityCode& GetCode() const{ return m_code; }

    /**
     * <p>Specifies whether occurrences of sensitive data can be retrieved for the
     * finding. Possible values are: AVAILABLE, the sensitive data can be retrieved;
     * and, UNAVAILABLE, the sensitive data can't be retrieved. If this value is
     * UNAVAILABLE, the reasons array indicates why the data can't be retrieved.</p>
     */
    inline void SetCode(const AvailabilityCode& value) { m_code = value; }

    /**
     * <p>Specifies whether occurrences of sensitive data can be retrieved for the
     * finding. Possible values are: AVAILABLE, the sensitive data can be retrieved;
     * and, UNAVAILABLE, the sensitive data can't be retrieved. If this value is
     * UNAVAILABLE, the reasons array indicates why the data can't be retrieved.</p>
     */
    inline void SetCode(AvailabilityCode&& value) { m_code = std::move(value); }

    /**
     * <p>Specifies whether occurrences of sensitive data can be retrieved for the
     * finding. Possible values are: AVAILABLE, the sensitive data can be retrieved;
     * and, UNAVAILABLE, the sensitive data can't be retrieved. If this value is
     * UNAVAILABLE, the reasons array indicates why the data can't be retrieved.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithCode(const AvailabilityCode& value) { SetCode(value); return *this;}

    /**
     * <p>Specifies whether occurrences of sensitive data can be retrieved for the
     * finding. Possible values are: AVAILABLE, the sensitive data can be retrieved;
     * and, UNAVAILABLE, the sensitive data can't be retrieved. If this value is
     * UNAVAILABLE, the reasons array indicates why the data can't be retrieved.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithCode(AvailabilityCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>ACCOUNT_NOT_IN_ORGANIZATION - The
     * affected account isn't currently part of your organization. Or the account is
     * part of your organization but Macie isn't currently enabled for the account.
     * You're not allowed to access the affected S3 object by using Macie.</p></li>
     * <li><p>INVALID_CLASSIFICATION_RESULT - There isn't a corresponding sensitive
     * data discovery result for the finding. Or the corresponding sensitive data
     * discovery result isn't available in the current Amazon Web Services Region, is
     * malformed or corrupted, or uses an unsupported storage format. Macie can't
     * verify the location of the sensitive data to retrieve.</p></li>
     * <li><p>INVALID_RESULT_SIGNATURE - The corresponding sensitive data discovery
     * result is stored in an S3 object that wasn't signed by Macie. Macie can't verify
     * the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>MEMBER_ROLE_TOO_PERMISSIVE - The trust or permissions
     * policy for the IAM role in the affected member account doesn't meet Macie
     * requirements for restricting access to the role. Or the role's trust policy
     * doesn't specify the correct external ID for your organization. Macie can't
     * assume the role to retrieve the sensitive data.</p></li>
     * <li><p>MISSING_GET_MEMBER_PERMISSION - You're not allowed to retrieve
     * information about the association between your account and the affected account.
     * Macie can't determine whether you’re allowed to access the affected S3 object as
     * the delegated Macie administrator for the affected account.</p></li>
     * <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the affected S3 object
     * exceeds the size quota for retrieving occurrences of sensitive data from this
     * type of file.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object isn't
     * available. The object was renamed, moved, deleted, or changed after Macie
     * created the finding. Or the object is encrypted with an KMS key that's currently
     * disabled.</p></li> <li><p>RESULT_NOT_SIGNED - The corresponding sensitive data
     * discovery result is stored in an S3 object that hasn't been signed. Macie can't
     * verify the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>ROLE_TOO_PERMISSIVE - Your account is configured to
     * retrieve occurrences of sensitive data by using an IAM role whose trust or
     * permissions policy doesn't meet Macie requirements for restricting access to the
     * role. Macie can’t assume the role to retrieve the sensitive data.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline const Aws::Vector<UnavailabilityReasonCode>& GetReasons() const{ return m_reasons; }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>ACCOUNT_NOT_IN_ORGANIZATION - The
     * affected account isn't currently part of your organization. Or the account is
     * part of your organization but Macie isn't currently enabled for the account.
     * You're not allowed to access the affected S3 object by using Macie.</p></li>
     * <li><p>INVALID_CLASSIFICATION_RESULT - There isn't a corresponding sensitive
     * data discovery result for the finding. Or the corresponding sensitive data
     * discovery result isn't available in the current Amazon Web Services Region, is
     * malformed or corrupted, or uses an unsupported storage format. Macie can't
     * verify the location of the sensitive data to retrieve.</p></li>
     * <li><p>INVALID_RESULT_SIGNATURE - The corresponding sensitive data discovery
     * result is stored in an S3 object that wasn't signed by Macie. Macie can't verify
     * the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>MEMBER_ROLE_TOO_PERMISSIVE - The trust or permissions
     * policy for the IAM role in the affected member account doesn't meet Macie
     * requirements for restricting access to the role. Or the role's trust policy
     * doesn't specify the correct external ID for your organization. Macie can't
     * assume the role to retrieve the sensitive data.</p></li>
     * <li><p>MISSING_GET_MEMBER_PERMISSION - You're not allowed to retrieve
     * information about the association between your account and the affected account.
     * Macie can't determine whether you’re allowed to access the affected S3 object as
     * the delegated Macie administrator for the affected account.</p></li>
     * <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the affected S3 object
     * exceeds the size quota for retrieving occurrences of sensitive data from this
     * type of file.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object isn't
     * available. The object was renamed, moved, deleted, or changed after Macie
     * created the finding. Or the object is encrypted with an KMS key that's currently
     * disabled.</p></li> <li><p>RESULT_NOT_SIGNED - The corresponding sensitive data
     * discovery result is stored in an S3 object that hasn't been signed. Macie can't
     * verify the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>ROLE_TOO_PERMISSIVE - Your account is configured to
     * retrieve occurrences of sensitive data by using an IAM role whose trust or
     * permissions policy doesn't meet Macie requirements for restricting access to the
     * role. Macie can’t assume the role to retrieve the sensitive data.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline void SetReasons(const Aws::Vector<UnavailabilityReasonCode>& value) { m_reasons = value; }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>ACCOUNT_NOT_IN_ORGANIZATION - The
     * affected account isn't currently part of your organization. Or the account is
     * part of your organization but Macie isn't currently enabled for the account.
     * You're not allowed to access the affected S3 object by using Macie.</p></li>
     * <li><p>INVALID_CLASSIFICATION_RESULT - There isn't a corresponding sensitive
     * data discovery result for the finding. Or the corresponding sensitive data
     * discovery result isn't available in the current Amazon Web Services Region, is
     * malformed or corrupted, or uses an unsupported storage format. Macie can't
     * verify the location of the sensitive data to retrieve.</p></li>
     * <li><p>INVALID_RESULT_SIGNATURE - The corresponding sensitive data discovery
     * result is stored in an S3 object that wasn't signed by Macie. Macie can't verify
     * the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>MEMBER_ROLE_TOO_PERMISSIVE - The trust or permissions
     * policy for the IAM role in the affected member account doesn't meet Macie
     * requirements for restricting access to the role. Or the role's trust policy
     * doesn't specify the correct external ID for your organization. Macie can't
     * assume the role to retrieve the sensitive data.</p></li>
     * <li><p>MISSING_GET_MEMBER_PERMISSION - You're not allowed to retrieve
     * information about the association between your account and the affected account.
     * Macie can't determine whether you’re allowed to access the affected S3 object as
     * the delegated Macie administrator for the affected account.</p></li>
     * <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the affected S3 object
     * exceeds the size quota for retrieving occurrences of sensitive data from this
     * type of file.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object isn't
     * available. The object was renamed, moved, deleted, or changed after Macie
     * created the finding. Or the object is encrypted with an KMS key that's currently
     * disabled.</p></li> <li><p>RESULT_NOT_SIGNED - The corresponding sensitive data
     * discovery result is stored in an S3 object that hasn't been signed. Macie can't
     * verify the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>ROLE_TOO_PERMISSIVE - Your account is configured to
     * retrieve occurrences of sensitive data by using an IAM role whose trust or
     * permissions policy doesn't meet Macie requirements for restricting access to the
     * role. Macie can’t assume the role to retrieve the sensitive data.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline void SetReasons(Aws::Vector<UnavailabilityReasonCode>&& value) { m_reasons = std::move(value); }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>ACCOUNT_NOT_IN_ORGANIZATION - The
     * affected account isn't currently part of your organization. Or the account is
     * part of your organization but Macie isn't currently enabled for the account.
     * You're not allowed to access the affected S3 object by using Macie.</p></li>
     * <li><p>INVALID_CLASSIFICATION_RESULT - There isn't a corresponding sensitive
     * data discovery result for the finding. Or the corresponding sensitive data
     * discovery result isn't available in the current Amazon Web Services Region, is
     * malformed or corrupted, or uses an unsupported storage format. Macie can't
     * verify the location of the sensitive data to retrieve.</p></li>
     * <li><p>INVALID_RESULT_SIGNATURE - The corresponding sensitive data discovery
     * result is stored in an S3 object that wasn't signed by Macie. Macie can't verify
     * the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>MEMBER_ROLE_TOO_PERMISSIVE - The trust or permissions
     * policy for the IAM role in the affected member account doesn't meet Macie
     * requirements for restricting access to the role. Or the role's trust policy
     * doesn't specify the correct external ID for your organization. Macie can't
     * assume the role to retrieve the sensitive data.</p></li>
     * <li><p>MISSING_GET_MEMBER_PERMISSION - You're not allowed to retrieve
     * information about the association between your account and the affected account.
     * Macie can't determine whether you’re allowed to access the affected S3 object as
     * the delegated Macie administrator for the affected account.</p></li>
     * <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the affected S3 object
     * exceeds the size quota for retrieving occurrences of sensitive data from this
     * type of file.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object isn't
     * available. The object was renamed, moved, deleted, or changed after Macie
     * created the finding. Or the object is encrypted with an KMS key that's currently
     * disabled.</p></li> <li><p>RESULT_NOT_SIGNED - The corresponding sensitive data
     * discovery result is stored in an S3 object that hasn't been signed. Macie can't
     * verify the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>ROLE_TOO_PERMISSIVE - Your account is configured to
     * retrieve occurrences of sensitive data by using an IAM role whose trust or
     * permissions policy doesn't meet Macie requirements for restricting access to the
     * role. Macie can’t assume the role to retrieve the sensitive data.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithReasons(const Aws::Vector<UnavailabilityReasonCode>& value) { SetReasons(value); return *this;}

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>ACCOUNT_NOT_IN_ORGANIZATION - The
     * affected account isn't currently part of your organization. Or the account is
     * part of your organization but Macie isn't currently enabled for the account.
     * You're not allowed to access the affected S3 object by using Macie.</p></li>
     * <li><p>INVALID_CLASSIFICATION_RESULT - There isn't a corresponding sensitive
     * data discovery result for the finding. Or the corresponding sensitive data
     * discovery result isn't available in the current Amazon Web Services Region, is
     * malformed or corrupted, or uses an unsupported storage format. Macie can't
     * verify the location of the sensitive data to retrieve.</p></li>
     * <li><p>INVALID_RESULT_SIGNATURE - The corresponding sensitive data discovery
     * result is stored in an S3 object that wasn't signed by Macie. Macie can't verify
     * the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>MEMBER_ROLE_TOO_PERMISSIVE - The trust or permissions
     * policy for the IAM role in the affected member account doesn't meet Macie
     * requirements for restricting access to the role. Or the role's trust policy
     * doesn't specify the correct external ID for your organization. Macie can't
     * assume the role to retrieve the sensitive data.</p></li>
     * <li><p>MISSING_GET_MEMBER_PERMISSION - You're not allowed to retrieve
     * information about the association between your account and the affected account.
     * Macie can't determine whether you’re allowed to access the affected S3 object as
     * the delegated Macie administrator for the affected account.</p></li>
     * <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the affected S3 object
     * exceeds the size quota for retrieving occurrences of sensitive data from this
     * type of file.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object isn't
     * available. The object was renamed, moved, deleted, or changed after Macie
     * created the finding. Or the object is encrypted with an KMS key that's currently
     * disabled.</p></li> <li><p>RESULT_NOT_SIGNED - The corresponding sensitive data
     * discovery result is stored in an S3 object that hasn't been signed. Macie can't
     * verify the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>ROLE_TOO_PERMISSIVE - Your account is configured to
     * retrieve occurrences of sensitive data by using an IAM role whose trust or
     * permissions policy doesn't meet Macie requirements for restricting access to the
     * role. Macie can’t assume the role to retrieve the sensitive data.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithReasons(Aws::Vector<UnavailabilityReasonCode>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>ACCOUNT_NOT_IN_ORGANIZATION - The
     * affected account isn't currently part of your organization. Or the account is
     * part of your organization but Macie isn't currently enabled for the account.
     * You're not allowed to access the affected S3 object by using Macie.</p></li>
     * <li><p>INVALID_CLASSIFICATION_RESULT - There isn't a corresponding sensitive
     * data discovery result for the finding. Or the corresponding sensitive data
     * discovery result isn't available in the current Amazon Web Services Region, is
     * malformed or corrupted, or uses an unsupported storage format. Macie can't
     * verify the location of the sensitive data to retrieve.</p></li>
     * <li><p>INVALID_RESULT_SIGNATURE - The corresponding sensitive data discovery
     * result is stored in an S3 object that wasn't signed by Macie. Macie can't verify
     * the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>MEMBER_ROLE_TOO_PERMISSIVE - The trust or permissions
     * policy for the IAM role in the affected member account doesn't meet Macie
     * requirements for restricting access to the role. Or the role's trust policy
     * doesn't specify the correct external ID for your organization. Macie can't
     * assume the role to retrieve the sensitive data.</p></li>
     * <li><p>MISSING_GET_MEMBER_PERMISSION - You're not allowed to retrieve
     * information about the association between your account and the affected account.
     * Macie can't determine whether you’re allowed to access the affected S3 object as
     * the delegated Macie administrator for the affected account.</p></li>
     * <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the affected S3 object
     * exceeds the size quota for retrieving occurrences of sensitive data from this
     * type of file.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object isn't
     * available. The object was renamed, moved, deleted, or changed after Macie
     * created the finding. Or the object is encrypted with an KMS key that's currently
     * disabled.</p></li> <li><p>RESULT_NOT_SIGNED - The corresponding sensitive data
     * discovery result is stored in an S3 object that hasn't been signed. Macie can't
     * verify the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>ROLE_TOO_PERMISSIVE - Your account is configured to
     * retrieve occurrences of sensitive data by using an IAM role whose trust or
     * permissions policy doesn't meet Macie requirements for restricting access to the
     * role. Macie can’t assume the role to retrieve the sensitive data.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& AddReasons(const UnavailabilityReasonCode& value) { m_reasons.push_back(value); return *this; }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>ACCOUNT_NOT_IN_ORGANIZATION - The
     * affected account isn't currently part of your organization. Or the account is
     * part of your organization but Macie isn't currently enabled for the account.
     * You're not allowed to access the affected S3 object by using Macie.</p></li>
     * <li><p>INVALID_CLASSIFICATION_RESULT - There isn't a corresponding sensitive
     * data discovery result for the finding. Or the corresponding sensitive data
     * discovery result isn't available in the current Amazon Web Services Region, is
     * malformed or corrupted, or uses an unsupported storage format. Macie can't
     * verify the location of the sensitive data to retrieve.</p></li>
     * <li><p>INVALID_RESULT_SIGNATURE - The corresponding sensitive data discovery
     * result is stored in an S3 object that wasn't signed by Macie. Macie can't verify
     * the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>MEMBER_ROLE_TOO_PERMISSIVE - The trust or permissions
     * policy for the IAM role in the affected member account doesn't meet Macie
     * requirements for restricting access to the role. Or the role's trust policy
     * doesn't specify the correct external ID for your organization. Macie can't
     * assume the role to retrieve the sensitive data.</p></li>
     * <li><p>MISSING_GET_MEMBER_PERMISSION - You're not allowed to retrieve
     * information about the association between your account and the affected account.
     * Macie can't determine whether you’re allowed to access the affected S3 object as
     * the delegated Macie administrator for the affected account.</p></li>
     * <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the affected S3 object
     * exceeds the size quota for retrieving occurrences of sensitive data from this
     * type of file.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object isn't
     * available. The object was renamed, moved, deleted, or changed after Macie
     * created the finding. Or the object is encrypted with an KMS key that's currently
     * disabled.</p></li> <li><p>RESULT_NOT_SIGNED - The corresponding sensitive data
     * discovery result is stored in an S3 object that hasn't been signed. Macie can't
     * verify the integrity and authenticity of the sensitive data discovery result.
     * Therefore, Macie can't verify the location of the sensitive data to
     * retrieve.</p></li> <li><p>ROLE_TOO_PERMISSIVE - Your account is configured to
     * retrieve occurrences of sensitive data by using an IAM role whose trust or
     * permissions policy doesn't meet Macie requirements for restricting access to the
     * role. Macie can’t assume the role to retrieve the sensitive data.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& AddReasons(UnavailabilityReasonCode&& value) { m_reasons.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AvailabilityCode m_code;

    Aws::Vector<UnavailabilityReasonCode> m_reasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
