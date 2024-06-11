﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListPresetsResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ListPresetsResult();
    AWS_ELASTICTRANSCODER_API ListPresetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ListPresetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Preset</code> objects.</p>
     */
    inline const Aws::Vector<Preset>& GetPresets() const{ return m_presets; }
    inline void SetPresets(const Aws::Vector<Preset>& value) { m_presets = value; }
    inline void SetPresets(Aws::Vector<Preset>&& value) { m_presets = std::move(value); }
    inline ListPresetsResult& WithPresets(const Aws::Vector<Preset>& value) { SetPresets(value); return *this;}
    inline ListPresetsResult& WithPresets(Aws::Vector<Preset>&& value) { SetPresets(std::move(value)); return *this;}
    inline ListPresetsResult& AddPresets(const Preset& value) { m_presets.push_back(value); return *this; }
    inline ListPresetsResult& AddPresets(Preset&& value) { m_presets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the presets fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListPresetsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListPresetsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListPresetsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPresetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPresetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPresetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Preset> m_presets;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
