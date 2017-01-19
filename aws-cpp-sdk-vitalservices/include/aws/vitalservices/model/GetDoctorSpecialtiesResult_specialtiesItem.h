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
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VitalServices
{
namespace Model
{

  class AWS_VITALSERVICES_API GetDoctorSpecialtiesResult_specialtiesItem
  {
  public:
    GetDoctorSpecialtiesResult_specialtiesItem();
    GetDoctorSpecialtiesResult_specialtiesItem(const Aws::Utils::Json::JsonValue& jsonValue);
    GetDoctorSpecialtiesResult_specialtiesItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline GetDoctorSpecialtiesResult_specialtiesItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline GetDoctorSpecialtiesResult_specialtiesItem& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline GetDoctorSpecialtiesResult_specialtiesItem& WithName(const char* value) { SetName(value); return *this;}

    
    inline bool GetIsCommon() const{ return m_isCommon; }

    
    inline void SetIsCommon(bool value) { m_isCommonHasBeenSet = true; m_isCommon = value; }

    
    inline GetDoctorSpecialtiesResult_specialtiesItem& WithIsCommon(bool value) { SetIsCommon(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline GetDoctorSpecialtiesResult_specialtiesItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline GetDoctorSpecialtiesResult_specialtiesItem& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline GetDoctorSpecialtiesResult_specialtiesItem& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    bool m_isCommon;
    bool m_isCommonHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
