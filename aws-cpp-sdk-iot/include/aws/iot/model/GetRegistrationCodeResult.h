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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the GetRegistrationCode operation.</p>
   */
  class AWS_IOT_API GetRegistrationCodeResult
  {
  public:
    GetRegistrationCodeResult();
    GetRegistrationCodeResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRegistrationCodeResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The CA certificate registration code.</p>
     */
    inline const Aws::String& GetRegistrationCode() const{ return m_registrationCode; }

    /**
     * <p>The CA certificate registration code.</p>
     */
    inline void SetRegistrationCode(const Aws::String& value) { m_registrationCode = value; }

    /**
     * <p>The CA certificate registration code.</p>
     */
    inline void SetRegistrationCode(Aws::String&& value) { m_registrationCode = value; }

    /**
     * <p>The CA certificate registration code.</p>
     */
    inline void SetRegistrationCode(const char* value) { m_registrationCode.assign(value); }

    /**
     * <p>The CA certificate registration code.</p>
     */
    inline GetRegistrationCodeResult& WithRegistrationCode(const Aws::String& value) { SetRegistrationCode(value); return *this;}

    /**
     * <p>The CA certificate registration code.</p>
     */
    inline GetRegistrationCodeResult& WithRegistrationCode(Aws::String&& value) { SetRegistrationCode(value); return *this;}

    /**
     * <p>The CA certificate registration code.</p>
     */
    inline GetRegistrationCodeResult& WithRegistrationCode(const char* value) { SetRegistrationCode(value); return *this;}

  private:
    Aws::String m_registrationCode;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
