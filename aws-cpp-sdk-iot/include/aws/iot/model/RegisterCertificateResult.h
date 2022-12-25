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
   * <p>The output from the RegisterCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificateResponse">AWS
   * API Reference</a></p>
   */
  class RegisterCertificateResult
  {
  public:
    AWS_IOT_API RegisterCertificateResult();
    AWS_IOT_API RegisterCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API RegisterCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The certificate ARN.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArn = value; }

    /**
     * <p>The certificate ARN.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArn = std::move(value); }

    /**
     * <p>The certificate ARN.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArn.assign(value); }

    /**
     * <p>The certificate ARN.</p>
     */
    inline RegisterCertificateResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The certificate ARN.</p>
     */
    inline RegisterCertificateResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The certificate ARN.</p>
     */
    inline RegisterCertificateResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The certificate identifier.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The certificate identifier.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateId = value; }

    /**
     * <p>The certificate identifier.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateId = std::move(value); }

    /**
     * <p>The certificate identifier.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateId.assign(value); }

    /**
     * <p>The certificate identifier.</p>
     */
    inline RegisterCertificateResult& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The certificate identifier.</p>
     */
    inline RegisterCertificateResult& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The certificate identifier.</p>
     */
    inline RegisterCertificateResult& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

  private:

    Aws::String m_certificateArn;

    Aws::String m_certificateId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
