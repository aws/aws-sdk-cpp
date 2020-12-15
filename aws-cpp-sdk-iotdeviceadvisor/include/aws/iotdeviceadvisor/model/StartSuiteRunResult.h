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
  class AWS_IOTDEVICEADVISOR_API StartSuiteRunResult
  {
  public:
    StartSuiteRunResult();
    StartSuiteRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartSuiteRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Starts a Device Advisor test suite run based on suite Run Id.</p>
     */
    inline const Aws::String& GetSuiteRunId() const{ return m_suiteRunId; }

    /**
     * <p>Starts a Device Advisor test suite run based on suite Run Id.</p>
     */
    inline void SetSuiteRunId(const Aws::String& value) { m_suiteRunId = value; }

    /**
     * <p>Starts a Device Advisor test suite run based on suite Run Id.</p>
     */
    inline void SetSuiteRunId(Aws::String&& value) { m_suiteRunId = std::move(value); }

    /**
     * <p>Starts a Device Advisor test suite run based on suite Run Id.</p>
     */
    inline void SetSuiteRunId(const char* value) { m_suiteRunId.assign(value); }

    /**
     * <p>Starts a Device Advisor test suite run based on suite Run Id.</p>
     */
    inline StartSuiteRunResult& WithSuiteRunId(const Aws::String& value) { SetSuiteRunId(value); return *this;}

    /**
     * <p>Starts a Device Advisor test suite run based on suite Run Id.</p>
     */
    inline StartSuiteRunResult& WithSuiteRunId(Aws::String&& value) { SetSuiteRunId(std::move(value)); return *this;}

    /**
     * <p>Starts a Device Advisor test suite run based on suite Run Id.</p>
     */
    inline StartSuiteRunResult& WithSuiteRunId(const char* value) { SetSuiteRunId(value); return *this;}


    /**
     * <p>Starts a Device Advisor test suite run based on suite run arn.</p>
     */
    inline const Aws::String& GetSuiteRunArn() const{ return m_suiteRunArn; }

    /**
     * <p>Starts a Device Advisor test suite run based on suite run arn.</p>
     */
    inline void SetSuiteRunArn(const Aws::String& value) { m_suiteRunArn = value; }

    /**
     * <p>Starts a Device Advisor test suite run based on suite run arn.</p>
     */
    inline void SetSuiteRunArn(Aws::String&& value) { m_suiteRunArn = std::move(value); }

    /**
     * <p>Starts a Device Advisor test suite run based on suite run arn.</p>
     */
    inline void SetSuiteRunArn(const char* value) { m_suiteRunArn.assign(value); }

    /**
     * <p>Starts a Device Advisor test suite run based on suite run arn.</p>
     */
    inline StartSuiteRunResult& WithSuiteRunArn(const Aws::String& value) { SetSuiteRunArn(value); return *this;}

    /**
     * <p>Starts a Device Advisor test suite run based on suite run arn.</p>
     */
    inline StartSuiteRunResult& WithSuiteRunArn(Aws::String&& value) { SetSuiteRunArn(std::move(value)); return *this;}

    /**
     * <p>Starts a Device Advisor test suite run based on suite run arn.</p>
     */
    inline StartSuiteRunResult& WithSuiteRunArn(const char* value) { SetSuiteRunArn(value); return *this;}


    /**
     * <p>Starts a Device Advisor test suite run based on suite create time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Starts a Device Advisor test suite run based on suite create time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Starts a Device Advisor test suite run based on suite create time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Starts a Device Advisor test suite run based on suite create time.</p>
     */
    inline StartSuiteRunResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Starts a Device Advisor test suite run based on suite create time.</p>
     */
    inline StartSuiteRunResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_suiteRunId;

    Aws::String m_suiteRunArn;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
