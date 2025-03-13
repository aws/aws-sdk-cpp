/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PolicyVersion.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the ListPolicyVersions operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicyVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListPolicyVersionsResult
  {
  public:
    AWS_IOT_API ListPolicyVersionsResult() = default;
    AWS_IOT_API ListPolicyVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPolicyVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The policy versions.</p>
     */
    inline const Aws::Vector<PolicyVersion>& GetPolicyVersions() const { return m_policyVersions; }
    template<typename PolicyVersionsT = Aws::Vector<PolicyVersion>>
    void SetPolicyVersions(PolicyVersionsT&& value) { m_policyVersionsHasBeenSet = true; m_policyVersions = std::forward<PolicyVersionsT>(value); }
    template<typename PolicyVersionsT = Aws::Vector<PolicyVersion>>
    ListPolicyVersionsResult& WithPolicyVersions(PolicyVersionsT&& value) { SetPolicyVersions(std::forward<PolicyVersionsT>(value)); return *this;}
    template<typename PolicyVersionsT = PolicyVersion>
    ListPolicyVersionsResult& AddPolicyVersions(PolicyVersionsT&& value) { m_policyVersionsHasBeenSet = true; m_policyVersions.emplace_back(std::forward<PolicyVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPolicyVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyVersion> m_policyVersions;
    bool m_policyVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
