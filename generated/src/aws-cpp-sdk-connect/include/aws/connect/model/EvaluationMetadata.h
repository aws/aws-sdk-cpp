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
    AWS_CONNECT_API EvaluationMetadata();
    AWS_CONNECT_API EvaluationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline EvaluationMetadata& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline EvaluationMetadata& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline EvaluationMetadata& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the
     * evaluation.</p>
     */
    inline const Aws::String& GetEvaluatorArn() const{ return m_evaluatorArn; }
    inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
    inline void SetEvaluatorArn(const Aws::String& value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn = value; }
    inline void SetEvaluatorArn(Aws::String&& value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn = std::move(value); }
    inline void SetEvaluatorArn(const char* value) { m_evaluatorArnHasBeenSet = true; m_evaluatorArn.assign(value); }
    inline EvaluationMetadata& WithEvaluatorArn(const Aws::String& value) { SetEvaluatorArn(value); return *this;}
    inline EvaluationMetadata& WithEvaluatorArn(Aws::String&& value) { SetEvaluatorArn(std::move(value)); return *this;}
    inline EvaluationMetadata& WithEvaluatorArn(const char* value) { SetEvaluatorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the agent who performed the contact.</p>
     */
    inline const Aws::String& GetContactAgentId() const{ return m_contactAgentId; }
    inline bool ContactAgentIdHasBeenSet() const { return m_contactAgentIdHasBeenSet; }
    inline void SetContactAgentId(const Aws::String& value) { m_contactAgentIdHasBeenSet = true; m_contactAgentId = value; }
    inline void SetContactAgentId(Aws::String&& value) { m_contactAgentIdHasBeenSet = true; m_contactAgentId = std::move(value); }
    inline void SetContactAgentId(const char* value) { m_contactAgentIdHasBeenSet = true; m_contactAgentId.assign(value); }
    inline EvaluationMetadata& WithContactAgentId(const Aws::String& value) { SetContactAgentId(value); return *this;}
    inline EvaluationMetadata& WithContactAgentId(Aws::String&& value) { SetContactAgentId(std::move(value)); return *this;}
    inline EvaluationMetadata& WithContactAgentId(const char* value) { SetContactAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall score of the contact evaluation.</p>
     */
    inline const EvaluationScore& GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(const EvaluationScore& value) { m_scoreHasBeenSet = true; m_score = value; }
    inline void SetScore(EvaluationScore&& value) { m_scoreHasBeenSet = true; m_score = std::move(value); }
    inline EvaluationMetadata& WithScore(const EvaluationScore& value) { SetScore(value); return *this;}
    inline EvaluationMetadata& WithScore(EvaluationScore&& value) { SetScore(std::move(value)); return *this;}
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
