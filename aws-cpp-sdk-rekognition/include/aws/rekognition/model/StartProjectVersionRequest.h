/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API StartProjectVersionRequest : public RekognitionRequest
  {
  public:
    StartProjectVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartProjectVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }

    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = value; }

    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline StartProjectVersionRequest& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline StartProjectVersionRequest& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name(ARN) of the model version that you want to
     * start.</p>
     */
    inline StartProjectVersionRequest& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}


    /**
     * <p>The minimum number of inference units to use. A single inference unit
     * represents 1 hour of processing and can support up to 5 Transaction Pers Second
     * (TPS). Use a higher number to increase the TPS throughput of your model. You are
     * charged for the number of inference units that you use. </p>
     */
    inline int GetMinInferenceUnits() const{ return m_minInferenceUnits; }

    /**
     * <p>The minimum number of inference units to use. A single inference unit
     * represents 1 hour of processing and can support up to 5 Transaction Pers Second
     * (TPS). Use a higher number to increase the TPS throughput of your model. You are
     * charged for the number of inference units that you use. </p>
     */
    inline bool MinInferenceUnitsHasBeenSet() const { return m_minInferenceUnitsHasBeenSet; }

    /**
     * <p>The minimum number of inference units to use. A single inference unit
     * represents 1 hour of processing and can support up to 5 Transaction Pers Second
     * (TPS). Use a higher number to increase the TPS throughput of your model. You are
     * charged for the number of inference units that you use. </p>
     */
    inline void SetMinInferenceUnits(int value) { m_minInferenceUnitsHasBeenSet = true; m_minInferenceUnits = value; }

    /**
     * <p>The minimum number of inference units to use. A single inference unit
     * represents 1 hour of processing and can support up to 5 Transaction Pers Second
     * (TPS). Use a higher number to increase the TPS throughput of your model. You are
     * charged for the number of inference units that you use. </p>
     */
    inline StartProjectVersionRequest& WithMinInferenceUnits(int value) { SetMinInferenceUnits(value); return *this;}

  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet;

    int m_minInferenceUnits;
    bool m_minInferenceUnitsHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
