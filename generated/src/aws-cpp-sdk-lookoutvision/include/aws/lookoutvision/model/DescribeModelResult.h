/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelDescription.h>
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
namespace LookoutforVision
{
namespace Model
{
  class DescribeModelResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeModelResult() = default;
    AWS_LOOKOUTFORVISION_API DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the description of the model.</p>
     */
    inline const ModelDescription& GetModelDescription() const { return m_modelDescription; }
    template<typename ModelDescriptionT = ModelDescription>
    void SetModelDescription(ModelDescriptionT&& value) { m_modelDescriptionHasBeenSet = true; m_modelDescription = std::forward<ModelDescriptionT>(value); }
    template<typename ModelDescriptionT = ModelDescription>
    DescribeModelResult& WithModelDescription(ModelDescriptionT&& value) { SetModelDescription(std::forward<ModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ModelDescription m_modelDescription;
    bool m_modelDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
