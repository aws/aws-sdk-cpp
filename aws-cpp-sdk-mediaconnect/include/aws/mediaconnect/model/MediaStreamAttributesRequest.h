/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FmtpRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Attributes that are related to the media stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamAttributesRequest">AWS
   * API Reference</a></p>
   */
  class MediaStreamAttributesRequest
  {
  public:
    AWS_MEDIACONNECT_API MediaStreamAttributesRequest();
    AWS_MEDIACONNECT_API MediaStreamAttributesRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStreamAttributesRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The settings that you want to use to define the media stream.
     */
    inline const FmtpRequest& GetFmtp() const{ return m_fmtp; }

    /**
     * The settings that you want to use to define the media stream.
     */
    inline bool FmtpHasBeenSet() const { return m_fmtpHasBeenSet; }

    /**
     * The settings that you want to use to define the media stream.
     */
    inline void SetFmtp(const FmtpRequest& value) { m_fmtpHasBeenSet = true; m_fmtp = value; }

    /**
     * The settings that you want to use to define the media stream.
     */
    inline void SetFmtp(FmtpRequest&& value) { m_fmtpHasBeenSet = true; m_fmtp = std::move(value); }

    /**
     * The settings that you want to use to define the media stream.
     */
    inline MediaStreamAttributesRequest& WithFmtp(const FmtpRequest& value) { SetFmtp(value); return *this;}

    /**
     * The settings that you want to use to define the media stream.
     */
    inline MediaStreamAttributesRequest& WithFmtp(FmtpRequest&& value) { SetFmtp(std::move(value)); return *this;}


    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline const Aws::String& GetLang() const{ return m_lang; }

    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline bool LangHasBeenSet() const { return m_langHasBeenSet; }

    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline void SetLang(const Aws::String& value) { m_langHasBeenSet = true; m_lang = value; }

    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline void SetLang(Aws::String&& value) { m_langHasBeenSet = true; m_lang = std::move(value); }

    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline void SetLang(const char* value) { m_langHasBeenSet = true; m_lang.assign(value); }

    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline MediaStreamAttributesRequest& WithLang(const Aws::String& value) { SetLang(value); return *this;}

    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline MediaStreamAttributesRequest& WithLang(Aws::String&& value) { SetLang(std::move(value)); return *this;}

    /**
     * The audio language, in a format that is recognized by the receiver.
     */
    inline MediaStreamAttributesRequest& WithLang(const char* value) { SetLang(value); return *this;}

  private:

    FmtpRequest m_fmtp;
    bool m_fmtpHasBeenSet = false;

    Aws::String m_lang;
    bool m_langHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
