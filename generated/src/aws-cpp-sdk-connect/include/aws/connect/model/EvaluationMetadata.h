/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationScore.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Metadata information about a contact evaluation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationMetadata">AWS
   * API Reference</a></p>
   */
  class EvaluationMetadata
  {
  public:
    AWS_CONNECT_API EvaluationMetadata() = default;
    AWS_CONNECT_API EvaluationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    EvaluationMetadata& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
    inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
    template<typename EvaluatorArnT = Aws::String>
    void SetEvaluatorArn(EvaluatorArnT&& value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn = std::forward<EvaluatorArnT>(value); }
    template<typename EvaluatorArnT = Aws::String>
    EvaluationMetadata& WithEvaluatorArn(EvaluatorArnT&& value) { SetEvaluatorArn(std::forward<EvaluatorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the agent who performed the contact.</p>
     */
    inline const Aws::String& GetContactAgentId() const { return m_contactAgentId; }
    inline bool ContactAgentIdHasBeenSet() const { return m_contactAgentIdHasBeenSet; }
    template<typename ContactAgentIdT = Aws::String>
    void SetContactAgentId(ContactAgentIdT&& value) { m_contactAgentIdHasBeenSet = true; m_contactAgentId = std::forward<ContactAgentIdT>(value); }
    template<typename ContactAgentIdT = Aws::String>
    EvaluationMetadata& WithContactAgentId(ContactAgentIdT&& value) { SetContactAgentId(std::forward<ContactAgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline const EvaluationScore& GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    template<typename ScoreT = EvaluationScore>
    void SetScore(ScoreT&& value) { m_scoreHasBeenSet = true; m_score = std::forward<ScoreT>(value); }
    template<typename ScoreT = EvaluationScore>
    EvaluationMetadata& WithScore(ScoreT&& value) { SetScore(std::forward<ScoreT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_evaluatorArn;
    bool m_evaluatorArnHasBeenSet = false;

    Aws::String m_contactAgentId;
    bool m_contactAgentIdHasBeenSet = false;

    EvaluationScore m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
