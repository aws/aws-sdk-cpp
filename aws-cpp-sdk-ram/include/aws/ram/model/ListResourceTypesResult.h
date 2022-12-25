/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ServiceNameAndResourceType.h>
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
namespace RAM
{
namespace Model
{
  class ListResourceTypesResult
  {
  public:
    AWS_RAM_API ListResourceTypesResult();
    AWS_RAM_API ListResourceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API ListResourceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that contain information about the resource types that
     * can be shared using RAM.</p>
     */
    inline const Aws::Vector<ServiceNameAndResourceType>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>An array of objects that contain information about the resource types that
     * can be shared using RAM.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ServiceNameAndResourceType>& value) { m_resourceTypes = value; }

    /**
     * <p>An array of objects that contain information about the resource types that
     * can be shared using RAM.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ServiceNameAndResourceType>&& value) { m_resourceTypes = std::move(value); }

    /**
     * <p>An array of objects that contain information about the resource types that
     * can be shared using RAM.</p>
     */
    inline ListResourceTypesResult& WithResourceTypes(const Aws::Vector<ServiceNameAndResourceType>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>An array of objects that contain information about the resource types that
     * can be shared using RAM.</p>
     */
    inline ListResourceTypesResult& WithResourceTypes(Aws::Vector<ServiceNameAndResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contain information about the resource types that
     * can be shared using RAM.</p>
     */
    inline ListResourceTypesResult& AddResourceTypes(const ServiceNameAndResourceType& value) { m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>An array of objects that contain information about the resource types that
     * can be shared using RAM.</p>
     */
    inline ListResourceTypesResult& AddResourceTypes(ServiceNameAndResourceType&& value) { m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListResourceTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListResourceTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListResourceTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ServiceNameAndResourceType> m_resourceTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
