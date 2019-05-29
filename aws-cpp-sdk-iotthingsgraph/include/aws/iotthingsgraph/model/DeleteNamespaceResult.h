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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API DeleteNamespaceResult
  {
  public:
    DeleteNamespaceResult();
    DeleteNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the namespace to be deleted.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The ARN of the namespace to be deleted.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArn = value; }

    /**
     * <p>The ARN of the namespace to be deleted.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArn = std::move(value); }

    /**
     * <p>The ARN of the namespace to be deleted.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArn.assign(value); }

    /**
     * <p>The ARN of the namespace to be deleted.</p>
     */
    inline DeleteNamespaceResult& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The ARN of the namespace to be deleted.</p>
     */
    inline DeleteNamespaceResult& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the namespace to be deleted.</p>
     */
    inline DeleteNamespaceResult& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The name of the namespace to be deleted.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace to be deleted.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceName = value; }

    /**
     * <p>The name of the namespace to be deleted.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace to be deleted.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace to be deleted.</p>
     */
    inline DeleteNamespaceResult& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace to be deleted.</p>
     */
    inline DeleteNamespaceResult& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace to be deleted.</p>
     */
    inline DeleteNamespaceResult& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}

  private:

    Aws::String m_namespaceArn;

    Aws::String m_namespaceName;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
