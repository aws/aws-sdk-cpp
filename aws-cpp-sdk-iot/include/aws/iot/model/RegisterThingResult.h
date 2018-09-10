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
  class AWS_IOT_API RegisterThingResult
  {
  public:
    RegisterThingResult();
    RegisterThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePem = value; }

    /**
     * <p>.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePem = std::move(value); }

    /**
     * <p>.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePem.assign(value); }

    /**
     * <p>.</p>
     */
    inline RegisterThingResult& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>.</p>
     */
    inline RegisterThingResult& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>.</p>
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
