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


    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePem = value; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePem = std::move(value); }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePem.assign(value); }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline RegisterThingResult& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline RegisterThingResult& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline RegisterThingResult& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}


    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline void SetResourceArns(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceArns = value; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline void SetResourceArns(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceArns = std::move(value); }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& WithResourceArns(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& WithResourceArns(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& AddResourceArns(const Aws::String& key, const Aws::String& value) { m_resourceArns.emplace(key, value); return *this; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& AddResourceArns(Aws::String&& key, const Aws::String& value) { m_resourceArns.emplace(std::move(key), value); return *this; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& AddResourceArns(const Aws::String& key, Aws::String&& value) { m_resourceArns.emplace(key, std::move(value)); return *this; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& AddResourceArns(Aws::String&& key, Aws::String&& value) { m_resourceArns.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& AddResourceArns(const char* key, Aws::String&& value) { m_resourceArns.emplace(key, std::move(value)); return *this; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& AddResourceArns(Aws::String&& key, const char* value) { m_resourceArns.emplace(std::move(key), value); return *this; }

    /**
     * <p>ARNs for the generated resources.</p>
     */
    inline RegisterThingResult& AddResourceArns(const char* key, const char* value) { m_resourceArns.emplace(key, value); return *this; }

  private:

    Aws::String m_certificatePem;

    Aws::Map<Aws::String, Aws::String> m_resourceArns;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
