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
#include <aws/vitalservices/model/ClientDoctor.h>

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
  class AWS_VITALSERVICES_API searchForDoctorsResult
  {
  public:
    searchForDoctorsResult();
    searchForDoctorsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    searchForDoctorsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<ClientDoctor>& GetDoctors() const{ return m_doctors; }

    
    inline void SetDoctors(const Aws::Vector<ClientDoctor>& value) { m_doctors = value; }

    
    inline void SetDoctors(Aws::Vector<ClientDoctor>&& value) { m_doctors = value; }

    
    inline searchForDoctorsResult& WithDoctors(const Aws::Vector<ClientDoctor>& value) { SetDoctors(value); return *this;}

    
    inline searchForDoctorsResult& WithDoctors(Aws::Vector<ClientDoctor>&& value) { SetDoctors(value); return *this;}

    
    inline searchForDoctorsResult& AddDoctors(const ClientDoctor& value) { m_doctors.push_back(value); return *this; }

    
    inline searchForDoctorsResult& AddDoctors(ClientDoctor&& value) { m_doctors.push_back(value); return *this; }

  private:
    Aws::Vector<ClientDoctor> m_doctors;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
