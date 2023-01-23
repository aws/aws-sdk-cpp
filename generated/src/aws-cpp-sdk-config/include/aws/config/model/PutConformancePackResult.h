/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class PutConformancePackResult
  {
  public:
    AWS_CONFIGSERVICE_API PutConformancePackResult();
    AWS_CONFIGSERVICE_API PutConformancePackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutConformancePackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackArn() const{ return m_conformancePackArn; }

    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline void SetConformancePackArn(const Aws::String& value) { m_conformancePackArn = value; }

    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline void SetConformancePackArn(Aws::String&& value) { m_conformancePackArn = std::move(value); }

    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline void SetConformancePackArn(const char* value) { m_conformancePackArn.assign(value); }

    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline PutConformancePackResult& WithConformancePackArn(const Aws::String& value) { SetConformancePackArn(value); return *this;}

    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline PutConformancePackResult& WithConformancePackArn(Aws::String&& value) { SetConformancePackArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline PutConformancePackResult& WithConformancePackArn(const char* value) { SetConformancePackArn(value); return *this;}

  private:

    Aws::String m_conformancePackArn;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
