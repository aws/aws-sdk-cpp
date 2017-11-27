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
#include <aws/mediaconvert/model/F4vMoovPlacement.h>
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
   * Settings for F4v container<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/F4vSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API F4vSettings
  {
  public:
    F4vSettings();
    F4vSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    F4vSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const F4vMoovPlacement& GetMoovPlacement() const{ return m_moovPlacement; }

    
    inline void SetMoovPlacement(const F4vMoovPlacement& value) { m_moovPlacementHasBeenSet = true; m_moovPlacement = value; }

    
    inline void SetMoovPlacement(F4vMoovPlacement&& value) { m_moovPlacementHasBeenSet = true; m_moovPlacement = std::move(value); }

    
    inline F4vSettings& WithMoovPlacement(const F4vMoovPlacement& value) { SetMoovPlacement(value); return *this;}

    
    inline F4vSettings& WithMoovPlacement(F4vMoovPlacement&& value) { SetMoovPlacement(std::move(value)); return *this;}

  private:

    F4vMoovPlacement m_moovPlacement;
    bool m_moovPlacementHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
