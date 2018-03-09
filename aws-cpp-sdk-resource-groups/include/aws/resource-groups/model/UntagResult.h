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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceGroups
{
namespace Model
{
  class AWS_RESOURCEGROUPS_API UntagResult
  {
  public:
    UntagResult();
    UntagResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UntagResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the resource from which tags have been removed.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the resource from which tags have been removed.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the resource from which tags have been removed.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the resource from which tags have been removed.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the resource from which tags have been removed.</p>
     */
    inline UntagResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the resource from which tags have been removed.</p>
     */
    inline UntagResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource from which tags have been removed.</p>
     */
    inline UntagResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }

    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keys = value; }

    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keys = std::move(value); }

    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline UntagResult& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}

    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline UntagResult& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline UntagResult& AddKeys(const Aws::String& value) { m_keys.push_back(value); return *this; }

    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline UntagResult& AddKeys(Aws::String&& value) { m_keys.push_back(std::move(value)); return *this; }

    /**
     * <p>The keys of tags that have been removed.</p>
     */
    inline UntagResult& AddKeys(const char* value) { m_keys.push_back(value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_keys;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
