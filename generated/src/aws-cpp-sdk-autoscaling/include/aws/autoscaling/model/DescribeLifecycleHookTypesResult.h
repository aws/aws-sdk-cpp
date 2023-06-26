/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeLifecycleHookTypesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeLifecycleHookTypesResult();
    AWS_AUTOSCALING_API DescribeLifecycleHookTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeLifecycleHookTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The lifecycle hook types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleHookTypes() const{ return m_lifecycleHookTypes; }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline void SetLifecycleHookTypes(const Aws::Vector<Aws::String>& value) { m_lifecycleHookTypes = value; }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline void SetLifecycleHookTypes(Aws::Vector<Aws::String>&& value) { m_lifecycleHookTypes = std::move(value); }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& WithLifecycleHookTypes(const Aws::Vector<Aws::String>& value) { SetLifecycleHookTypes(value); return *this;}

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& WithLifecycleHookTypes(Aws::Vector<Aws::String>&& value) { SetLifecycleHookTypes(std::move(value)); return *this;}

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& AddLifecycleHookTypes(const Aws::String& value) { m_lifecycleHookTypes.push_back(value); return *this; }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& AddLifecycleHookTypes(Aws::String&& value) { m_lifecycleHookTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& AddLifecycleHookTypes(const char* value) { m_lifecycleHookTypes.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLifecycleHookTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLifecycleHookTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_lifecycleHookTypes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
