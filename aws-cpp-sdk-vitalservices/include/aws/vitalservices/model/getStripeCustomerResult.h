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
  class AWS_VITALSERVICES_API getStripeCustomerResult
  {
  public:
    getStripeCustomerResult();
    getStripeCustomerResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    getStripeCustomerResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetJsonString() const{ return m_jsonString; }

    
    inline void SetJsonString(const Aws::String& value) { m_jsonString = value; }

    
    inline void SetJsonString(Aws::String&& value) { m_jsonString = value; }

    
    inline void SetJsonString(const char* value) { m_jsonString.assign(value); }

    
    inline getStripeCustomerResult& WithJsonString(const Aws::String& value) { SetJsonString(value); return *this;}

    
    inline getStripeCustomerResult& WithJsonString(Aws::String&& value) { SetJsonString(value); return *this;}

    
    inline getStripeCustomerResult& WithJsonString(const char* value) { SetJsonString(value); return *this;}

  private:
    Aws::String m_jsonString;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
