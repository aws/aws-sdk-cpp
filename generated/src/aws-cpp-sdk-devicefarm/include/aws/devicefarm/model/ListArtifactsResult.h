/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Artifact.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list artifacts operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifactsResult">AWS
   * API Reference</a></p>
   */
  class ListArtifactsResult
  {
  public:
    AWS_DEVICEFARM_API ListArtifactsResult();
    AWS_DEVICEFARM_API ListArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the artifacts.</p>
     */
    inline const Aws::Vector<Artifact>& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>Information about the artifacts.</p>
     */
    inline void SetArtifacts(const Aws::Vector<Artifact>& value) { m_artifacts = value; }

    /**
     * <p>Information about the artifacts.</p>
     */
    inline void SetArtifacts(Aws::Vector<Artifact>&& value) { m_artifacts = std::move(value); }

    /**
     * <p>Information about the artifacts.</p>
     */
    inline ListArtifactsResult& WithArtifacts(const Aws::Vector<Artifact>& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the artifacts.</p>
     */
    inline ListArtifactsResult& WithArtifacts(Aws::Vector<Artifact>&& value) { SetArtifacts(std::move(value)); return *this;}

    /**
     * <p>Information about the artifacts.</p>
     */
    inline ListArtifactsResult& AddArtifacts(const Artifact& value) { m_artifacts.push_back(value); return *this; }

    /**
     * <p>Information about the artifacts.</p>
     */
    inline ListArtifactsResult& AddArtifacts(Artifact&& value) { m_artifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListArtifactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListArtifactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListArtifactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Artifact> m_artifacts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
