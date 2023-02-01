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
   */
  class GetExternalDataViewAccessDetailsRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API GetExternalDataViewAccessDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExternalDataViewAccessDetails"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline const Aws::String& GetDataViewId() const{ return m_dataViewId; }

    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline bool DataViewIdHasBeenSet() const { return m_dataViewIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline void SetDataViewId(const Aws::String& value) { m_dataViewIdHasBeenSet = true; m_dataViewId = value; }

    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline void SetDataViewId(Aws::String&& value) { m_dataViewIdHasBeenSet = true; m_dataViewId = std::move(value); }

    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline void SetDataViewId(const char* value) { m_dataViewIdHasBeenSet = true; m_dataViewId.assign(value); }

    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline GetExternalDataViewAccessDetailsRequest& WithDataViewId(const Aws::String& value) { SetDataViewId(value); return *this;}

    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline GetExternalDataViewAccessDetailsRequest& WithDataViewId(Aws::String&& value) { SetDataViewId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Dataview that you want to access.</p>
     */
    inline GetExternalDataViewAccessDetailsRequest& WithDataViewId(const char* value) { SetDataViewId(value); return *this;}


    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline GetExternalDataViewAccessDetailsRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline GetExternalDataViewAccessDetailsRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Dataset.</p>
     */
    inline GetExternalDataViewAccessDetailsRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}

  private:

    Aws::String m_dataViewId;
    bool m_dataViewIdHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
