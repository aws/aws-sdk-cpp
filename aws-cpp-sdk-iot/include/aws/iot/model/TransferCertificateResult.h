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
   * <p>The output from the TransferCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificateResponse">AWS
   * API Reference</a></p>
   */
  class TransferCertificateResult
  {
  public:
    AWS_IOT_API TransferCertificateResult();
    AWS_IOT_API TransferCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API TransferCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
