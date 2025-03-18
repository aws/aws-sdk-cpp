/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/ApplicationComponent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeComponentResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeComponentResult() = default;
    AWS_APPLICATIONINSIGHTS_API DescribeComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationComponent& GetApplicationComponent() const { return m_applicationComponent; }
    template<typename ApplicationComponentT = ApplicationComponent>
    void SetApplicationComponent(ApplicationComponentT&& value) { m_applicationComponentHasBeenSet = true; m_applicationComponent = std::forward<ApplicationComponentT>(value); }
    template<typename ApplicationComponentT = ApplicationComponent>
    DescribeComponentResult& WithApplicationComponent(ApplicationComponentT&& value) { SetApplicationComponent(std::forward<ApplicationComponentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceList() const { return m_resourceList; }
    template<typename ResourceListT = Aws::Vector<Aws::String>>
    void SetResourceList(ResourceListT&& value) { m_resourceListHasBeenSet = true; m_resourceList = std::forward<ResourceListT>(value); }
    template<typename ResourceListT = Aws::Vector<Aws::String>>
    DescribeComponentResult& WithResourceList(ResourceListT&& value) { SetResourceList(std::forward<ResourceListT>(value)); return *this;}
    template<typename ResourceListT = Aws::String>
    DescribeComponentResult& AddResourceList(ResourceListT&& value) { m_resourceListHasBeenSet = true; m_resourceList.emplace_back(std::forward<ResourceListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComponentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationComponent m_applicationComponent;
    bool m_applicationComponentHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceList;
    bool m_resourceListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
