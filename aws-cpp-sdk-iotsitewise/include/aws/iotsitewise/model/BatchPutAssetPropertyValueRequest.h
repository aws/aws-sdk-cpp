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
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/PutAssetPropertyValueEntry.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class AWS_IOTSITEWISE_API BatchPutAssetPropertyValueRequest : public IoTSiteWiseRequest
  {
  public:
    BatchPutAssetPropertyValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutAssetPropertyValue"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Vector<PutAssetPropertyValueEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetEntries(const Aws::Vector<PutAssetPropertyValueEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline void SetEntries(Aws::Vector<PutAssetPropertyValueEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline BatchPutAssetPropertyValueRequest& WithEntries(const Aws::Vector<PutAssetPropertyValueEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline BatchPutAssetPropertyValueRequest& WithEntries(Aws::Vector<PutAssetPropertyValueEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline BatchPutAssetPropertyValueRequest& AddEntries(const PutAssetPropertyValueEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
     * in the <i>AWS IoT SiteWise User Guide</i>.</p>
     */
    inline BatchPutAssetPropertyValueRequest& AddEntries(PutAssetPropertyValueEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PutAssetPropertyValueEntry> m_entries;
    bool m_entriesHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
