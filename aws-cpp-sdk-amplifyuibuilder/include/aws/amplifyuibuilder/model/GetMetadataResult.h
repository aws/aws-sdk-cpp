/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class GetMetadataResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API GetMetadataResult();
    AWS_AMPLIFYUIBUILDER_API GetMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API GetMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFeatures() const{ return m_features; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline void SetFeatures(const Aws::Map<Aws::String, Aws::String>& value) { m_features = value; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline void SetFeatures(Aws::Map<Aws::String, Aws::String>&& value) { m_features = std::move(value); }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& WithFeatures(const Aws::Map<Aws::String, Aws::String>& value) { SetFeatures(value); return *this;}

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& WithFeatures(Aws::Map<Aws::String, Aws::String>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& AddFeatures(const Aws::String& key, const Aws::String& value) { m_features.emplace(key, value); return *this; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& AddFeatures(Aws::String&& key, const Aws::String& value) { m_features.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& AddFeatures(const Aws::String& key, Aws::String&& value) { m_features.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& AddFeatures(Aws::String&& key, Aws::String&& value) { m_features.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& AddFeatures(const char* key, Aws::String&& value) { m_features.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& AddFeatures(Aws::String&& key, const char* value) { m_features.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the configuration settings for the features metadata.</p>
     */
    inline GetMetadataResult& AddFeatures(const char* key, const char* value) { m_features.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_features;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
