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
  class AWS_VITALSERVICES_API urlForFileRequest : public VitalServicesRequest
  {
  public:
    urlForFileRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    
    inline urlForFileRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    
    inline urlForFileRequest& WithFileName(Aws::String&& value) { SetFileName(value); return *this;}

    
    inline urlForFileRequest& WithFileName(const char* value) { SetFileName(value); return *this;}

    
    inline const Aws::String& GetPatientId() const{ return m_patientId; }

    
    inline void SetPatientId(const Aws::String& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(Aws::String&& value) { m_patientIdHasBeenSet = true; m_patientId = value; }

    
    inline void SetPatientId(const char* value) { m_patientIdHasBeenSet = true; m_patientId.assign(value); }

    
    inline urlForFileRequest& WithPatientId(const Aws::String& value) { SetPatientId(value); return *this;}

    
    inline urlForFileRequest& WithPatientId(Aws::String&& value) { SetPatientId(value); return *this;}

    
    inline urlForFileRequest& WithPatientId(const char* value) { SetPatientId(value); return *this;}

    
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    
    inline urlForFileRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    
    inline urlForFileRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    
    inline urlForFileRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    
    inline const Aws::String& GetDoctorId() const{ return m_doctorId; }

    
    inline void SetDoctorId(const Aws::String& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(Aws::String&& value) { m_doctorIdHasBeenSet = true; m_doctorId = value; }

    
    inline void SetDoctorId(const char* value) { m_doctorIdHasBeenSet = true; m_doctorId.assign(value); }

    
    inline urlForFileRequest& WithDoctorId(const Aws::String& value) { SetDoctorId(value); return *this;}

    
    inline urlForFileRequest& WithDoctorId(Aws::String&& value) { SetDoctorId(value); return *this;}

    
    inline urlForFileRequest& WithDoctorId(const char* value) { SetDoctorId(value); return *this;}

  private:
    Aws::String m_fileName;
    bool m_fileNameHasBeenSet;
    Aws::String m_patientId;
    bool m_patientIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_doctorId;
    bool m_doctorIdHasBeenSet;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
