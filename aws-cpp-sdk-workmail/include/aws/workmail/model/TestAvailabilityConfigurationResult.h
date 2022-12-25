/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class TestAvailabilityConfigurationResult
  {
  public:
    AWS_WORKMAIL_API TestAvailabilityConfigurationResult();
    AWS_WORKMAIL_API TestAvailabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API TestAvailabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Boolean indicating whether the test passed or failed.</p>
     */
    inline bool GetTestPassed() const{ return m_testPassed; }

    /**
     * <p>Boolean indicating whether the test passed or failed.</p>
     */
    inline void SetTestPassed(bool value) { m_testPassed = value; }

    /**
     * <p>Boolean indicating whether the test passed or failed.</p>
     */
    inline TestAvailabilityConfigurationResult& WithTestPassed(bool value) { SetTestPassed(value); return *this;}


    /**
     * <p>String containing the reason for a failed test if <code>TestPassed</code> is
     * false.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>String containing the reason for a failed test if <code>TestPassed</code> is
     * false.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>String containing the reason for a failed test if <code>TestPassed</code> is
     * false.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>String containing the reason for a failed test if <code>TestPassed</code> is
     * false.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>String containing the reason for a failed test if <code>TestPassed</code> is
     * false.</p>
     */
    inline TestAvailabilityConfigurationResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>String containing the reason for a failed test if <code>TestPassed</code> is
     * false.</p>
     */
    inline TestAvailabilityConfigurationResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>String containing the reason for a failed test if <code>TestPassed</code> is
     * false.</p>
     */
    inline TestAvailabilityConfigurationResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    bool m_testPassed;

    Aws::String m_failureReason;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
