/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeLifecycleHooksResult
  {
  public:
    AWS_AUTOSCALING_API DescribeLifecycleHooksResult();
    AWS_AUTOSCALING_API DescribeLifecycleHooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeLifecycleHooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
