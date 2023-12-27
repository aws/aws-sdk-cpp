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
    AWS_LAKEFORMATION_API ListLakeFormationOptInsResult();
    AWS_LAKEFORMATION_API ListLakeFormationOptInsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListLakeFormationOptInsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline const Aws::Vector<LakeFormationOptInsInfo>& GetLakeFormationOptInsInfoList() const{ return m_lakeFormationOptInsInfoList; }

    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline void SetLakeFormationOptInsInfoList(const Aws::Vector<LakeFormationOptInsInfo>& value) { m_lakeFormationOptInsInfoList = value; }

    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline void SetLakeFormationOptInsInfoList(Aws::Vector<LakeFormationOptInsInfo>&& value) { m_lakeFormationOptInsInfoList = std::move(value); }

    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline ListLakeFormationOptInsResult& WithLakeFormationOptInsInfoList(const Aws::Vector<LakeFormationOptInsInfo>& value) { SetLakeFormationOptInsInfoList(value); return *this;}

    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline ListLakeFormationOptInsResult& WithLakeFormationOptInsInfoList(Aws::Vector<LakeFormationOptInsInfo>&& value) { SetLakeFormationOptInsInfoList(std::move(value)); return *this;}

    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline ListLakeFormationOptInsResult& AddLakeFormationOptInsInfoList(const LakeFormationOptInsInfo& value) { m_lakeFormationOptInsInfoList.push_back(value); return *this; }

    /**
     * <p>A list of principal-resource pairs that have Lake Formation permissins
     * enforced.</p>
     */
    inline ListLakeFormationOptInsResult& AddLakeFormationOptInsInfoList(LakeFormationOptInsInfo&& value) { m_lakeFormationOptInsInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListLakeFormationOptInsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListLakeFormationOptInsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline ListLakeFormationOptInsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLakeFormationOptInsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLakeFormationOptInsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLakeFormationOptInsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LakeFormationOptInsInfo> m_lakeFormationOptInsInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
