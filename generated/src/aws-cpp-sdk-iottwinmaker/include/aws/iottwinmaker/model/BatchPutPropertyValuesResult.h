﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/BatchPutPropertyErrorEntry.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class BatchPutPropertyValuesResult
  {
  public:
    AWS_IOTTWINMAKER_API BatchPutPropertyValuesResult();
    AWS_IOTTWINMAKER_API BatchPutPropertyValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API BatchPutPropertyValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Entries that caused errors in the batch put operation.</p>
     */
    inline const Aws::Vector<BatchPutPropertyErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }
    inline void SetErrorEntries(const Aws::Vector<BatchPutPropertyErrorEntry>& value) { m_errorEntries = value; }
    inline void SetErrorEntries(Aws::Vector<BatchPutPropertyErrorEntry>&& value) { m_errorEntries = std::move(value); }
    inline BatchPutPropertyValuesResult& WithErrorEntries(const Aws::Vector<BatchPutPropertyErrorEntry>& value) { SetErrorEntries(value); return *this;}
    inline BatchPutPropertyValuesResult& WithErrorEntries(Aws::Vector<BatchPutPropertyErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}
    inline BatchPutPropertyValuesResult& AddErrorEntries(const BatchPutPropertyErrorEntry& value) { m_errorEntries.push_back(value); return *this; }
    inline BatchPutPropertyValuesResult& AddErrorEntries(BatchPutPropertyErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchPutPropertyValuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchPutPropertyValuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchPutPropertyValuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPutPropertyErrorEntry> m_errorEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
