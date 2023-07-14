﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API DescribeDatasetImportJobRequest : public PersonalizeRequest
  {
  public:
    DescribeDatasetImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDatasetImportJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline DescribeDatasetImportJobRequest& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline DescribeDatasetImportJobRequest& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job to describe.</p>
     */
    inline DescribeDatasetImportJobRequest& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}

  private:

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
