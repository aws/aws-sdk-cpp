﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class GetTrainingDatasetRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API GetTrainingDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrainingDataset"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training dataset that you are
     * interested in.</p>
     */
    inline const Aws::String& GetTrainingDatasetArn() const{ return m_trainingDatasetArn; }
    inline bool TrainingDatasetArnHasBeenSet() const { return m_trainingDatasetArnHasBeenSet; }
    inline void SetTrainingDatasetArn(const Aws::String& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = value; }
    inline void SetTrainingDatasetArn(Aws::String&& value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn = std::move(value); }
    inline void SetTrainingDatasetArn(const char* value) { m_trainingDatasetArnHasBeenSet = true; m_trainingDatasetArn.assign(value); }
    inline GetTrainingDatasetRequest& WithTrainingDatasetArn(const Aws::String& value) { SetTrainingDatasetArn(value); return *this;}
    inline GetTrainingDatasetRequest& WithTrainingDatasetArn(Aws::String&& value) { SetTrainingDatasetArn(std::move(value)); return *this;}
    inline GetTrainingDatasetRequest& WithTrainingDatasetArn(const char* value) { SetTrainingDatasetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_trainingDatasetArn;
    bool m_trainingDatasetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
