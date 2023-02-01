/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/FeatureSummary.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class ListFeaturesResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListFeaturesResult();
    AWS_CLOUDWATCHEVIDENTLY_API ListFeaturesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListFeaturesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline const Aws::Vector<FeatureSummary>& GetFeatures() const{ return m_features; }

    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline void SetFeatures(const Aws::Vector<FeatureSummary>& value) { m_features = value; }

    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline void SetFeatures(Aws::Vector<FeatureSummary>&& value) { m_features = std::move(value); }

    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline ListFeaturesResult& WithFeatures(const Aws::Vector<FeatureSummary>& value) { SetFeatures(value); return *this;}

    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline ListFeaturesResult& WithFeatures(Aws::Vector<FeatureSummary>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline ListFeaturesResult& AddFeatures(const FeatureSummary& value) { m_features.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline ListFeaturesResult& AddFeatures(FeatureSummary&& value) { m_features.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline ListFeaturesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline ListFeaturesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline ListFeaturesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FeatureSummary> m_features;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
