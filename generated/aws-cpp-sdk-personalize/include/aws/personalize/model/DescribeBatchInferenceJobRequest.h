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
  class AWS_PERSONALIZE_API DescribeBatchInferenceJobRequest : public PersonalizeRequest
  {
  public:
    DescribeBatchInferenceJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBatchInferenceJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline const Aws::String& GetBatchInferenceJobArn() const{ return m_batchInferenceJobArn; }

    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline bool BatchInferenceJobArnHasBeenSet() const { return m_batchInferenceJobArnHasBeenSet; }

    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline void SetBatchInferenceJobArn(const Aws::String& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = value; }

    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline void SetBatchInferenceJobArn(Aws::String&& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = std::move(value); }

    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline void SetBatchInferenceJobArn(const char* value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn.assign(value); }

    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline DescribeBatchInferenceJobRequest& WithBatchInferenceJobArn(const Aws::String& value) { SetBatchInferenceJobArn(value); return *this;}

    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline DescribeBatchInferenceJobRequest& WithBatchInferenceJobArn(Aws::String&& value) { SetBatchInferenceJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the batch inference job to describe.</p>
     */
    inline DescribeBatchInferenceJobRequest& WithBatchInferenceJobArn(const char* value) { SetBatchInferenceJobArn(value); return *this;}

  private:

    Aws::String m_batchInferenceJobArn;
    bool m_batchInferenceJobArnHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
