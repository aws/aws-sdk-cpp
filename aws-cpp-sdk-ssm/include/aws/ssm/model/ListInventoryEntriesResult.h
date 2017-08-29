/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListInventoryEntriesResult
  {
  public:
    ListInventoryEntriesResult();
    ListInventoryEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInventoryEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }

    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }

    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }

    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline ListInventoryEntriesResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline ListInventoryEntriesResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline ListInventoryEntriesResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The instance ID targeted by the request to query inventory information.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID targeted by the request to query inventory information.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The instance ID targeted by the request to query inventory information.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

    /**
     * <p>The instance ID targeted by the request to query inventory information.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The instance ID targeted by the request to query inventory information.</p>
     */
    inline ListInventoryEntriesResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID targeted by the request to query inventory information.</p>
     */
    inline ListInventoryEntriesResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID targeted by the request to query inventory information.</p>
     */
    inline ListInventoryEntriesResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The inventory schema version used by the instance(s).</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The inventory schema version used by the instance(s).</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }

    /**
     * <p>The inventory schema version used by the instance(s).</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }

    /**
     * <p>The inventory schema version used by the instance(s).</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }

    /**
     * <p>The inventory schema version used by the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The inventory schema version used by the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The inventory schema version used by the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The time that inventory information was collected for the instance(s).</p>
     */
    inline const Aws::String& GetCaptureTime() const{ return m_captureTime; }

    /**
     * <p>The time that inventory information was collected for the instance(s).</p>
     */
    inline void SetCaptureTime(const Aws::String& value) { m_captureTime = value; }

    /**
     * <p>The time that inventory information was collected for the instance(s).</p>
     */
    inline void SetCaptureTime(Aws::String&& value) { m_captureTime = std::move(value); }

    /**
     * <p>The time that inventory information was collected for the instance(s).</p>
     */
    inline void SetCaptureTime(const char* value) { m_captureTime.assign(value); }

    /**
     * <p>The time that inventory information was collected for the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithCaptureTime(const Aws::String& value) { SetCaptureTime(value); return *this;}

    /**
     * <p>The time that inventory information was collected for the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithCaptureTime(Aws::String&& value) { SetCaptureTime(std::move(value)); return *this;}

    /**
     * <p>The time that inventory information was collected for the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithCaptureTime(const char* value) { SetCaptureTime(value); return *this;}


    /**
     * <p>A list of inventory items on the instance(s).</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of inventory items on the instance(s).</p>
     */
    inline void SetEntries(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_entries = value; }

    /**
     * <p>A list of inventory items on the instance(s).</p>
     */
    inline void SetEntries(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_entries = std::move(value); }

    /**
     * <p>A list of inventory items on the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithEntries(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of inventory items on the instance(s).</p>
     */
    inline ListInventoryEntriesResult& WithEntries(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>A list of inventory items on the instance(s).</p>
     */
    inline ListInventoryEntriesResult& AddEntries(const Aws::Map<Aws::String, Aws::String>& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>A list of inventory items on the instance(s).</p>
     */
    inline ListInventoryEntriesResult& AddEntries(Aws::Map<Aws::String, Aws::String>&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListInventoryEntriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListInventoryEntriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListInventoryEntriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_typeName;

    Aws::String m_instanceId;

    Aws::String m_schemaVersion;

    Aws::String m_captureTime;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_entries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
