/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/finspace-data/model/LocationType.h>
#include <utility>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   */
  class GetWorkingLocationRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API GetWorkingLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkingLocation"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify the type of the working location.</p> <ul> <li> <p>
     * <code>SAGEMAKER</code> – Use the Amazon S3 location as a temporary location to
     * store data content when working with FinSpace Notebooks that run on SageMaker
     * studio.</p> </li> <li> <p> <code>INGESTION</code> – Use the Amazon S3 location
     * as a staging location to copy your data content and then use the location with
     * the Changeset creation operation.</p> </li> </ul>
     */
    inline const LocationType& GetLocationType() const{ return m_locationType; }

    /**
     * <p>Specify the type of the working location.</p> <ul> <li> <p>
     * <code>SAGEMAKER</code> – Use the Amazon S3 location as a temporary location to
     * store data content when working with FinSpace Notebooks that run on SageMaker
     * studio.</p> </li> <li> <p> <code>INGESTION</code> – Use the Amazon S3 location
     * as a staging location to copy your data content and then use the location with
     * the Changeset creation operation.</p> </li> </ul>
     */
    inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }

    /**
     * <p>Specify the type of the working location.</p> <ul> <li> <p>
     * <code>SAGEMAKER</code> – Use the Amazon S3 location as a temporary location to
     * store data content when working with FinSpace Notebooks that run on SageMaker
     * studio.</p> </li> <li> <p> <code>INGESTION</code> – Use the Amazon S3 location
     * as a staging location to copy your data content and then use the location with
     * the Changeset creation operation.</p> </li> </ul>
     */
    inline void SetLocationType(const LocationType& value) { m_locationTypeHasBeenSet = true; m_locationType = value; }

    /**
     * <p>Specify the type of the working location.</p> <ul> <li> <p>
     * <code>SAGEMAKER</code> – Use the Amazon S3 location as a temporary location to
     * store data content when working with FinSpace Notebooks that run on SageMaker
     * studio.</p> </li> <li> <p> <code>INGESTION</code> – Use the Amazon S3 location
     * as a staging location to copy your data content and then use the location with
     * the Changeset creation operation.</p> </li> </ul>
     */
    inline void SetLocationType(LocationType&& value) { m_locationTypeHasBeenSet = true; m_locationType = std::move(value); }

    /**
     * <p>Specify the type of the working location.</p> <ul> <li> <p>
     * <code>SAGEMAKER</code> – Use the Amazon S3 location as a temporary location to
     * store data content when working with FinSpace Notebooks that run on SageMaker
     * studio.</p> </li> <li> <p> <code>INGESTION</code> – Use the Amazon S3 location
     * as a staging location to copy your data content and then use the location with
     * the Changeset creation operation.</p> </li> </ul>
     */
    inline GetWorkingLocationRequest& WithLocationType(const LocationType& value) { SetLocationType(value); return *this;}

    /**
     * <p>Specify the type of the working location.</p> <ul> <li> <p>
     * <code>SAGEMAKER</code> – Use the Amazon S3 location as a temporary location to
     * store data content when working with FinSpace Notebooks that run on SageMaker
     * studio.</p> </li> <li> <p> <code>INGESTION</code> – Use the Amazon S3 location
     * as a staging location to copy your data content and then use the location with
     * the Changeset creation operation.</p> </li> </ul>
     */
    inline GetWorkingLocationRequest& WithLocationType(LocationType&& value) { SetLocationType(std::move(value)); return *this;}

  private:

    LocationType m_locationType;
    bool m_locationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
