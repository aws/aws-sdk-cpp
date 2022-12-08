/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
   * <p>The <code>ReadPresetResponse</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPresetResponse">AWS
   * API Reference</a></p>
   */
  class ReadPresetResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ReadPresetResult();
    AWS_ELASTICTRANSCODER_API ReadPresetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ReadPresetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A section of the response body that provides information about the
     * preset.</p>
     */
    inline const Preset& GetPreset() const{ return m_preset; }

    /**
     * <p>A section of the response body that provides information about the
     * preset.</p>
     */
    inline void SetPreset(const Preset& value) { m_preset = value; }

    /**
     * <p>A section of the response body that provides information about the
     * preset.</p>
     */
    inline void SetPreset(Preset&& value) { m_preset = std::move(value); }

    /**
     * <p>A section of the response body that provides information about the
     * preset.</p>
     */
    inline ReadPresetResult& WithPreset(const Preset& value) { SetPreset(value); return *this;}

    /**
     * <p>A section of the response body that provides information about the
     * preset.</p>
     */
    inline ReadPresetResult& WithPreset(Preset&& value) { SetPreset(std::move(value)); return *this;}

  private:

    Preset m_preset;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
