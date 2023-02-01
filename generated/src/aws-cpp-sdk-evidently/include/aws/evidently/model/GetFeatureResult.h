/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Feature.h>
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
  class GetFeatureResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetFeatureResult();
    AWS_CLOUDWATCHEVIDENTLY_API GetFeatureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API GetFeatureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing the configuration details of the feature.</p>
     */
    inline const Feature& GetFeature() const{ return m_feature; }

    /**
     * <p>A structure containing the configuration details of the feature.</p>
     */
    inline void SetFeature(const Feature& value) { m_feature = value; }

    /**
     * <p>A structure containing the configuration details of the feature.</p>
     */
    inline void SetFeature(Feature&& value) { m_feature = std::move(value); }

    /**
     * <p>A structure containing the configuration details of the feature.</p>
     */
    inline GetFeatureResult& WithFeature(const Feature& value) { SetFeature(value); return *this;}

    /**
     * <p>A structure containing the configuration details of the feature.</p>
     */
    inline GetFeatureResult& WithFeature(Feature&& value) { SetFeature(std::move(value)); return *this;}

  private:

    Feature m_feature;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
