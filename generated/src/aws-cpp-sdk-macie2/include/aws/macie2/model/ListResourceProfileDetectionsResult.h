﻿/**
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


    ///@{
    /**
     * <p>An array of objects, one for each type of sensitive data that Amazon Macie
     * found in the bucket. Each object reports the number of occurrences of the
     * specified type and provides information about the custom data identifier or
     * managed data identifier that detected the data.</p>
     */
    inline const Aws::Vector<Detection>& GetDetections() const{ return m_detections; }
    inline void SetDetections(const Aws::Vector<Detection>& value) { m_detections = value; }
    inline void SetDetections(Aws::Vector<Detection>&& value) { m_detections = std::move(value); }
    inline ListResourceProfileDetectionsResult& WithDetections(const Aws::Vector<Detection>& value) { SetDetections(value); return *this;}
    inline ListResourceProfileDetectionsResult& WithDetections(Aws::Vector<Detection>&& value) { SetDetections(std::move(value)); return *this;}
    inline ListResourceProfileDetectionsResult& AddDetections(const Detection& value) { m_detections.push_back(value); return *this; }
    inline ListResourceProfileDetectionsResult& AddDetections(Detection&& value) { m_detections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourceProfileDetectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourceProfileDetectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourceProfileDetectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourceProfileDetectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourceProfileDetectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourceProfileDetectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Detection> m_detections;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
