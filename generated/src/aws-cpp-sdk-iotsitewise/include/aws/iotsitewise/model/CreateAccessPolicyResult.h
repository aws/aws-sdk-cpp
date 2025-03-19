/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class CreateAccessPolicyResult
  {
  public:
    AWS_IOTSITEWISE_API CreateAccessPolicyResult() = default;
    AWS_IOTSITEWISE_API CreateAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const { return m_accessPolicyId; }
    template<typename AccessPolicyIdT = Aws::String>
    void SetAccessPolicyId(AccessPolicyIdT&& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = std::forward<AccessPolicyIdT>(value); }
    template<typename AccessPolicyIdT = Aws::String>
    CreateAccessPolicyResult& WithAccessPolicyId(AccessPolicyIdT&& value) { SetAccessPolicyId(std::forward<AccessPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline const Aws::String& GetAccessPolicyArn() const { return m_accessPolicyArn; }
    template<typename AccessPolicyArnT = Aws::String>
    void SetAccessPolicyArn(AccessPolicyArnT&& value) { m_accessPolicyArnHasBeenSet = true; m_accessPolicyArn = std::forward<AccessPolicyArnT>(value); }
    template<typename AccessPolicyArnT = Aws::String>
    CreateAccessPolicyResult& WithAccessPolicyArn(AccessPolicyArnT&& value) { SetAccessPolicyArn(std::forward<AccessPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAccessPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPolicyId;
    bool m_accessPolicyIdHasBeenSet = false;

    Aws::String m_accessPolicyArn;
    bool m_accessPolicyArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
