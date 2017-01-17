﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Polly
{
namespace Model
{
  class AWS_POLLY_API SynthesizeSpeechResult
  {
  public:
    SynthesizeSpeechResult();
    //We have to define these because Microsoft doesn't auto generate them
    SynthesizeSpeechResult(SynthesizeSpeechResult&&);
    SynthesizeSpeechResult& operator=(SynthesizeSpeechResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    SynthesizeSpeechResult(const SynthesizeSpeechResult&) = delete;
    SynthesizeSpeechResult& operator=(const SynthesizeSpeechResult&) = delete;


    SynthesizeSpeechResult(AmazonWebServiceResult<Utils::Stream::ResponseStream>&& result);
    SynthesizeSpeechResult& operator=(AmazonWebServiceResult<Utils::Stream::ResponseStream>&& result);


    /**
     * <p> Stream containing the synthesized speech. </p>
     */
    inline Aws::IOStream& GetAudioStream() { return m_audioStream.GetUnderlyingStream(); }

    /**
     * <p> Stream containing the synthesized speech. </p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_audioStream = Aws::Utils::Stream::ResponseStream(body); }
    
    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm. </p> </li> </ul> <p> </p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm. </p> </li> </ul> <p> </p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm. </p> </li> </ul> <p> </p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = value; }

    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm. </p> </li> </ul> <p> </p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm. </p> </li> </ul> <p> </p>
     */
    inline SynthesizeSpeechResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm. </p> </li> </ul> <p> </p>
     */
    inline SynthesizeSpeechResult& WithContentType(Aws::String&& value) { SetContentType(value); return *this;}

    /**
     * <p> Specifies the type audio stream. This should reflect the
     * <code>OutputFormat</code> parameter in your request. </p> <ul> <li> <p> If you
     * request <code>mp3</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/mpeg. </p> </li> <li> <p> If you
     * request <code>ogg_vorbis</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/ogg. </p> </li> <li> <p> If you
     * request <code>pcm</code> as the <code>OutputFormat</code>, the
     * <code>ContentType</code> returned is audio/pcm. </p> </li> </ul> <p> </p>
     */
    inline SynthesizeSpeechResult& WithContentType(const char* value) { SetContentType(value); return *this;}

    /**
     * <p>Number of characters synthesized.</p>
     */
    inline int GetRequestCharacters() const{ return m_requestCharacters; }

    /**
     * <p>Number of characters synthesized.</p>
     */
    inline void SetRequestCharacters(int value) { m_requestCharacters = value; }

    /**
     * <p>Number of characters synthesized.</p>
     */
    inline SynthesizeSpeechResult& WithRequestCharacters(int value) { SetRequestCharacters(value); return *this;}

  private:
    Utils::Stream::ResponseStream m_audioStream;
    Aws::String m_contentType;
    int m_requestCharacters;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
