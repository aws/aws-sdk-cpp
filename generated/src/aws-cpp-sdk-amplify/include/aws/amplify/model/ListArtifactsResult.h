/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Artifact.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the list artifacts request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListArtifactsResult">AWS
   * API Reference</a></p>
   */
  class ListArtifactsResult
  {
  public:
    AWS_AMPLIFY_API ListArtifactsResult();
    AWS_AMPLIFY_API ListArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of artifacts. </p>
     */
    inline const Aws::Vector<Artifact>& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p> A list of artifacts. </p>
     */
    inline void SetArtifacts(const Aws::Vector<Artifact>& value) { m_artifacts = value; }

    /**
     * <p> A list of artifacts. </p>
     */
    inline void SetArtifacts(Aws::Vector<Artifact>&& value) { m_artifacts = std::move(value); }

    /**
     * <p> A list of artifacts. </p>
     */
    inline ListArtifactsResult& WithArtifacts(const Aws::Vector<Artifact>& value) { SetArtifacts(value); return *this;}

    /**
     * <p> A list of artifacts. </p>
     */
    inline ListArtifactsResult& WithArtifacts(Aws::Vector<Artifact>&& value) { SetArtifacts(std::move(value)); return *this;}

    /**
     * <p> A list of artifacts. </p>
     */
    inline ListArtifactsResult& AddArtifacts(const Artifact& value) { m_artifacts.push_back(value); return *this; }

    /**
     * <p> A list of artifacts. </p>
     */
    inline ListArtifactsResult& AddArtifacts(Artifact&& value) { m_artifacts.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline ListArtifactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline ListArtifactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
     */
    inline ListArtifactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Artifact> m_artifacts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
