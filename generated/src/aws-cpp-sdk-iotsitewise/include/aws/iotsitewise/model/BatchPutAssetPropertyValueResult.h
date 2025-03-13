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
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueResult() = default;
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the errors (if any) associated with the batch put request. Each
     * error entry contains the <code>entryId</code> of the entry that failed.</p>
     */
    inline const Aws::Vector<BatchPutAssetPropertyErrorEntry>& GetErrorEntries() const { return m_errorEntries; }
    template<typename ErrorEntriesT = Aws::Vector<BatchPutAssetPropertyErrorEntry>>
    void SetErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries = std::forward<ErrorEntriesT>(value); }
    template<typename ErrorEntriesT = Aws::Vector<BatchPutAssetPropertyErrorEntry>>
    BatchPutAssetPropertyValueResult& WithErrorEntries(ErrorEntriesT&& value) { SetErrorEntries(std::forward<ErrorEntriesT>(value)); return *this;}
    template<typename ErrorEntriesT = BatchPutAssetPropertyErrorEntry>
    BatchPutAssetPropertyValueResult& AddErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries.emplace_back(std::forward<ErrorEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchPutAssetPropertyValueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPutAssetPropertyErrorEntry> m_errorEntries;
    bool m_errorEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
