﻿/*
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
#include <aws/mediaconvert/model/Preset.h>
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
namespace MediaConvert
{
namespace Model
{
  class AWS_MEDIACONVERT_API GetPresetResult
  {
  public:
    GetPresetResult();
    GetPresetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPresetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Preset& GetPreset() const{ return m_preset; }

    
    inline void SetPreset(const Preset& value) { m_preset = value; }

    
    inline void SetPreset(Preset&& value) { m_preset = std::move(value); }

    
    inline GetPresetResult& WithPreset(const Preset& value) { SetPreset(value); return *this;}

    
    inline GetPresetResult& WithPreset(Preset&& value) { SetPreset(std::move(value)); return *this;}

  private:

    Preset m_preset;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
