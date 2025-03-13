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
  class GetTrainedModelInferenceJobRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API GetTrainedModelInferenceJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrainedModelInferenceJob"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Provides the membership ID of the membership that contains the trained model
     * inference job that you are interested in.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    GetTrainedModelInferenceJobRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon Resource Name (ARN) of the trained model inference job
     * that you are interested in.</p>
     */
    inline const Aws::String& GetTrainedModelInferenceJobArn() const { return m_trainedModelInferenceJobArn; }
    inline bool TrainedModelInferenceJobArnHasBeenSet() const { return m_trainedModelInferenceJobArnHasBeenSet; }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    void SetTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { m_trainedModelInferenceJobArnHasBeenSet = true; m_trainedModelInferenceJobArn = std::forward<TrainedModelInferenceJobArnT>(value); }
    template<typename TrainedModelInferenceJobArnT = Aws::String>
    GetTrainedModelInferenceJobRequest& WithTrainedModelInferenceJobArn(TrainedModelInferenceJobArnT&& value) { SetTrainedModelInferenceJobArn(std::forward<TrainedModelInferenceJobArnT>(value)); return *this;}
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
