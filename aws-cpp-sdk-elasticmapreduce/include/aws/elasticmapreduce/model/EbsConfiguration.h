/*
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/EbsBlockDeviceConfig.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  class AWS_EMR_API EbsConfiguration
  {
  public:
    EbsConfiguration();
    EbsConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    EbsConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::Vector<EbsBlockDeviceConfig>& GetEbsBlockDeviceConfigs() const{ return m_ebsBlockDeviceConfigs; }

    
    inline void SetEbsBlockDeviceConfigs(const Aws::Vector<EbsBlockDeviceConfig>& value) { m_ebsBlockDeviceConfigsHasBeenSet = true; m_ebsBlockDeviceConfigs = value; }

    
    inline void SetEbsBlockDeviceConfigs(Aws::Vector<EbsBlockDeviceConfig>&& value) { m_ebsBlockDeviceConfigsHasBeenSet = true; m_ebsBlockDeviceConfigs = value; }

    
    inline EbsConfiguration& WithEbsBlockDeviceConfigs(const Aws::Vector<EbsBlockDeviceConfig>& value) { SetEbsBlockDeviceConfigs(value); return *this;}

    
    inline EbsConfiguration& WithEbsBlockDeviceConfigs(Aws::Vector<EbsBlockDeviceConfig>&& value) { SetEbsBlockDeviceConfigs(value); return *this;}

    
    inline EbsConfiguration& AddEbsBlockDeviceConfigs(const EbsBlockDeviceConfig& value) { m_ebsBlockDeviceConfigsHasBeenSet = true; m_ebsBlockDeviceConfigs.push_back(value); return *this; }

    
    inline EbsConfiguration& AddEbsBlockDeviceConfigs(EbsBlockDeviceConfig&& value) { m_ebsBlockDeviceConfigsHasBeenSet = true; m_ebsBlockDeviceConfigs.push_back(value); return *this; }

    
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    
    inline EbsConfiguration& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}

  private:
    Aws::Vector<EbsBlockDeviceConfig> m_ebsBlockDeviceConfigs;
    bool m_ebsBlockDeviceConfigsHasBeenSet;
    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
