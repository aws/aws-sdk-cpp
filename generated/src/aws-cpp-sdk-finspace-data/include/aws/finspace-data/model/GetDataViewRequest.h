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
   * Request for retrieving a data view detail. Grouped / accessible within a dataset
   * by its dataset id.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetDataViewRequest">AWS
   * API Reference</a></p>
   */
  class GetDataViewRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API GetDataViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataView"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline const Aws::String& GetDataViewId() const{ return m_dataViewId; }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline bool DataViewIdHasBeenSet() const { return m_dataViewIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline void SetDataViewId(const Aws::String& value) { m_dataViewIdHasBeenSet = true; m_dataViewId = value; }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline void SetDataViewId(Aws::String&& value) { m_dataViewIdHasBeenSet = true; m_dataViewId = std::move(value); }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline void SetDataViewId(const char* value) { m_dataViewIdHasBeenSet = true; m_dataViewId.assign(value); }

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline GetDataViewRequest& WithDataViewId(const Aws::String& value) { SetDataViewId(value); return *this;}

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline GetDataViewRequest& WithDataViewId(Aws::String&& value) { SetDataViewId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Dataview.</p>
     */
    inline GetDataViewRequest& WithDataViewId(const char* value) { SetDataViewId(value); return *this;}


    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline GetDataViewRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline GetDataViewRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Dataset used in the Dataview.</p>
     */
    inline GetDataViewRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}

  private:

    Aws::String m_dataViewId;
    bool m_dataViewIdHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
