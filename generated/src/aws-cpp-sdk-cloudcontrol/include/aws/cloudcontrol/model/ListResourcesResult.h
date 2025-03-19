/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudcontrol/model/ResourceDescription.h>
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
namespace CloudControlApi
{
namespace Model
{
  class ListResourcesResult
  {
  public:
    AWS_CLOUDCONTROLAPI_API ListResourcesResult() = default;
    AWS_CLOUDCONTROLAPI_API ListResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDCONTROLAPI_API ListResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the resource type.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ListResourcesResult& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the specified resources, including primary identifier and
     * resource model.</p>
     */
    inline const Aws::Vector<ResourceDescription>& GetResourceDescriptions() const { return m_resourceDescriptions; }
    template<typename ResourceDescriptionsT = Aws::Vector<ResourceDescription>>
    void SetResourceDescriptions(ResourceDescriptionsT&& value) { m_resourceDescriptionsHasBeenSet = true; m_resourceDescriptions = std::forward<ResourceDescriptionsT>(value); }
    template<typename ResourceDescriptionsT = Aws::Vector<ResourceDescription>>
    ListResourcesResult& WithResourceDescriptions(ResourceDescriptionsT&& value) { SetResourceDescriptions(std::forward<ResourceDescriptionsT>(value)); return *this;}
    template<typename ResourceDescriptionsT = ResourceDescription>
    ListResourcesResult& AddResourceDescriptions(ResourceDescriptionsT&& value) { m_resourceDescriptionsHasBeenSet = true; m_resourceDescriptions.emplace_back(std::forward<ResourceDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all of the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>ListResources</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::Vector<ResourceDescription> m_resourceDescriptions;
    bool m_resourceDescriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
