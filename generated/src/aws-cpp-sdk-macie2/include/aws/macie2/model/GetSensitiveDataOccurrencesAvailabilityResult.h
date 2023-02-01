/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AvailabilityCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
     * finding. Possible values are:</p> <ul><li><p>INVALID_CLASSIFICATION_RESULT -
     * Amazon Macie can't verify the location of the sensitive data to retrieve. There
     * isn't a corresponding sensitive data discovery result for the finding. Or the
     * sensitive data discovery result specified by the
     * ClassificationDetails.detailedResultsLocation field of the finding isn't
     * available, is malformed or corrupted, or uses an unsupported storage
     * format.</p></li> <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the
     * affected S3 object exceeds the size quota for retrieving occurrences of
     * sensitive data.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object
     * isn't available. The object might have been renamed, moved, or deleted. Or the
     * object was changed after Macie created the finding.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline const Aws::Vector<UnavailabilityReasonCode>& GetReasons() const{ return m_reasons; }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>INVALID_CLASSIFICATION_RESULT -
     * Amazon Macie can't verify the location of the sensitive data to retrieve. There
     * isn't a corresponding sensitive data discovery result for the finding. Or the
     * sensitive data discovery result specified by the
     * ClassificationDetails.detailedResultsLocation field of the finding isn't
     * available, is malformed or corrupted, or uses an unsupported storage
     * format.</p></li> <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the
     * affected S3 object exceeds the size quota for retrieving occurrences of
     * sensitive data.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object
     * isn't available. The object might have been renamed, moved, or deleted. Or the
     * object was changed after Macie created the finding.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline void SetReasons(const Aws::Vector<UnavailabilityReasonCode>& value) { m_reasons = value; }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>INVALID_CLASSIFICATION_RESULT -
     * Amazon Macie can't verify the location of the sensitive data to retrieve. There
     * isn't a corresponding sensitive data discovery result for the finding. Or the
     * sensitive data discovery result specified by the
     * ClassificationDetails.detailedResultsLocation field of the finding isn't
     * available, is malformed or corrupted, or uses an unsupported storage
     * format.</p></li> <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the
     * affected S3 object exceeds the size quota for retrieving occurrences of
     * sensitive data.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object
     * isn't available. The object might have been renamed, moved, or deleted. Or the
     * object was changed after Macie created the finding.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline void SetReasons(Aws::Vector<UnavailabilityReasonCode>&& value) { m_reasons = std::move(value); }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>INVALID_CLASSIFICATION_RESULT -
     * Amazon Macie can't verify the location of the sensitive data to retrieve. There
     * isn't a corresponding sensitive data discovery result for the finding. Or the
     * sensitive data discovery result specified by the
     * ClassificationDetails.detailedResultsLocation field of the finding isn't
     * available, is malformed or corrupted, or uses an unsupported storage
     * format.</p></li> <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the
     * affected S3 object exceeds the size quota for retrieving occurrences of
     * sensitive data.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object
     * isn't available. The object might have been renamed, moved, or deleted. Or the
     * object was changed after Macie created the finding.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithReasons(const Aws::Vector<UnavailabilityReasonCode>& value) { SetReasons(value); return *this;}

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>INVALID_CLASSIFICATION_RESULT -
     * Amazon Macie can't verify the location of the sensitive data to retrieve. There
     * isn't a corresponding sensitive data discovery result for the finding. Or the
     * sensitive data discovery result specified by the
     * ClassificationDetails.detailedResultsLocation field of the finding isn't
     * available, is malformed or corrupted, or uses an unsupported storage
     * format.</p></li> <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the
     * affected S3 object exceeds the size quota for retrieving occurrences of
     * sensitive data.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object
     * isn't available. The object might have been renamed, moved, or deleted. Or the
     * object was changed after Macie created the finding.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& WithReasons(Aws::Vector<UnavailabilityReasonCode>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>INVALID_CLASSIFICATION_RESULT -
     * Amazon Macie can't verify the location of the sensitive data to retrieve. There
     * isn't a corresponding sensitive data discovery result for the finding. Or the
     * sensitive data discovery result specified by the
     * ClassificationDetails.detailedResultsLocation field of the finding isn't
     * available, is malformed or corrupted, or uses an unsupported storage
     * format.</p></li> <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the
     * affected S3 object exceeds the size quota for retrieving occurrences of
     * sensitive data.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object
     * isn't available. The object might have been renamed, moved, or deleted. Or the
     * object was changed after Macie created the finding.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& AddReasons(const UnavailabilityReasonCode& value) { m_reasons.push_back(value); return *this; }

    /**
     * <p>Specifies why occurrences of sensitive data can't be retrieved for the
     * finding. Possible values are:</p> <ul><li><p>INVALID_CLASSIFICATION_RESULT -
     * Amazon Macie can't verify the location of the sensitive data to retrieve. There
     * isn't a corresponding sensitive data discovery result for the finding. Or the
     * sensitive data discovery result specified by the
     * ClassificationDetails.detailedResultsLocation field of the finding isn't
     * available, is malformed or corrupted, or uses an unsupported storage
     * format.</p></li> <li><p>OBJECT_EXCEEDS_SIZE_QUOTA - The storage size of the
     * affected S3 object exceeds the size quota for retrieving occurrences of
     * sensitive data.</p></li> <li><p>OBJECT_UNAVAILABLE - The affected S3 object
     * isn't available. The object might have been renamed, moved, or deleted. Or the
     * object was changed after Macie created the finding.</p></li>
     * <li><p>UNSUPPORTED_FINDING_TYPE - The specified finding isn't a sensitive data
     * finding.</p></li> <li><p>UNSUPPORTED_OBJECT_TYPE - The affected S3 object uses a
     * file or storage format that Macie doesn't support for retrieving occurrences of
     * sensitive data.</p></li></ul> <p>This value is null if sensitive data can be
     * retrieved for the finding.</p>
     */
    inline GetSensitiveDataOccurrencesAvailabilityResult& AddReasons(UnavailabilityReasonCode&& value) { m_reasons.push_back(std::move(value)); return *this; }

  private:

    AvailabilityCode m_code;

    Aws::Vector<UnavailabilityReasonCode> m_reasons;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
