/**
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
  class DisassociateTrialComponentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DisassociateTrialComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateTrialComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }

    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }

    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }

    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }

    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }

    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline DisassociateTrialComponentRequest& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}

    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline DisassociateTrialComponentRequest& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component to disassociate from the trial.</p>
     */
    inline DisassociateTrialComponentRequest& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}


    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline DisassociateTrialComponentRequest& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline DisassociateTrialComponentRequest& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial to disassociate from.</p>
     */
    inline DisassociateTrialComponentRequest& WithTrialName(const char* value) { SetTrialName(value); return *this;}

  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
