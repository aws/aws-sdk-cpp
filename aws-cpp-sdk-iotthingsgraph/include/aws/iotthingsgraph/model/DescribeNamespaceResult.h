/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_IOTTHINGSGRAPH_API DescribeNamespaceResult
  {
  public:
    DescribeNamespaceResult();
    DescribeNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the namespace.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The ARN of the namespace.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArn = value; }

    /**
     * <p>The ARN of the namespace.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArn = std::move(value); }

    /**
     * <p>The ARN of the namespace.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArn.assign(value); }

    /**
     * <p>The ARN of the namespace.</p>
     */
    inline DescribeNamespaceResult& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The ARN of the namespace.</p>
     */
    inline DescribeNamespaceResult& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the namespace.</p>
     */
    inline DescribeNamespaceResult& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The name of the namespace.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceName = value; }

    /**
     * <p>The name of the namespace.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace.</p>
     */
    inline DescribeNamespaceResult& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace.</p>
     */
    inline DescribeNamespaceResult& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace.</p>
     */
    inline DescribeNamespaceResult& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The name of the public namespace that the latest namespace version is
     * tracking.</p>
     */
    inline const Aws::String& GetTrackingNamespaceName() const{ return m_trackingNamespaceName; }

    /**
     * <p>The name of the public namespace that the latest namespace version is
     * tracking.</p>
     */
    inline void SetTrackingNamespaceName(const Aws::String& value) { m_trackingNamespaceName = value; }

    /**
     * <p>The name of the public namespace that the latest namespace version is
     * tracking.</p>
     */
    inline void SetTrackingNamespaceName(Aws::String&& value) { m_trackingNamespaceName = std::move(value); }

    /**
     * <p>The name of the public namespace that the latest namespace version is
     * tracking.</p>
     */
    inline void SetTrackingNamespaceName(const char* value) { m_trackingNamespaceName.assign(value); }

    /**
     * <p>The name of the public namespace that the latest namespace version is
     * tracking.</p>
     */
    inline DescribeNamespaceResult& WithTrackingNamespaceName(const Aws::String& value) { SetTrackingNamespaceName(value); return *this;}

    /**
     * <p>The name of the public namespace that the latest namespace version is
     * tracking.</p>
     */
    inline DescribeNamespaceResult& WithTrackingNamespaceName(Aws::String&& value) { SetTrackingNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the public namespace that the latest namespace version is
     * tracking.</p>
     */
    inline DescribeNamespaceResult& WithTrackingNamespaceName(const char* value) { SetTrackingNamespaceName(value); return *this;}


    /**
     * <p>The version of the public namespace that the latest version is tracking.</p>
     */
    inline long long GetTrackingNamespaceVersion() const{ return m_trackingNamespaceVersion; }

    /**
     * <p>The version of the public namespace that the latest version is tracking.</p>
     */
    inline void SetTrackingNamespaceVersion(long long value) { m_trackingNamespaceVersion = value; }

    /**
     * <p>The version of the public namespace that the latest version is tracking.</p>
     */
    inline DescribeNamespaceResult& WithTrackingNamespaceVersion(long long value) { SetTrackingNamespaceVersion(value); return *this;}


    /**
     * <p>The version of the user's namespace to describe.</p>
     */
    inline long long GetNamespaceVersion() const{ return m_namespaceVersion; }

    /**
     * <p>The version of the user's namespace to describe.</p>
     */
    inline void SetNamespaceVersion(long long value) { m_namespaceVersion = value; }

    /**
     * <p>The version of the user's namespace to describe.</p>
     */
    inline DescribeNamespaceResult& WithNamespaceVersion(long long value) { SetNamespaceVersion(value); return *this;}

  private:

    Aws::String m_namespaceArn;

    Aws::String m_namespaceName;

    Aws::String m_trackingNamespaceName;

    long long m_trackingNamespaceVersion;

    long long m_namespaceVersion;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
