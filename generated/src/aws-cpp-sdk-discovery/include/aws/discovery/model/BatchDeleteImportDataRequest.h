/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class BatchDeleteImportDataRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteImportData"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTaskIds() const{ return m_importTaskIds; }

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline bool ImportTaskIdsHasBeenSet() const { return m_importTaskIdsHasBeenSet; }

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline void SetImportTaskIds(const Aws::Vector<Aws::String>& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds = value; }

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline void SetImportTaskIds(Aws::Vector<Aws::String>&& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds = std::move(value); }

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline BatchDeleteImportDataRequest& WithImportTaskIds(const Aws::Vector<Aws::String>& value) { SetImportTaskIds(value); return *this;}

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline BatchDeleteImportDataRequest& WithImportTaskIds(Aws::Vector<Aws::String>&& value) { SetImportTaskIds(std::move(value)); return *this;}

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline BatchDeleteImportDataRequest& AddImportTaskIds(const Aws::String& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds.push_back(value); return *this; }

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline BatchDeleteImportDataRequest& AddImportTaskIds(Aws::String&& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline BatchDeleteImportDataRequest& AddImportTaskIds(const char* value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_importTaskIds;
    bool m_importTaskIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
