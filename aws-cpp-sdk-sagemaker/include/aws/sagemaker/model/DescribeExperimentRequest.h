﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API DescribeExperimentRequest : public SageMakerRequest
  {
  public:
    DescribeExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExperiment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline DescribeExperimentRequest& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline DescribeExperimentRequest& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment to describe.</p>
     */
    inline DescribeExperimentRequest& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}

  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
