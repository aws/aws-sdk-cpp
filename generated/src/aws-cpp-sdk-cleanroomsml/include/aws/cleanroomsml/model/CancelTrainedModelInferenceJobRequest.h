/**
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
  class CancelTrainedModelInferenceJobRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API CancelTrainedModelInferenceJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelTrainedModelInferenceJob"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The membership ID of the trained model inference job that you want to
     * cancel.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline CancelTrainedModelInferenceJobRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline CancelTrainedModelInferenceJobRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline CancelTrainedModelInferenceJobRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model inference job that you
     * want to cancel.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const{ return m_trainedModelInferenceJobArn; }
    inline bool TrainedModelInferenceJobArnHasBeenSet() const { return m_trainedModelInferenceJobArnHasBeenSet; }
    inline void SetTrainedModelInferenceJobArn(const Aws::String& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = value; }
    inline void SetTrainedModelInferenceJobArn(Aws::String&& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = std::move(value); }
    inline void SetTrainedModelInferenceJobArn(const char* value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn.assign(value); }
    inline CancelTrainedModelInferenceJobRequest& WithTrainedModelInferenceJobArn(const Aws::String& value) { SetTrainedModelInferenceJobArn(value); return *this;}
    inline CancelTrainedModelInferenceJobRequest& WithTrainedModelInferenceJobArn(Aws::String&& value) { SetTrainedModelInferenceJobArn(std::move(value)); return *this;}
    inline CancelTrainedModelInferenceJobRequest& WithTrainedModelInferenceJobArn(const char* value) { SetTrainedModelInferenceJobArn(value); return *this;}
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_trainedModelInferenceJobArn;
    bool m_trainedModelInferenceJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
