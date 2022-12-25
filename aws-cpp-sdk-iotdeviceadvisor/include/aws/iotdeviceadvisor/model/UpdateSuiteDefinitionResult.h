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
  class UpdateSuiteDefinitionResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API UpdateSuiteDefinitionResult();
    AWS_IOTDEVICEADVISOR_API UpdateSuiteDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API UpdateSuiteDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Suite definition ID of the updated test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Suite definition ID of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionId = value; }

    /**
     * <p>Suite definition ID of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Suite definition ID of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionId.assign(value); }

    /**
     * <p>Suite definition ID of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Suite definition ID of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Suite definition ID of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the updated test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionArn() const{ return m_suiteDefinitionArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionArn(const Aws::String& value) { m_suiteDefinitionArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionArn(Aws::String&& value) { m_suiteDefinitionArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionArn(const char* value) { m_suiteDefinitionArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionArn(const Aws::String& value) { SetSuiteDefinitionArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionArn(Aws::String&& value) { SetSuiteDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionArn(const char* value) { SetSuiteDefinitionArn(value); return *this;}


    /**
     * <p>Updates the suite definition name. This is a required parameter.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const{ return m_suiteDefinitionName; }

    /**
     * <p>Updates the suite definition name. This is a required parameter.</p>
     */
    inline void SetSuiteDefinitionName(const Aws::String& value) { m_suiteDefinitionName = value; }

    /**
     * <p>Updates the suite definition name. This is a required parameter.</p>
     */
    inline void SetSuiteDefinitionName(Aws::String&& value) { m_suiteDefinitionName = std::move(value); }

    /**
     * <p>Updates the suite definition name. This is a required parameter.</p>
     */
    inline void SetSuiteDefinitionName(const char* value) { m_suiteDefinitionName.assign(value); }

    /**
     * <p>Updates the suite definition name. This is a required parameter.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionName(const Aws::String& value) { SetSuiteDefinitionName(value); return *this;}

    /**
     * <p>Updates the suite definition name. This is a required parameter.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionName(Aws::String&& value) { SetSuiteDefinitionName(std::move(value)); return *this;}

    /**
     * <p>Updates the suite definition name. This is a required parameter.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionName(const char* value) { SetSuiteDefinitionName(value); return *this;}


    /**
     * <p>Suite definition version of the updated test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Suite definition version of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersion = value; }

    /**
     * <p>Suite definition version of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Suite definition version of the updated test suite.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Suite definition version of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Suite definition version of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Suite definition version of the updated test suite.</p>
     */
    inline UpdateSuiteDefinitionResult& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}


    /**
     * <p>Timestamp of when the test suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Timestamp of when the test suite was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Timestamp of when the test suite was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Timestamp of when the test suite was created.</p>
     */
    inline UpdateSuiteDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Timestamp of when the test suite was created.</p>
     */
    inline UpdateSuiteDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Timestamp of when the test suite was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>Timestamp of when the test suite was updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>Timestamp of when the test suite was updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>Timestamp of when the test suite was updated.</p>
     */
    inline UpdateSuiteDefinitionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>Timestamp of when the test suite was updated.</p>
     */
    inline UpdateSuiteDefinitionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_suiteDefinitionId;

    Aws::String m_suiteDefinitionArn;

    Aws::String m_suiteDefinitionName;

    Aws::String m_suiteDefinitionVersion;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
