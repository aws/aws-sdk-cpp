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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VitalServices
{
namespace Model
{

  /**
   */
  class AWS_VITALSERVICES_API getAllDoctorServicesRequest : public VitalServicesRequest
  {
  public:
    getAllDoctorServicesRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetDummy() const{ return m_dummy; }

    
    inline void SetDummy(const Aws::String& value) { m_dummyHasBeenSet = true; m_dummy = value; }

    
    inline void SetDummy(Aws::String&& value) { m_dummyHasBeenSet = true; m_dummy = value; }

    
    inline void SetDummy(const char* value) { m_dummyHasBeenSet = true; m_dummy.assign(value); }

    
    inline getAllDoctorServicesRequest& WithDummy(const Aws::String& value) { SetDummy(value); return *this;}

    
    inline getAllDoctorServicesRequest& WithDummy(Aws::String&& value) { SetDummy(value); return *this;}

    
    inline getAllDoctorServicesRequest& WithDummy(const char* value) { SetDummy(value); return *this;}

  private:
    Aws::String m_dummy;
    bool m_dummyHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
