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
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{
  class AWS_DETECTIVE_API CreateGraphResult
  {
  public:
    CreateGraphResult();
    CreateGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArn = value; }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArn.assign(value); }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline CreateGraphResult& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline CreateGraphResult& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline CreateGraphResult& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}

  private:

    Aws::String m_graphArn;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
