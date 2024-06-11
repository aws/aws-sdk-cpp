﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/PartitionObjects.h>
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
  class GetTableObjectsResult
  {
  public:
    AWS_LAKEFORMATION_API GetTableObjectsResult();
    AWS_LAKEFORMATION_API GetTableObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetTableObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline const Aws::Vector<PartitionObjects>& GetObjects() const{ return m_objects; }
    inline void SetObjects(const Aws::Vector<PartitionObjects>& value) { m_objects = value; }
    inline void SetObjects(Aws::Vector<PartitionObjects>&& value) { m_objects = std::move(value); }
    inline GetTableObjectsResult& WithObjects(const Aws::Vector<PartitionObjects>& value) { SetObjects(value); return *this;}
    inline GetTableObjectsResult& WithObjects(Aws::Vector<PartitionObjects>&& value) { SetObjects(std::move(value)); return *this;}
    inline GetTableObjectsResult& AddObjects(const PartitionObjects& value) { m_objects.push_back(value); return *this; }
    inline GetTableObjectsResult& AddObjects(PartitionObjects&& value) { m_objects.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetTableObjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTableObjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTableObjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableObjectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableObjectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableObjectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PartitionObjects> m_objects;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
