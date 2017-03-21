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
  class AWS_VITALSERVICES_API searchForDoctorsByNameRequest : public VitalServicesRequest
  {
  public:
    searchForDoctorsByNameRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    
    inline searchForDoctorsByNameRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    
    inline searchForDoctorsByNameRequest& WithSearchString(Aws::String&& value) { SetSearchString(value); return *this;}

    
    inline searchForDoctorsByNameRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}

  private:
    Aws::String m_searchString;
    bool m_searchStringHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
