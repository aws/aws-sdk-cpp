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
#include <aws/mediaconvert/model/DeinterlaceAlgorithm.h>
#include <aws/mediaconvert/model/DeinterlacerControl.h>
#include <aws/mediaconvert/model/DeinterlacerMode.h>
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
   * Settings for deinterlacer<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Deinterlacer">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Deinterlacer
  {
  public:
    Deinterlacer();
    Deinterlacer(const Aws::Utils::Json::JsonValue& jsonValue);
    Deinterlacer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DeinterlaceAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    
    inline void SetAlgorithm(const DeinterlaceAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    
    inline void SetAlgorithm(DeinterlaceAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    
    inline Deinterlacer& WithAlgorithm(const DeinterlaceAlgorithm& value) { SetAlgorithm(value); return *this;}

    
    inline Deinterlacer& WithAlgorithm(DeinterlaceAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    
    inline const DeinterlacerControl& GetControl() const{ return m_control; }

    
    inline void SetControl(const DeinterlacerControl& value) { m_controlHasBeenSet = true; m_control = value; }

    
    inline void SetControl(DeinterlacerControl&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }

    
    inline Deinterlacer& WithControl(const DeinterlacerControl& value) { SetControl(value); return *this;}

    
    inline Deinterlacer& WithControl(DeinterlacerControl&& value) { SetControl(std::move(value)); return *this;}


    
    inline const DeinterlacerMode& GetMode() const{ return m_mode; }

    
    inline void SetMode(const DeinterlacerMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    
    inline void SetMode(DeinterlacerMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    
    inline Deinterlacer& WithMode(const DeinterlacerMode& value) { SetMode(value); return *this;}

    
    inline Deinterlacer& WithMode(DeinterlacerMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    DeinterlaceAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet;

    DeinterlacerControl m_control;
    bool m_controlHasBeenSet;

    DeinterlacerMode m_mode;
    bool m_modeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
