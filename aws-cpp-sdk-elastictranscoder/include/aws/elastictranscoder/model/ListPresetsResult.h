/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Preset.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>The <code>ListPresetsResponse</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPresetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API ListPresetsResult
  {
  public:
    ListPresetsResult();
    ListPresetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPresetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline const Aws::Vector<Preset>& GetPresets() const{ return m_presets; }

    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline void SetPresets(const Aws::Vector<Preset>& value) { m_presets = value; }

    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline void SetPresets(Aws::Vector<Preset>&& value) { m_presets = std::move(value); }

    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline ListPresetsResult& WithPresets(const Aws::Vector<Preset>& value) { SetPresets(value); return *this;}

    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline ListPresetsResult& WithPresets(Aws::Vector<Preset>&& value) { SetPresets(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline ListPresetsResult& AddPresets(const Preset& value) { m_presets.push_back(value); return *this; }

    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline ListPresetsResult& AddPresets(Preset&& value) { m_presets.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline ListPresetsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline ListPresetsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline ListPresetsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Preset> m_presets;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
