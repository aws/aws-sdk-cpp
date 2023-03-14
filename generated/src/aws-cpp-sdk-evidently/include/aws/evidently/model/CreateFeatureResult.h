/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Feature.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateFeatureResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateFeatureResult();
    AWS_CLOUDWATCHEVIDENTLY_API CreateFeatureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API CreateFeatureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about the new feature.</p>
     */
    inline const Feature& GetFeature() const{ return m_feature; }

    /**
     * <p>A structure that contains information about the new feature.</p>
     */
    inline void SetFeature(const Feature& value) { m_feature = value; }

    /**
     * <p>A structure that contains information about the new feature.</p>
     */
    inline void SetFeature(Feature&& value) { m_feature = std::move(value); }

    /**
     * <p>A structure that contains information about the new feature.</p>
     */
    inline CreateFeatureResult& WithFeature(const Feature& value) { SetFeature(value); return *this;}

    /**
     * <p>A structure that contains information about the new feature.</p>
     */
    inline CreateFeatureResult& WithFeature(Feature&& value) { SetFeature(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFeatureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFeatureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFeatureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Feature m_feature;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
