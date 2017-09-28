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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/LifecycleHook.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class AWS_AUTOSCALING_API DescribeLifecycleHooksResult
  {
  public:
    DescribeLifecycleHooksResult();
    DescribeLifecycleHooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeLifecycleHooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline const Aws::Vector<LifecycleHook>& GetLifecycleHooks() const{ return m_lifecycleHooks; }

    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline void SetLifecycleHooks(const Aws::Vector<LifecycleHook>& value) { m_lifecycleHooks = value; }

    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline void SetLifecycleHooks(Aws::Vector<LifecycleHook>&& value) { m_lifecycleHooks = std::move(value); }

    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline DescribeLifecycleHooksResult& WithLifecycleHooks(const Aws::Vector<LifecycleHook>& value) { SetLifecycleHooks(value); return *this;}

    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline DescribeLifecycleHooksResult& WithLifecycleHooks(Aws::Vector<LifecycleHook>&& value) { SetLifecycleHooks(std::move(value)); return *this;}

    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline DescribeLifecycleHooksResult& AddLifecycleHooks(const LifecycleHook& value) { m_lifecycleHooks.push_back(value); return *this; }

    /**
     * <p>The lifecycle hooks for the specified group.</p>
     */
    inline DescribeLifecycleHooksResult& AddLifecycleHooks(LifecycleHook&& value) { m_lifecycleHooks.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLifecycleHooksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLifecycleHooksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LifecycleHook> m_lifecycleHooks;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
