/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace HealthLake
{
namespace Model
{

  /**
   */
  class DescribeFHIRDatastoreRequest : public HealthLakeRequest
  {
  public:
    AWS_HEALTHLAKE_API DescribeFHIRDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFHIRDatastore"; }

    AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

    AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline DescribeFHIRDatastoreRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline DescribeFHIRDatastoreRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The AWS-generated Data Store id. This is part of the ‘CreateFHIRDatastore’
     * output.</p>
     */
    inline DescribeFHIRDatastoreRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}

  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
