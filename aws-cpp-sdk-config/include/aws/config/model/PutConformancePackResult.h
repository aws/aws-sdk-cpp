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
  class AWS_CONFIGSERVICE_API PutConformancePackResult
  {
  public:
    PutConformancePackResult();
    PutConformancePackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutConformancePackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
