/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/macie2/model/RevealRequestStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/DetectedDataDetails.h>
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
  class GetSensitiveDataOccurrencesResult
  {
  public:
    AWS_MACIE2_API GetSensitiveDataOccurrencesResult();
    AWS_MACIE2_API GetSensitiveDataOccurrencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetSensitiveDataOccurrencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline void SetError(const Aws::String& value) { m_error = value; }

    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }

    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline void SetError(const char* value) { m_error.assign(value); }

    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline GetSensitiveDataOccurrencesResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline GetSensitiveDataOccurrencesResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline GetSensitiveDataOccurrencesResult& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>& GetSensitiveDataOccurrences() const{ return m_sensitiveDataOccurrences; }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline void SetSensitiveDataOccurrences(const Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>& value) { m_sensitiveDataOccurrences = value; }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline void SetSensitiveDataOccurrences(Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>&& value) { m_sensitiveDataOccurrences = std::move(value); }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& WithSensitiveDataOccurrences(const Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>& value) { SetSensitiveDataOccurrences(value); return *this;}

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& WithSensitiveDataOccurrences(Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>&& value) { SetSensitiveDataOccurrences(std::move(value)); return *this;}

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& AddSensitiveDataOccurrences(const Aws::String& key, const Aws::Vector<DetectedDataDetails>& value) { m_sensitiveDataOccurrences.emplace(key, value); return *this; }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& AddSensitiveDataOccurrences(Aws::String&& key, const Aws::Vector<DetectedDataDetails>& value) { m_sensitiveDataOccurrences.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& AddSensitiveDataOccurrences(const Aws::String& key, Aws::Vector<DetectedDataDetails>&& value) { m_sensitiveDataOccurrences.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& AddSensitiveDataOccurrences(Aws::String&& key, Aws::Vector<DetectedDataDetails>&& value) { m_sensitiveDataOccurrences.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& AddSensitiveDataOccurrences(const char* key, Aws::Vector<DetectedDataDetails>&& value) { m_sensitiveDataOccurrences.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline GetSensitiveDataOccurrencesResult& AddSensitiveDataOccurrences(const char* key, const Aws::Vector<DetectedDataDetails>& value) { m_sensitiveDataOccurrences.emplace(key, value); return *this; }


    /**
     * <p>The status of the request to retrieve occurrences of sensitive data reported
     * by the finding. Possible values are:</p> <ul><li><p>ERROR - An error occurred
     * when Amazon Macie attempted to locate, retrieve, or encrypt the sensitive data.
     * The error value indicates the nature of the error that occurred.</p></li>
     * <li><p>PROCESSING - Macie is processing the request.</p></li> <li><p>SUCCESS -
     * Macie successfully located, retrieved, and encrypted the sensitive
     * data.</p></li></ul>
     */
    inline const RevealRequestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the request to retrieve occurrences of sensitive data reported
     * by the finding. Possible values are:</p> <ul><li><p>ERROR - An error occurred
     * when Amazon Macie attempted to locate, retrieve, or encrypt the sensitive data.
     * The error value indicates the nature of the error that occurred.</p></li>
     * <li><p>PROCESSING - Macie is processing the request.</p></li> <li><p>SUCCESS -
     * Macie successfully located, retrieved, and encrypted the sensitive
     * data.</p></li></ul>
     */
    inline void SetStatus(const RevealRequestStatus& value) { m_status = value; }

    /**
     * <p>The status of the request to retrieve occurrences of sensitive data reported
     * by the finding. Possible values are:</p> <ul><li><p>ERROR - An error occurred
     * when Amazon Macie attempted to locate, retrieve, or encrypt the sensitive data.
     * The error value indicates the nature of the error that occurred.</p></li>
     * <li><p>PROCESSING - Macie is processing the request.</p></li> <li><p>SUCCESS -
     * Macie successfully located, retrieved, and encrypted the sensitive
     * data.</p></li></ul>
     */
    inline void SetStatus(RevealRequestStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the request to retrieve occurrences of sensitive data reported
     * by the finding. Possible values are:</p> <ul><li><p>ERROR - An error occurred
     * when Amazon Macie attempted to locate, retrieve, or encrypt the sensitive data.
     * The error value indicates the nature of the error that occurred.</p></li>
     * <li><p>PROCESSING - Macie is processing the request.</p></li> <li><p>SUCCESS -
     * Macie successfully located, retrieved, and encrypted the sensitive
     * data.</p></li></ul>
     */
    inline GetSensitiveDataOccurrencesResult& WithStatus(const RevealRequestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the request to retrieve occurrences of sensitive data reported
     * by the finding. Possible values are:</p> <ul><li><p>ERROR - An error occurred
     * when Amazon Macie attempted to locate, retrieve, or encrypt the sensitive data.
     * The error value indicates the nature of the error that occurred.</p></li>
     * <li><p>PROCESSING - Macie is processing the request.</p></li> <li><p>SUCCESS -
     * Macie successfully located, retrieved, and encrypted the sensitive
     * data.</p></li></ul>
     */
    inline GetSensitiveDataOccurrencesResult& WithStatus(RevealRequestStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_error;

    Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>> m_sensitiveDataOccurrences;

    RevealRequestStatus m_status;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
