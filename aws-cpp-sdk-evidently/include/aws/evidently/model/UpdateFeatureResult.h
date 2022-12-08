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
  class UpdateFeatureResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateFeatureResult();
    AWS_CLOUDWATCHEVIDENTLY_API UpdateFeatureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API UpdateFeatureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about the updated feature.</p>
     */
    inline const Feature& GetFeature() const{ return m_feature; }

    /**
     * <p>A structure that contains information about the updated feature.</p>
     */
    inline void SetFeature(const Feature& value) { m_feature = value; }

    /**
     * <p>A structure that contains information about the updated feature.</p>
     */
    inline void SetFeature(Feature&& value) { m_feature = std::move(value); }

    /**
     * <p>A structure that contains information about the updated feature.</p>
     */
    inline UpdateFeatureResult& WithFeature(const Feature& value) { SetFeature(value); return *this;}

    /**
     * <p>A structure that contains information about the updated feature.</p>
     */
    inline UpdateFeatureResult& WithFeature(Feature&& value) { SetFeature(std::move(value)); return *this;}

  private:

    Feature m_feature;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
