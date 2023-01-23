/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/Detection.h>
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
  class ListResourceProfileDetectionsResult
  {
  public:
    AWS_MACIE2_API ListResourceProfileDetectionsResult();
    AWS_MACIE2_API ListResourceProfileDetectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListResourceProfileDetectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline const Aws::Vector<Detection>& GetDetections() const{ return m_detections; }

    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline void SetDetections(const Aws::Vector<Detection>& value) { m_detections = value; }

    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline void SetDetections(Aws::Vector<Detection>&& value) { m_detections = std::move(value); }

    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline ListResourceProfileDetectionsResult& WithDetections(const Aws::Vector<Detection>& value) { SetDetections(value); return *this;}

    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline ListResourceProfileDetectionsResult& WithDetections(Aws::Vector<Detection>&& value) { SetDetections(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline ListResourceProfileDetectionsResult& AddDetections(const Detection& value) { m_detections.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline ListResourceProfileDetectionsResult& AddDetections(Detection&& value) { m_detections.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListResourceProfileDetectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListResourceProfileDetectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListResourceProfileDetectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Detection> m_detections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
