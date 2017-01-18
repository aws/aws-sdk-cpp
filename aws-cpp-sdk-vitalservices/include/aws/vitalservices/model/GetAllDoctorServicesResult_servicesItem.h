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

  class AWS_VITALSERVICES_API GetAllDoctorServicesResult_servicesItem
  {
  public:
    GetAllDoctorServicesResult_servicesItem();
    GetAllDoctorServicesResult_servicesItem(const Aws::Utils::Json::JsonValue& jsonValue);
    GetAllDoctorServicesResult_servicesItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline GetAllDoctorServicesResult_servicesItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithName(const char* value) { SetName(value); return *this;}

    
    inline const Aws::String& GetIndefiniteArticle() const{ return m_indefiniteArticle; }

    
    inline void SetIndefiniteArticle(const Aws::String& value) { m_indefiniteArticleHasBeenSet = true; m_indefiniteArticle = value; }

    
    inline void SetIndefiniteArticle(Aws::String&& value) { m_indefiniteArticleHasBeenSet = true; m_indefiniteArticle = value; }

    
    inline void SetIndefiniteArticle(const char* value) { m_indefiniteArticleHasBeenSet = true; m_indefiniteArticle.assign(value); }

    
    inline GetAllDoctorServicesResult_servicesItem& WithIndefiniteArticle(const Aws::String& value) { SetIndefiniteArticle(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithIndefiniteArticle(Aws::String&& value) { SetIndefiniteArticle(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithIndefiniteArticle(const char* value) { SetIndefiniteArticle(value); return *this;}

    
    inline const Aws::String& GetAdditionalDescription() const{ return m_additionalDescription; }

    
    inline void SetAdditionalDescription(const Aws::String& value) { m_additionalDescriptionHasBeenSet = true; m_additionalDescription = value; }

    
    inline void SetAdditionalDescription(Aws::String&& value) { m_additionalDescriptionHasBeenSet = true; m_additionalDescription = value; }

    
    inline void SetAdditionalDescription(const char* value) { m_additionalDescriptionHasBeenSet = true; m_additionalDescription.assign(value); }

    
    inline GetAllDoctorServicesResult_servicesItem& WithAdditionalDescription(const Aws::String& value) { SetAdditionalDescription(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithAdditionalDescription(Aws::String&& value) { SetAdditionalDescription(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithAdditionalDescription(const char* value) { SetAdditionalDescription(value); return *this;}

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline GetAllDoctorServicesResult_servicesItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline GetAllDoctorServicesResult_servicesItem& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_indefiniteArticle;
    bool m_indefiniteArticleHasBeenSet;
    Aws::String m_additionalDescription;
    bool m_additionalDescriptionHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
