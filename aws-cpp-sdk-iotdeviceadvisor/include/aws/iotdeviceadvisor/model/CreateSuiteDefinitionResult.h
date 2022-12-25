/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class CreateSuiteDefinitionResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API CreateSuiteDefinitionResult();
    AWS_IOTDEVICEADVISOR_API CreateSuiteDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API CreateSuiteDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionId = value; }

    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionId = std::move(value); }

    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionId.assign(value); }

    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionArn() const{ return m_suiteDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline void SetSuiteDefinitionArn(const Aws::String& value) { m_suiteDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline void SetSuiteDefinitionArn(Aws::String&& value) { m_suiteDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline void SetSuiteDefinitionArn(const char* value) { m_suiteDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionArn(const Aws::String& value) { SetSuiteDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionArn(Aws::String&& value) { SetSuiteDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionArn(const char* value) { SetSuiteDefinitionArn(value); return *this;}


    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const{ return m_suiteDefinitionName; }

    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline void SetSuiteDefinitionName(const Aws::String& value) { m_suiteDefinitionName = value; }

    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline void SetSuiteDefinitionName(Aws::String&& value) { m_suiteDefinitionName = std::move(value); }

    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline void SetSuiteDefinitionName(const char* value) { m_suiteDefinitionName.assign(value); }

    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionName(const Aws::String& value) { SetSuiteDefinitionName(value); return *this;}

    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionName(Aws::String&& value) { SetSuiteDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline CreateSuiteDefinitionResult& WithSuiteDefinitionName(const char* value) { SetSuiteDefinitionName(value); return *this;}


    /**
     * <p>The timestamp of when the test suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the test suite was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the test suite was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the test suite was created.</p>
     */
    inline CreateSuiteDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the test suite was created.</p>
     */
    inline CreateSuiteDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_suiteDefinitionId;

    Aws::String m_suiteDefinitionArn;

    Aws::String m_suiteDefinitionName;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
