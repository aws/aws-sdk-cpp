/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

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
  /**
   * <p>Contains the output of DescribeLifecycleHookTypes.</p>
   */
  class AWS_AUTOSCALING_API DescribeLifecycleHookTypesResult
  {
  public:
    DescribeLifecycleHookTypesResult();
    DescribeLifecycleHookTypesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeLifecycleHookTypesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetLifecycleHookTypes(Aws::Vector<Aws::String>&& value) { m_lifecycleHookTypes = value; }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& WithLifecycleHookTypes(const Aws::Vector<Aws::String>& value) { SetLifecycleHookTypes(value); return *this;}

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& WithLifecycleHookTypes(Aws::Vector<Aws::String>&& value) { SetLifecycleHookTypes(value); return *this;}

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& AddLifecycleHookTypes(const Aws::String& value) { m_lifecycleHookTypes.push_back(value); return *this; }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& AddLifecycleHookTypes(Aws::String&& value) { m_lifecycleHookTypes.push_back(value); return *this; }

    /**
     * <p>The lifecycle hook types.</p>
     */
    inline DescribeLifecycleHookTypesResult& AddLifecycleHookTypes(const char* value) { m_lifecycleHookTypes.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeLifecycleHookTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLifecycleHookTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_lifecycleHookTypes;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws