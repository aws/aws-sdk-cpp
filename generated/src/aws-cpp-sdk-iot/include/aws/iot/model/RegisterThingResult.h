/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class RegisterThingResult
  {
  public:
    AWS_IOT_API RegisterThingResult();
    AWS_IOT_API RegisterThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API RegisterThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePem = value; }
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePem = std::move(value); }
    inline void SetCertificatePem(const char* value) { m_certificatePem.assign(value); }
    inline RegisterThingResult& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}
    inline RegisterThingResult& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}
    inline RegisterThingResult& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceArns() const{ return m_resourceArns; }
    inline void SetResourceArns(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceArns = value; }
    inline void SetResourceArns(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceArns = std::move(value); }
    inline RegisterThingResult& WithResourceArns(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceArns(value); return *this;}
    inline RegisterThingResult& WithResourceArns(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}
    inline RegisterThingResult& AddResourceArns(const Aws::String& key, const Aws::String& value) { m_resourceArns.emplace(key, value); return *this; }
    inline RegisterThingResult& AddResourceArns(Aws::String&& key, const Aws::String& value) { m_resourceArns.emplace(std::move(key), value); return *this; }
    inline RegisterThingResult& AddResourceArns(const Aws::String& key, Aws::String&& value) { m_resourceArns.emplace(key, std::move(value)); return *this; }
    inline RegisterThingResult& AddResourceArns(Aws::String&& key, Aws::String&& value) { m_resourceArns.emplace(std::move(key), std::move(value)); return *this; }
    inline RegisterThingResult& AddResourceArns(const char* key, Aws::String&& value) { m_resourceArns.emplace(key, std::move(value)); return *this; }
    inline RegisterThingResult& AddResourceArns(Aws::String&& key, const char* value) { m_resourceArns.emplace(std::move(key), value); return *this; }
    inline RegisterThingResult& AddResourceArns(const char* key, const char* value) { m_resourceArns.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterThingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterThingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterThingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificatePem;

    Aws::Map<Aws::String, Aws::String> m_resourceArns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
