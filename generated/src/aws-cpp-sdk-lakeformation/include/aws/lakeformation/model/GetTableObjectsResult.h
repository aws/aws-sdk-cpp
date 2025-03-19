/**
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
    AWS_LAKEFORMATION_API GetTableObjectsResult() = default;
    AWS_LAKEFORMATION_API GetTableObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetTableObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline const Aws::Vector<PartitionObjects>& GetObjects() const { return m_objects; }
    template<typename ObjectsT = Aws::Vector<PartitionObjects>>
    void SetObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects = std::forward<ObjectsT>(value); }
    template<typename ObjectsT = Aws::Vector<PartitionObjects>>
    GetTableObjectsResult& WithObjects(ObjectsT&& value) { SetObjects(std::forward<ObjectsT>(value)); return *this;}
    template<typename ObjectsT = PartitionObjects>
    GetTableObjectsResult& AddObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects.emplace_back(std::forward<ObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTableObjectsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableObjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PartitionObjects> m_objects;
    bool m_objectsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
