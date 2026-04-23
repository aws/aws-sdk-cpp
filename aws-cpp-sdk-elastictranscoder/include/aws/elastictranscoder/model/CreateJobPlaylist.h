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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/HlsContentProtection.h>
#include <aws/elastictranscoder/model/PlayReadyDrm.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Information about the master playlist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreateJobPlaylist">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API CreateJobPlaylist
  {
  public:
    CreateJobPlaylist();
    CreateJobPlaylist(Aws::Utils::Json::JsonView jsonValue);
    CreateJobPlaylist& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline CreateJobPlaylist& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline CreateJobPlaylist& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p> <note> <p> Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> </note>
     */
    inline CreateJobPlaylist& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline CreateJobPlaylist& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline CreateJobPlaylist& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline CreateJobPlaylist& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputKeys() const{ return m_outputKeys; }

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline bool OutputKeysHasBeenSet() const { return m_outputKeysHasBeenSet; }

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline void SetOutputKeys(const Aws::Vector<Aws::String>& value) { m_outputKeysHasBeenSet = true; m_outputKeys = value; }

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline void SetOutputKeys(Aws::Vector<Aws::String>&& value) { m_outputKeysHasBeenSet = true; m_outputKeys = std::move(value); }

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline CreateJobPlaylist& WithOutputKeys(const Aws::Vector<Aws::String>& value) { SetOutputKeys(value); return *this;}

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline CreateJobPlaylist& WithOutputKeys(Aws::Vector<Aws::String>&& value) { SetOutputKeys(std::move(value)); return *this;}

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline CreateJobPlaylist& AddOutputKeys(const Aws::String& value) { m_outputKeysHasBeenSet = true; m_outputKeys.push_back(value); return *this; }

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline CreateJobPlaylist& AddOutputKeys(Aws::String&& value) { m_outputKeysHasBeenSet = true; m_outputKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the <code>Outputs:Key</code> object. </p> <ul> <li> <p>If your
     * output is not <code>HLS</code> or does not have a segment duration set, the name
     * of the output file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline CreateJobPlaylist& AddOutputKeys(const char* value) { m_outputKeysHasBeenSet = true; m_outputKeys.push_back(value); return *this; }


    /**
     * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
     * to apply to the output files associated with this playlist.</p>
     */
    inline const HlsContentProtection& GetHlsContentProtection() const{ return m_hlsContentProtection; }

    /**
     * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
     * to apply to the output files associated with this playlist.</p>
     */
    inline bool HlsContentProtectionHasBeenSet() const { return m_hlsContentProtectionHasBeenSet; }

    /**
     * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
     * to apply to the output files associated with this playlist.</p>
     */
    inline void SetHlsContentProtection(const HlsContentProtection& value) { m_hlsContentProtectionHasBeenSet = true; m_hlsContentProtection = value; }

    /**
     * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
     * to apply to the output files associated with this playlist.</p>
     */
    inline void SetHlsContentProtection(HlsContentProtection&& value) { m_hlsContentProtectionHasBeenSet = true; m_hlsContentProtection = std::move(value); }

    /**
     * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
     * to apply to the output files associated with this playlist.</p>
     */
    inline CreateJobPlaylist& WithHlsContentProtection(const HlsContentProtection& value) { SetHlsContentProtection(value); return *this;}

    /**
     * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
     * to apply to the output files associated with this playlist.</p>
     */
    inline CreateJobPlaylist& WithHlsContentProtection(HlsContentProtection&& value) { SetHlsContentProtection(std::move(value)); return *this;}


    /**
     * <p>The DRM settings, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline const PlayReadyDrm& GetPlayReadyDrm() const{ return m_playReadyDrm; }

    /**
     * <p>The DRM settings, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline bool PlayReadyDrmHasBeenSet() const { return m_playReadyDrmHasBeenSet; }

    /**
     * <p>The DRM settings, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline void SetPlayReadyDrm(const PlayReadyDrm& value) { m_playReadyDrmHasBeenSet = true; m_playReadyDrm = value; }

    /**
     * <p>The DRM settings, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline void SetPlayReadyDrm(PlayReadyDrm&& value) { m_playReadyDrmHasBeenSet = true; m_playReadyDrm = std::move(value); }

    /**
     * <p>The DRM settings, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline CreateJobPlaylist& WithPlayReadyDrm(const PlayReadyDrm& value) { SetPlayReadyDrm(value); return *this;}

    /**
     * <p>The DRM settings, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline CreateJobPlaylist& WithPlayReadyDrm(PlayReadyDrm&& value) { SetPlayReadyDrm(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_format;
    bool m_formatHasBeenSet;

    Aws::Vector<Aws::String> m_outputKeys;
    bool m_outputKeysHasBeenSet;

    HlsContentProtection m_hlsContentProtection;
    bool m_hlsContentProtectionHasBeenSet;

    PlayReadyDrm m_playReadyDrm;
    bool m_playReadyDrmHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
