/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the status of a sensitive data
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ClassificationResultStatus">AWS
   * API Reference</a></p>
   */
  class ClassificationResultStatus
  {
  public:
    AWS_MACIE2_API ClassificationResultStatus();
    AWS_MACIE2_API ClassificationResultStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ClassificationResultStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline ClassificationResultStatus& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline ClassificationResultStatus& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The status of the finding. Possible values are:</p> <ul><li><p>COMPLETE -
     * Amazon Macie successfully completed its analysis of the S3 object that the
     * finding applies to.</p></li> <li><p>PARTIAL - Macie analyzed only a subset of
     * the data in the S3 object that the finding applies to. For example, the object
     * is an archive file that contains files in an unsupported format.</p></li>
     * <li><p>SKIPPED - Macie wasn't able to analyze the S3 object that the finding
     * applies to. For example, the object is a file that uses an unsupported
     * format.</p></li></ul>
     */
    inline ClassificationResultStatus& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline ClassificationResultStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline ClassificationResultStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A brief description of the status of the finding. This value is null if the
     * status (code) of the finding is COMPLETE.</p> <p>Amazon Macie uses this value to
     * notify you of any errors, warnings, or considerations that might impact your
     * analysis of the finding and the affected S3 object. Possible values are:</p>
     * <ul><li><p>ARCHIVE_CONTAINS_UNPROCESSED_FILES - The object is an archive file
     * and Macie extracted and analyzed only some or none of the files in the archive.
     * To determine which files Macie analyzed, if any, you can refer to the
     * corresponding sensitive data discovery result for the finding
     * (ClassificationDetails.detailedResultsLocation).</p></li>
     * <li><p>ARCHIVE_EXCEEDS_SIZE_LIMIT - The object is an archive file whose total
     * storage size exceeds the size quota for this type of archive.</p></li>
     * <li><p>ARCHIVE_NESTING_LEVEL_OVER_LIMIT - The object is an archive file whose
     * nested depth exceeds the quota for the maximum number of nested levels that
     * Macie analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_BYTES_EXTRACTED_OVER_LIMIT - The object is an archive file
     * that exceeds the quota for the maximum amount of data that Macie extracts and
     * analyzes for this type of archive.</p></li>
     * <li><p>ARCHIVE_TOTAL_DOCUMENTS_PROCESSED_OVER_LIMIT - The object is an archive
     * file that contains more than the maximum number of files that Macie extracts and
     * analyzes for this type of archive.</p></li> <li><p>FILE_EXCEEDS_SIZE_LIMIT - The
     * storage size of the object exceeds the size quota for this type of
     * file.</p></li> <li><p>INVALID_ENCRYPTION - The object is encrypted using
     * server-side encryption but Macie isn’t allowed to use the key. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_KMS_KEY - The object is
     * encrypted with an KMS key that was disabled or is being deleted. Macie can’t
     * decrypt and analyze the object.</p></li> <li><p>INVALID_OBJECT_STATE - The
     * object doesn’t use a supported Amazon S3 storage class. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/data-classification.html">Discovering
     * sensitive data</a> in the <i>Amazon Macie User Guide</i>.</p></li>
     * <li><p>JSON_NESTING_LEVEL_OVER_LIMIT - The object contains JSON data and the
     * nested depth of the data exceeds the quota for the number of nested levels that
     * Macie analyzes for this type of file.</p></li> <li><p>MALFORMED_FILE - The
     * object is a malformed or corrupted file. An error occurred when Macie attempted
     * to detect the file’s type or extract data from the file.</p></li>
     * <li><p>OBJECT_VERSION_MISMATCH - The object was changed while Macie was
     * analyzing it.</p></li> <li><p>NO_SUCH_BUCKET_AVAILABLE - The object was in a
     * bucket that was deleted shortly before or when Macie attempted to analyze the
     * object.</p></li> <li><p>MALFORMED_OR_FILE_SIZE_EXCEEDS_LIMIT - The object is a
     * Microsoft Office file that is malformed or exceeds the size quota for this type
     * of file. If the file is malformed, an error occurred when Macie attempted to
     * extract data from the file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_SIZE_EXCEEDS_LIMIT - The object is an Office Open XML
     * file that exceeds the size quota for this type of file.</p></li>
     * <li><p>OOXML_UNCOMPRESSED_RATIO_EXCEEDS_LIMIT - The object is an Office Open XML
     * file whose compression ratio exceeds the compression quota for this type of
     * file.</p></li> <li><p>PERMISSION_DENIED - Macie isn’t allowed to access the
     * object. The object’s permissions settings prevent Macie from analyzing the
     * object.</p></li> <li><p>SOURCE_OBJECT_NO_LONGER_AVAILABLE - The object was
     * deleted shortly before or when Macie attempted to analyze it.</p></li>
     * <li><p>UNABLE_TO_PARSE_FILE - The object is a file that contains structured data
     * and an error occurred when Macie attempted to parse the data.</p></li>
     * <li><p>UNSUPPORTED_FILE_TYPE_EXCEPTION - The object is a file that uses an
     * unsupported file or storage format. For more information, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-supported-formats.html">Supported
     * file and storage formats</a> in the <i>Amazon Macie User
     * Guide</i>.</p></li></ul> <p>For information about sensitive data discovery
     * quotas for files, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/macie-quotas.html">Amazon
     * Macie quotas</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline ClassificationResultStatus& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
