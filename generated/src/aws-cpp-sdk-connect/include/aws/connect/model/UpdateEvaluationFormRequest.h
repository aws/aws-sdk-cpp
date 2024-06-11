/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EvaluationFormScoringStrategy.h>
#include <aws/connect/model/EvaluationFormItem.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateEvaluationFormRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateEvaluationFormRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEvaluationForm"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateEvaluationFormRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateEvaluationFormRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateEvaluationFormRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const{ return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    inline void SetEvaluationFormId(const Aws::String& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = value; }
    inline void SetEvaluationFormId(Aws::String&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::move(value); }
    inline void SetEvaluationFormId(const char* value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId.assign(value); }
    inline UpdateEvaluationFormRequest& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}
    inline UpdateEvaluationFormRequest& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}
    inline UpdateEvaluationFormRequest& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version of the evaluation form to update.</p>
     */
    inline int GetEvaluationFormVersion() const{ return m_evaluationFormVersion; }
    inline bool EvaluationFormVersionHasBeenSet() const { return m_evaluationFormVersionHasBeenSet; }
    inline void SetEvaluationFormVersion(int value) { m_evaluationFormVersionHasBeenSet = true; m_evaluationFormVersion = value; }
    inline UpdateEvaluationFormRequest& WithEvaluationFormVersion(int value) { SetEvaluationFormVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether the operation must create a new version.</p>
     */
    inline bool GetCreateNewVersion() const{ return m_createNewVersion; }
    inline bool CreateNewVersionHasBeenSet() const { return m_createNewVersionHasBeenSet; }
    inline void SetCreateNewVersion(bool value) { m_createNewVersionHasBeenSet = true; m_createNewVersion = value; }
    inline UpdateEvaluationFormRequest& WithCreateNewVersion(bool value) { SetCreateNewVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline UpdateEvaluationFormRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline UpdateEvaluationFormRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline UpdateEvaluationFormRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the evaluation form.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateEvaluationFormRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateEvaluationFormRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateEvaluationFormRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline const Aws::Vector<EvaluationFormItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<EvaluationFormItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<EvaluationFormItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline UpdateEvaluationFormRequest& WithItems(const Aws::Vector<EvaluationFormItem>& value) { SetItems(value); return *this;}
    inline UpdateEvaluationFormRequest& WithItems(Aws::Vector<EvaluationFormItem>&& value) { SetItems(std::move(value)); return *this;}
    inline UpdateEvaluationFormRequest& AddItems(const EvaluationFormItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline UpdateEvaluationFormRequest& AddItems(EvaluationFormItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline const EvaluationFormScoringStrategy& GetScoringStrategy() const{ return m_scoringStrategy; }
    inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
    inline void SetScoringStrategy(const EvaluationFormScoringStrategy& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = value; }
    inline void SetScoringStrategy(EvaluationFormScoringStrategy&& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = std::move(value); }
    inline UpdateEvaluationFormRequest& WithScoringStrategy(const EvaluationFormScoringStrategy& value) { SetScoringStrategy(value); return *this;}
    inline UpdateEvaluationFormRequest& WithScoringStrategy(EvaluationFormScoringStrategy&& value) { SetScoringStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateEvaluationFormRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateEvaluationFormRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateEvaluationFormRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    int m_evaluationFormVersion;
    bool m_evaluationFormVersionHasBeenSet = false;

    bool m_createNewVersion;
    bool m_createNewVersionHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EvaluationFormItem> m_items;
    bool m_itemsHasBeenSet = false;

    EvaluationFormScoringStrategy m_scoringStrategy;
    bool m_scoringStrategyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
