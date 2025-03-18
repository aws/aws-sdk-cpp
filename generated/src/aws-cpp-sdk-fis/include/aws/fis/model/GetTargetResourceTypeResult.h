/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/TargetResourceType.h>
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
namespace FIS
{
namespace Model
{
  class GetTargetResourceTypeResult
  {
  public:
    AWS_FIS_API GetTargetResourceTypeResult() = default;
    AWS_FIS_API GetTargetResourceTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API GetTargetResourceTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the resource type.</p>
     */
    inline const TargetResourceType& GetTargetResourceType() const { return m_targetResourceType; }
    template<typename TargetResourceTypeT = TargetResourceType>
    void SetTargetResourceType(TargetResourceTypeT&& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = std::forward<TargetResourceTypeT>(value); }
    template<typename TargetResourceTypeT = TargetResourceType>
    GetTargetResourceTypeResult& WithTargetResourceType(TargetResourceTypeT&& value) { SetTargetResourceType(std::forward<TargetResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTargetResourceTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TargetResourceType m_targetResourceType;
    bool m_targetResourceTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
