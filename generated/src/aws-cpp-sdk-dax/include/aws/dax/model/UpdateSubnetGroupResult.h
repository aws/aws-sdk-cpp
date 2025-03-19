/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/SubnetGroup.h>
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
  class UpdateSubnetGroupResult
  {
  public:
    AWS_DAX_API UpdateSubnetGroupResult() = default;
    AWS_DAX_API UpdateSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API UpdateSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The subnet group that has been modified.</p>
     */
    inline const SubnetGroup& GetSubnetGroup() const { return m_subnetGroup; }
    template<typename SubnetGroupT = SubnetGroup>
    void SetSubnetGroup(SubnetGroupT&& value) { m_subnetGroupHasBeenSet = true; m_subnetGroup = std::forward<SubnetGroupT>(value); }
    template<typename SubnetGroupT = SubnetGroup>
    UpdateSubnetGroupResult& WithSubnetGroup(SubnetGroupT&& value) { SetSubnetGroup(std::forward<SubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSubnetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SubnetGroup m_subnetGroup;
    bool m_subnetGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
