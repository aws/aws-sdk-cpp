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
  class AWS_IOT_API RegisterCertificateWithoutCAResult
  {
  public:
    RegisterCertificateWithoutCAResult();
    RegisterCertificateWithoutCAResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterCertificateWithoutCAResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the registered certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registered certificate.</p>
     */
    inline RegisterCertificateWithoutCAResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registered certificate.</p>
     */
    inline RegisterCertificateWithoutCAResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registered certificate.</p>
     */
    inline RegisterCertificateWithoutCAResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The ID of the registered certificate. (The last part of the certificate ARN
     * contains the certificate ID.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The ID of the registered certificate. (The last part of the certificate ARN
     * contains the certificate ID.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateId = value; }

    /**
     * <p>The ID of the registered certificate. (The last part of the certificate ARN
     * contains the certificate ID.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateId = std::move(value); }

    /**
     * <p>The ID of the registered certificate. (The last part of the certificate ARN
     * contains the certificate ID.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateId.assign(value); }

    /**
     * <p>The ID of the registered certificate. (The last part of the certificate ARN
     * contains the certificate ID.</p>
     */
    inline RegisterCertificateWithoutCAResult& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The ID of the registered certificate. (The last part of the certificate ARN
     * contains the certificate ID.</p>
     */
    inline RegisterCertificateWithoutCAResult& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the registered certificate. (The last part of the certificate ARN
     * contains the certificate ID.</p>
     */
    inline RegisterCertificateWithoutCAResult& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

  private:

    Aws::String m_certificateArn;

    Aws::String m_certificateId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
