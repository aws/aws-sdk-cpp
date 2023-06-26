/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   * Request to describe a changeset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetChangesetRequest">AWS
   * API Reference</a></p>
   */
  class GetChangesetRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API GetChangesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChangeset"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline GetChangesetRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline GetChangesetRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the FinSpace Dataset where the Changeset is
     * created.</p>
     */
    inline GetChangesetRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline const Aws::String& GetChangesetId() const{ return m_changesetId; }

    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline bool ChangesetIdHasBeenSet() const { return m_changesetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline void SetChangesetId(const Aws::String& value) { m_changesetIdHasBeenSet = true; m_changesetId = value; }

    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline void SetChangesetId(Aws::String&& value) { m_changesetIdHasBeenSet = true; m_changesetId = std::move(value); }

    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline void SetChangesetId(const char* value) { m_changesetIdHasBeenSet = true; m_changesetId.assign(value); }

    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline GetChangesetRequest& WithChangesetId(const Aws::String& value) { SetChangesetId(value); return *this;}

    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline GetChangesetRequest& WithChangesetId(Aws::String&& value) { SetChangesetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Changeset for which to get data.</p>
     */
    inline GetChangesetRequest& WithChangesetId(const char* value) { SetChangesetId(value); return *this;}

  private:

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    Aws::String m_changesetId;
    bool m_changesetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
