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
#include <aws/vitalservices/VitalServicesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VitalServices
{
namespace Model
{

  /**
   */
  class AWS_VITALSERVICES_API getDoctorsRequest : public VitalServicesRequest
  {
  public:
    getDoctorsRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::Vector<Aws::String>& GetDoctorIds() const{ return m_doctorIds; }

    
    inline void SetDoctorIds(const Aws::Vector<Aws::String>& value) { m_doctorIdsHasBeenSet = true; m_doctorIds = value; }

    
    inline void SetDoctorIds(Aws::Vector<Aws::String>&& value) { m_doctorIdsHasBeenSet = true; m_doctorIds = value; }

    
    inline getDoctorsRequest& WithDoctorIds(const Aws::Vector<Aws::String>& value) { SetDoctorIds(value); return *this;}

    
    inline getDoctorsRequest& WithDoctorIds(Aws::Vector<Aws::String>&& value) { SetDoctorIds(value); return *this;}

    
    inline getDoctorsRequest& AddDoctorIds(const Aws::String& value) { m_doctorIdsHasBeenSet = true; m_doctorIds.push_back(value); return *this; }

    
    inline getDoctorsRequest& AddDoctorIds(Aws::String&& value) { m_doctorIdsHasBeenSet = true; m_doctorIds.push_back(value); return *this; }

    
    inline getDoctorsRequest& AddDoctorIds(const char* value) { m_doctorIdsHasBeenSet = true; m_doctorIds.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_doctorIds;
    bool m_doctorIdsHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
