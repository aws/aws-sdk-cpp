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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vitalservices/model/GetDoctorSpecialtiesResult_specialtiesItem.h>

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
namespace VitalServices
{
namespace Model
{
  class AWS_VITALSERVICES_API getDoctorSpecialtiesResult
  {
  public:
    getDoctorSpecialtiesResult();
    getDoctorSpecialtiesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    getDoctorSpecialtiesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<GetDoctorSpecialtiesResult_specialtiesItem>& GetSpecialties() const{ return m_specialties; }

    
    inline void SetSpecialties(const Aws::Vector<GetDoctorSpecialtiesResult_specialtiesItem>& value) { m_specialties = value; }

    
    inline void SetSpecialties(Aws::Vector<GetDoctorSpecialtiesResult_specialtiesItem>&& value) { m_specialties = value; }

    
    inline getDoctorSpecialtiesResult& WithSpecialties(const Aws::Vector<GetDoctorSpecialtiesResult_specialtiesItem>& value) { SetSpecialties(value); return *this;}

    
    inline getDoctorSpecialtiesResult& WithSpecialties(Aws::Vector<GetDoctorSpecialtiesResult_specialtiesItem>&& value) { SetSpecialties(value); return *this;}

    
    inline getDoctorSpecialtiesResult& AddSpecialties(const GetDoctorSpecialtiesResult_specialtiesItem& value) { m_specialties.push_back(value); return *this; }

    
    inline getDoctorSpecialtiesResult& AddSpecialties(GetDoctorSpecialtiesResult_specialtiesItem&& value) { m_specialties.push_back(value); return *this; }

  private:
    Aws::Vector<GetDoctorSpecialtiesResult_specialtiesItem> m_specialties;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
