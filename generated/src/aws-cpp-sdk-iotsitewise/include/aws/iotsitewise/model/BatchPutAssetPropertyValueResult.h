/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/BatchPutAssetPropertyErrorEntry.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class BatchPutAssetPropertyValueResult
  {
  public:
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueResult();
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline const Aws::Vector<BatchPutAssetPropertyErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline void SetErrorEntries(const Aws::Vector<BatchPutAssetPropertyErrorEntry>& value) { m_errorEntries = value; }

    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline void SetErrorEntries(Aws::Vector<BatchPutAssetPropertyErrorEntry>&& value) { m_errorEntries = std::move(value); }

    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchPutAssetPropertyValueResult& WithErrorEntries(const Aws::Vector<BatchPutAssetPropertyErrorEntry>& value) { SetErrorEntries(value); return *this;}

    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchPutAssetPropertyValueResult& WithErrorEntries(Aws::Vector<BatchPutAssetPropertyErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchPutAssetPropertyValueResult& AddErrorEntries(const BatchPutAssetPropertyErrorEntry& value) { m_errorEntries.push_back(value); return *this; }

    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline BatchPutAssetPropertyValueResult& AddErrorEntries(BatchPutAssetPropertyErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchPutAssetPropertyValueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchPutAssetPropertyValueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchPutAssetPropertyValueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchPutAssetPropertyErrorEntry> m_errorEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
