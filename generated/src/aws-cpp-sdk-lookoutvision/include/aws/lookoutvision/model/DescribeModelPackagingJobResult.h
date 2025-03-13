/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelPackagingDescription.h>
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
  class DescribeModelPackagingJobResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeModelPackagingJobResult() = default;
    AWS_LOOKOUTFORVISION_API DescribeModelPackagingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DescribeModelPackagingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the model packaging job. </p>
     */
    inline const ModelPackagingDescription& GetModelPackagingDescription() const { return m_modelPackagingDescription; }
    template<typename ModelPackagingDescriptionT = ModelPackagingDescription>
    void SetModelPackagingDescription(ModelPackagingDescriptionT&& value) { m_modelPackagingDescriptionHasBeenSet = true; m_modelPackagingDescription = std::forward<ModelPackagingDescriptionT>(value); }
    template<typename ModelPackagingDescriptionT = ModelPackagingDescription>
    DescribeModelPackagingJobResult& WithModelPackagingDescription(ModelPackagingDescriptionT&& value) { SetModelPackagingDescription(std::forward<ModelPackagingDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelPackagingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ModelPackagingDescription m_modelPackagingDescription;
    bool m_modelPackagingDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
