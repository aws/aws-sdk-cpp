/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LakeFormationOptInsInfo.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListLakeFormationOptInsResult
  {
  public:
    AWS_LAKEFORMATION_API ListLakeFormationOptInsResult() = default;
    AWS_LAKEFORMATION_API ListLakeFormationOptInsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListLakeFormationOptInsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline const Aws::Vector<LakeFormationOptInsInfo>& GetLakeFormationOptInsInfoList() const { return m_lakeFormationOptInsInfoList; }
    template<typename LakeFormationOptInsInfoListT = Aws::Vector<LakeFormationOptInsInfo>>
    void SetLakeFormationOptInsInfoList(LakeFormationOptInsInfoListT&& value) { m_lakeFormationOptInsInfoListHasBeenSet = true; m_lakeFormationOptInsInfoList = std::forward<LakeFormationOptInsInfoListT>(value); }
    template<typename LakeFormationOptInsInfoListT = Aws::Vector<LakeFormationOptInsInfo>>
    ListLakeFormationOptInsResult& WithLakeFormationOptInsInfoList(LakeFormationOptInsInfoListT&& value) { SetLakeFormationOptInsInfoList(std::forward<LakeFormationOptInsInfoListT>(value)); return *this;}
    template<typename LakeFormationOptInsInfoListT = LakeFormationOptInsInfo>
    ListLakeFormationOptInsResult& AddLakeFormationOptInsInfoList(LakeFormationOptInsInfoListT&& value) { m_lakeFormationOptInsInfoListHasBeenSet = true; m_lakeFormationOptInsInfoList.emplace_back(std::forward<LakeFormationOptInsInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLakeFormationOptInsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLakeFormationOptInsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LakeFormationOptInsInfo> m_lakeFormationOptInsInfoList;
    bool m_lakeFormationOptInsInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
