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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API DeleteActionTargetResult
  {
  public:
    DeleteActionTargetResult();
    DeleteActionTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteActionTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArn = value; }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArn = std::move(value); }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline void SetActionTargetArn(const char* value) { m_actionTargetArn.assign(value); }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline DeleteActionTargetResult& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline DeleteActionTargetResult& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline DeleteActionTargetResult& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}

  private:

    Aws::String m_actionTargetArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
