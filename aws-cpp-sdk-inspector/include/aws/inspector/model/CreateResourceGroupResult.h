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
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API CreateResourceGroupResult
  {
  public:
    CreateResourceGroupResult();
    CreateResourceGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateResourceGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArn = value; }

    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArn = std::move(value); }

    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline CreateResourceGroupResult& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline CreateResourceGroupResult& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the resource group that is created.</p>
     */
    inline CreateResourceGroupResult& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}

  private:

    Aws::String m_resourceGroupArn;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
