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
    AWS_LAKEFORMATION_API GetTableObjectsResult();
    AWS_LAKEFORMATION_API GetTableObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetTableObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline const Aws::Vector<PartitionObjects>& GetObjects() const{ return m_objects; }

    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline void SetObjects(const Aws::Vector<PartitionObjects>& value) { m_objects = value; }

    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline void SetObjects(Aws::Vector<PartitionObjects>&& value) { m_objects = std::move(value); }

    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline GetTableObjectsResult& WithObjects(const Aws::Vector<PartitionObjects>& value) { SetObjects(value); return *this;}

    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline GetTableObjectsResult& WithObjects(Aws::Vector<PartitionObjects>&& value) { SetObjects(std::move(value)); return *this;}

    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline GetTableObjectsResult& AddObjects(const PartitionObjects& value) { m_objects.push_back(value); return *this; }

    /**
     * <p>A list of objects organized by partition keys.</p>
     */
    inline GetTableObjectsResult& AddObjects(PartitionObjects&& value) { m_objects.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline GetTableObjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline GetTableObjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token indicating whether additional data is available.</p>
     */
    inline GetTableObjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PartitionObjects> m_objects;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
