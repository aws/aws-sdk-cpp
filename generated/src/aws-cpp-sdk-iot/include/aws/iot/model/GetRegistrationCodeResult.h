/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>The output from the GetRegistrationCode operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetRegistrationCodeResponse">AWS
   * API Reference</a></p>
   */
  class GetRegistrationCodeResult
  {
  public:
    AWS_IOT_API GetRegistrationCodeResult();
    AWS_IOT_API GetRegistrationCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetRegistrationCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetRegistrationCode(Aws::String&& value) { m_registrationCode = std::move(value); }

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
    inline GetRegistrationCodeResult& WithRegistrationCode(Aws::String&& value) { SetRegistrationCode(std::move(value)); return *this;}

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
