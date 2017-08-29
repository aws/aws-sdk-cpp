/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>The output from the TransferCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificateResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API TransferCertificateResult
  {
  public:
    TransferCertificateResult();
    TransferCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TransferCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetTransferredCertificateArn() const{ return m_transferredCertificateArn; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetTransferredCertificateArn(const Aws::String& value) { m_transferredCertificateArn = value; }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetTransferredCertificateArn(Aws::String&& value) { m_transferredCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline void SetTransferredCertificateArn(const char* value) { m_transferredCertificateArn.assign(value); }

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline TransferCertificateResult& WithTransferredCertificateArn(const Aws::String& value) { SetTransferredCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline TransferCertificateResult& WithTransferredCertificateArn(Aws::String&& value) { SetTransferredCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate.</p>
     */
    inline TransferCertificateResult& WithTransferredCertificateArn(const char* value) { SetTransferredCertificateArn(value); return *this;}

  private:

    Aws::String m_transferredCertificateArn;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
