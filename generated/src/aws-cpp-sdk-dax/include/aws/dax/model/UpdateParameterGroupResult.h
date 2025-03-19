/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/ParameterGroup.h>
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
namespace DAX
{
namespace Model
{
  class UpdateParameterGroupResult
  {
  public:
    AWS_DAX_API UpdateParameterGroupResult() = default;
    AWS_DAX_API UpdateParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API UpdateParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The parameter group that has been modified.</p>
     */
    inline const ParameterGroup& GetParameterGroup() const { return m_parameterGroup; }
    template<typename ParameterGroupT = ParameterGroup>
    void SetParameterGroup(ParameterGroupT&& value) { m_parameterGroupHasBeenSet = true; m_parameterGroup = std::forward<ParameterGroupT>(value); }
    template<typename ParameterGroupT = ParameterGroup>
    UpdateParameterGroupResult& WithParameterGroup(ParameterGroupT&& value) { SetParameterGroup(std::forward<ParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateParameterGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ParameterGroup m_parameterGroup;
    bool m_parameterGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
