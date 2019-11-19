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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceType.h>
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
namespace ConfigService
{
namespace Model
{

  class AWS_CONFIGSERVICE_API ConformancePackComplianceSummary
  {
  public:
    ConformancePackComplianceSummary();
    ConformancePackComplianceSummary(Aws::Utils::Json::JsonView jsonValue);
    ConformancePackComplianceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    
    inline ConformancePackComplianceSummary& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    
    inline ConformancePackComplianceSummary& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    
    inline ConformancePackComplianceSummary& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    
    inline const ConformancePackComplianceType& GetConformancePackComplianceStatus() const{ return m_conformancePackComplianceStatus; }

    
    inline bool ConformancePackComplianceStatusHasBeenSet() const { return m_conformancePackComplianceStatusHasBeenSet; }

    
    inline void SetConformancePackComplianceStatus(const ConformancePackComplianceType& value) { m_conformancePackComplianceStatusHasBeenSet = true; m_conformancePackComplianceStatus = value; }

    
    inline void SetConformancePackComplianceStatus(ConformancePackComplianceType&& value) { m_conformancePackComplianceStatusHasBeenSet = true; m_conformancePackComplianceStatus = std::move(value); }

    
    inline ConformancePackComplianceSummary& WithConformancePackComplianceStatus(const ConformancePackComplianceType& value) { SetConformancePackComplianceStatus(value); return *this;}

    
    inline ConformancePackComplianceSummary& WithConformancePackComplianceStatus(ConformancePackComplianceType&& value) { SetConformancePackComplianceStatus(std::move(value)); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet;

    ConformancePackComplianceType m_conformancePackComplianceStatus;
    bool m_conformancePackComplianceStatusHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
