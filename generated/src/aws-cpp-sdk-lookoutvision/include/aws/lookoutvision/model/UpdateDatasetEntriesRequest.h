/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class UpdateDatasetEntriesRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API UpdateDatasetEntriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatasetEntries"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTFORVISION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the project that contains the dataset that you want to
     * update.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline UpdateDatasetEntriesRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline UpdateDatasetEntriesRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline UpdateDatasetEntriesRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the dataset that you want to update. Specify <code>train</code>
     * to update the training dataset. Specify <code>test</code> to update the test
     * dataset. If you have a single dataset project, specify <code>train</code>.</p>
     */
    inline const Aws::String& GetDatasetType() const{ return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(const Aws::String& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline void SetDatasetType(Aws::String&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }
    inline void SetDatasetType(const char* value) { m_datasetTypeHasBeenSet = true; m_datasetType.assign(value); }
    inline UpdateDatasetEntriesRequest& WithDatasetType(const Aws::String& value) { SetDatasetType(value); return *this;}
    inline UpdateDatasetEntriesRequest& WithDatasetType(Aws::String&& value) { SetDatasetType(std::move(value)); return *this;}
    inline UpdateDatasetEntriesRequest& WithDatasetType(const char* value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entries to add to the dataset.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetChanges() const{ return m_changes; }
    inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }
    inline void SetChanges(const Aws::Utils::ByteBuffer& value) { m_changesHasBeenSet = true; m_changes = value; }
    inline void SetChanges(Aws::Utils::ByteBuffer&& value) { m_changesHasBeenSet = true; m_changes = std::move(value); }
    inline UpdateDatasetEntriesRequest& WithChanges(const Aws::Utils::ByteBuffer& value) { SetChanges(value); return *this;}
    inline UpdateDatasetEntriesRequest& WithChanges(Aws::Utils::ByteBuffer&& value) { SetChanges(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>UpdateDatasetEntries</code> completes only once. You choose the value to
     * pass. For example, An issue might prevent you from getting a response from
     * <code>UpdateDatasetEntries</code>. In this case, safely retry your call to
     * <code>UpdateDatasetEntries</code> by using the same <code>ClientToken</code>
     * parameter value.</p> <p>If you don't supply a value for
     * <code>ClientToken</code>, the AWS SDK you are using inserts a value for you.
     * This prevents retries after a network error from making multiple updates with
     * the same dataset entries. You'll need to provide your own value for other use
     * cases. </p> <p>An error occurs if the other input parameters are not the same as
     * in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>UpdateDatasetEntries</code>. An idempotency token
     * is active for 8 hours. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateDatasetEntriesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateDatasetEntriesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateDatasetEntriesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_changes;
    bool m_changesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
