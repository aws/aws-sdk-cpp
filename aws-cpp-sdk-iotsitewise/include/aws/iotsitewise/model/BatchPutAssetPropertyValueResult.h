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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_IOTSITEWISE_API BatchPutAssetPropertyValueResult
  {
  public:
    BatchPutAssetPropertyValueResult();
    BatchPutAssetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchPutAssetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Vector<BatchPutAssetPropertyErrorEntry> m_errorEntries;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
