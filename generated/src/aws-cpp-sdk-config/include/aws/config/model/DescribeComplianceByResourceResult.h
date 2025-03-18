/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceByResource.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByResourceResponse">AWS
   * API Reference</a></p>
   */
  class DescribeComplianceByResourceResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeComplianceByResourceResult() = default;
    AWS_CONFIGSERVICE_API DescribeComplianceByResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeComplianceByResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the specified Amazon Web Services resource complies with
     * all of the Config rules that evaluate it.</p>
     */
    inline const Aws::Vector<ComplianceByResource>& GetComplianceByResources() const { return m_complianceByResources; }
    template<typename ComplianceByResourcesT = Aws::Vector<ComplianceByResource>>
    void SetComplianceByResources(ComplianceByResourcesT&& value) { m_complianceByResourcesHasBeenSet = true; m_complianceByResources = std::forward<ComplianceByResourcesT>(value); }
    template<typename ComplianceByResourcesT = Aws::Vector<ComplianceByResource>>
    DescribeComplianceByResourceResult& WithComplianceByResources(ComplianceByResourcesT&& value) { SetComplianceByResources(std::forward<ComplianceByResourcesT>(value)); return *this;}
    template<typename ComplianceByResourcesT = ComplianceByResource>
    DescribeComplianceByResourceResult& AddComplianceByResources(ComplianceByResourcesT&& value) { m_complianceByResourcesHasBeenSet = true; m_complianceByResources.emplace_back(std::forward<ComplianceByResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeComplianceByResourceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComplianceByResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComplianceByResource> m_complianceByResources;
    bool m_complianceByResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
