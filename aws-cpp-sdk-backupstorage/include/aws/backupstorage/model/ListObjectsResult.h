/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupstorage/model/BackupObject.h>
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
namespace BackupStorage
{
namespace Model
{
  class ListObjectsResult
  {
  public:
    AWS_BACKUPSTORAGE_API ListObjectsResult();
    AWS_BACKUPSTORAGE_API ListObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSTORAGE_API ListObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Object list
     */
    inline const Aws::Vector<BackupObject>& GetObjectList() const{ return m_objectList; }

    /**
     * Object list
     */
    inline void SetObjectList(const Aws::Vector<BackupObject>& value) { m_objectList = value; }

    /**
     * Object list
     */
    inline void SetObjectList(Aws::Vector<BackupObject>&& value) { m_objectList = std::move(value); }

    /**
     * Object list
     */
    inline ListObjectsResult& WithObjectList(const Aws::Vector<BackupObject>& value) { SetObjectList(value); return *this;}

    /**
     * Object list
     */
    inline ListObjectsResult& WithObjectList(Aws::Vector<BackupObject>&& value) { SetObjectList(std::move(value)); return *this;}

    /**
     * Object list
     */
    inline ListObjectsResult& AddObjectList(const BackupObject& value) { m_objectList.push_back(value); return *this; }

    /**
     * Object list
     */
    inline ListObjectsResult& AddObjectList(BackupObject&& value) { m_objectList.push_back(std::move(value)); return *this; }


    /**
     * Pagination token
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Pagination token
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Pagination token
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Pagination token
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Pagination token
     */
    inline ListObjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Pagination token
     */
    inline ListObjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Pagination token
     */
    inline ListObjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BackupObject> m_objectList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
