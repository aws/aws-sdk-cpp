﻿/**
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
   * <p>The output from the RegisterCACertificateResponse operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCACertificateResponse">AWS
   * API Reference</a></p>
   */
  class RegisterCACertificateResult
  {
  public:
    AWS_IOT_API RegisterCACertificateResult();
    AWS_IOT_API RegisterCACertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API RegisterCACertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The CA certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArn.assign(value); }
    inline RegisterCACertificateResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline RegisterCACertificateResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline RegisterCACertificateResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    inline void SetCertificateId(const Aws::String& value) { m_certificateId = value; }
    inline void SetCertificateId(Aws::String&& value) { m_certificateId = std::move(value); }
    inline void SetCertificateId(const char* value) { m_certificateId.assign(value); }
    inline RegisterCACertificateResult& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}
    inline RegisterCACertificateResult& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}
    inline RegisterCACertificateResult& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterCACertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterCACertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterCACertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;

    Aws::String m_certificateId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
