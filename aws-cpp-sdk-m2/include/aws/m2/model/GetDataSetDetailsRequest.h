/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class GetDataSetDetailsRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetDataSetDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataSetDetails"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline GetDataSetDetailsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline GetDataSetDetailsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application that this data set is associated
     * with.</p>
     */
    inline GetDataSetDetailsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetDataSetName() const{ return m_dataSetName; }

    /**
     * <p>The name of the data set.</p>
     */
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(const Aws::String& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = value; }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(Aws::String&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::move(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline void SetDataSetName(const char* value) { m_dataSetNameHasBeenSet = true; m_dataSetName.assign(value); }

    /**
     * <p>The name of the data set.</p>
     */
    inline GetDataSetDetailsRequest& WithDataSetName(const Aws::String& value) { SetDataSetName(value); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline GetDataSetDetailsRequest& WithDataSetName(Aws::String&& value) { SetDataSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set.</p>
     */
    inline GetDataSetDetailsRequest& WithDataSetName(const char* value) { SetDataSetName(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataSetName;
    bool m_dataSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
