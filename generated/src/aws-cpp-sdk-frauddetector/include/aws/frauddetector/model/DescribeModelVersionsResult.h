/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelVersionDetail.h>
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
namespace FraudDetector
{
namespace Model
{
  class DescribeModelVersionsResult
  {
  public:
    AWS_FRAUDDETECTOR_API DescribeModelVersionsResult() = default;
    AWS_FRAUDDETECTOR_API DescribeModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API DescribeModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model version details.</p>
     */
    inline const Aws::Vector<ModelVersionDetail>& GetModelVersionDetails() const { return m_modelVersionDetails; }
    template<typename ModelVersionDetailsT = Aws::Vector<ModelVersionDetail>>
    void SetModelVersionDetails(ModelVersionDetailsT&& value) { m_modelVersionDetailsHasBeenSet = true; m_modelVersionDetails = std::forward<ModelVersionDetailsT>(value); }
    template<typename ModelVersionDetailsT = Aws::Vector<ModelVersionDetail>>
    DescribeModelVersionsResult& WithModelVersionDetails(ModelVersionDetailsT&& value) { SetModelVersionDetails(std::forward<ModelVersionDetailsT>(value)); return *this;}
    template<typename ModelVersionDetailsT = ModelVersionDetail>
    DescribeModelVersionsResult& AddModelVersionDetails(ModelVersionDetailsT&& value) { m_modelVersionDetailsHasBeenSet = true; m_modelVersionDetails.emplace_back(std::forward<ModelVersionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeModelVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelVersionDetail> m_modelVersionDetails;
    bool m_modelVersionDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
