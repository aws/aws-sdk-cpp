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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MovClapAtom.h>
#include <aws/mediaconvert/model/MovCslgAtom.h>
#include <aws/mediaconvert/model/MovMpeg2FourCCControl.h>
#include <aws/mediaconvert/model/MovPaddingControl.h>
#include <aws/mediaconvert/model/MovReference.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for MOV Container.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MovSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MovSettings
  {
  public:
    MovSettings();
    MovSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    MovSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MovClapAtom& GetClapAtom() const{ return m_clapAtom; }

    
    inline void SetClapAtom(const MovClapAtom& value) { m_clapAtomHasBeenSet = true; m_clapAtom = value; }

    
    inline void SetClapAtom(MovClapAtom&& value) { m_clapAtomHasBeenSet = true; m_clapAtom = std::move(value); }

    
    inline MovSettings& WithClapAtom(const MovClapAtom& value) { SetClapAtom(value); return *this;}

    
    inline MovSettings& WithClapAtom(MovClapAtom&& value) { SetClapAtom(std::move(value)); return *this;}


    
    inline const MovCslgAtom& GetCslgAtom() const{ return m_cslgAtom; }

    
    inline void SetCslgAtom(const MovCslgAtom& value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = value; }

    
    inline void SetCslgAtom(MovCslgAtom&& value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = std::move(value); }

    
    inline MovSettings& WithCslgAtom(const MovCslgAtom& value) { SetCslgAtom(value); return *this;}

    
    inline MovSettings& WithCslgAtom(MovCslgAtom&& value) { SetCslgAtom(std::move(value)); return *this;}


    
    inline const MovMpeg2FourCCControl& GetMpeg2FourCCControl() const{ return m_mpeg2FourCCControl; }

    
    inline void SetMpeg2FourCCControl(const MovMpeg2FourCCControl& value) { m_mpeg2FourCCControlHasBeenSet = true; m_mpeg2FourCCControl = value; }

    
    inline void SetMpeg2FourCCControl(MovMpeg2FourCCControl&& value) { m_mpeg2FourCCControlHasBeenSet = true; m_mpeg2FourCCControl = std::move(value); }

    
    inline MovSettings& WithMpeg2FourCCControl(const MovMpeg2FourCCControl& value) { SetMpeg2FourCCControl(value); return *this;}

    
    inline MovSettings& WithMpeg2FourCCControl(MovMpeg2FourCCControl&& value) { SetMpeg2FourCCControl(std::move(value)); return *this;}


    
    inline const MovPaddingControl& GetPaddingControl() const{ return m_paddingControl; }

    
    inline void SetPaddingControl(const MovPaddingControl& value) { m_paddingControlHasBeenSet = true; m_paddingControl = value; }

    
    inline void SetPaddingControl(MovPaddingControl&& value) { m_paddingControlHasBeenSet = true; m_paddingControl = std::move(value); }

    
    inline MovSettings& WithPaddingControl(const MovPaddingControl& value) { SetPaddingControl(value); return *this;}

    
    inline MovSettings& WithPaddingControl(MovPaddingControl&& value) { SetPaddingControl(std::move(value)); return *this;}


    
    inline const MovReference& GetReference() const{ return m_reference; }

    
    inline void SetReference(const MovReference& value) { m_referenceHasBeenSet = true; m_reference = value; }

    
    inline void SetReference(MovReference&& value) { m_referenceHasBeenSet = true; m_reference = std::move(value); }

    
    inline MovSettings& WithReference(const MovReference& value) { SetReference(value); return *this;}

    
    inline MovSettings& WithReference(MovReference&& value) { SetReference(std::move(value)); return *this;}

  private:

    MovClapAtom m_clapAtom;
    bool m_clapAtomHasBeenSet;

    MovCslgAtom m_cslgAtom;
    bool m_cslgAtomHasBeenSet;

    MovMpeg2FourCCControl m_mpeg2FourCCControl;
    bool m_mpeg2FourCCControlHasBeenSet;

    MovPaddingControl m_paddingControl;
    bool m_paddingControlHasBeenSet;

    MovReference m_reference;
    bool m_referenceHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
