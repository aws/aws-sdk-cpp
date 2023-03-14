/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/ResourceProfileArtifact.h>
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
  class ListResourceProfileArtifactsResult
  {
  public:
    AWS_MACIE2_API ListResourceProfileArtifactsResult();
    AWS_MACIE2_API ListResourceProfileArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListResourceProfileArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline const Aws::Vector<ResourceProfileArtifact>& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline void SetArtifacts(const Aws::Vector<ResourceProfileArtifact>& value) { m_artifacts = value; }

    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline void SetArtifacts(Aws::Vector<ResourceProfileArtifact>&& value) { m_artifacts = std::move(value); }

    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline ListResourceProfileArtifactsResult& WithArtifacts(const Aws::Vector<ResourceProfileArtifact>& value) { SetArtifacts(value); return *this;}

    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline ListResourceProfileArtifactsResult& WithArtifacts(Aws::Vector<ResourceProfileArtifact>&& value) { SetArtifacts(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline ListResourceProfileArtifactsResult& AddArtifacts(const ResourceProfileArtifact& value) { m_artifacts.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each of 1-100 S3 objects that Amazon Macie
     * selected for analysis.</p> <p>If Macie has analyzed more than 100 objects in the
     * bucket, Macie populates the array based on the value for the
     * ResourceProfileArtifact.sensitive field for an object: true (sensitive),
     * followed by false (not sensitive). Macie then populates any remaining items in
     * the array with information about objects where the value for the
     * ResourceProfileArtifact.classificationResultStatus field is SKIPPED.</p>
     */
    inline ListResourceProfileArtifactsResult& AddArtifacts(ResourceProfileArtifact&& value) { m_artifacts.push_back(std::move(value)); return *this; }


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
    inline ListResourceProfileArtifactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListResourceProfileArtifactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListResourceProfileArtifactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListResourceProfileArtifactsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListResourceProfileArtifactsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListResourceProfileArtifactsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResourceProfileArtifact> m_artifacts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
