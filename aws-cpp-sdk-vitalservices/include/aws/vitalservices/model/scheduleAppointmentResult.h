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
  class AWS_VITALSERVICES_API scheduleAppointmentResult
  {
  public:
    scheduleAppointmentResult();
    scheduleAppointmentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    scheduleAppointmentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline bool GetSucceeded() const{ return m_succeeded; }

    
    inline void SetSucceeded(bool value) { m_succeeded = value; }

    
    inline scheduleAppointmentResult& WithSucceeded(bool value) { SetSucceeded(value); return *this;}

  private:
    bool m_succeeded;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
