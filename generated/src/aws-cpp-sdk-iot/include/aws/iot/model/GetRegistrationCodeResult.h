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
    AWS_IOT_API GetRegistrationCodeResult() = default;
    AWS_IOT_API GetRegistrationCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetRegistrationCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The CA certificate registration code.</p>
     */
    inline const Aws::String& GetRegistrationCode() const { return m_registrationCode; }
    template<typename RegistrationCodeT = Aws::String>
    void SetRegistrationCode(RegistrationCodeT&& value) { m_registrationCodeHasBeenSet = true; m_registrationCode = std::forward<RegistrationCodeT>(value); }
    template<typename RegistrationCodeT = Aws::String>
    GetRegistrationCodeResult& WithRegistrationCode(RegistrationCodeT&& value) { SetRegistrationCode(std::forward<RegistrationCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRegistrationCodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationCode;
    bool m_registrationCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
