/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/UserTurnInputSpecification.h>
#include <aws/lexv2-models/model/UserTurnOutputSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the expected and input values for the user
   * turn.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UserTurnSpecification">AWS
   * API Reference</a></p>
   */
  class UserTurnSpecification
  {
  public:
    AWS_LEXMODELSV2_API UserTurnSpecification();
    AWS_LEXMODELSV2_API UserTurnSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UserTurnSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline const UserTurnInputSpecification& GetInput() const{ return m_input; }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline void SetInput(const UserTurnInputSpecification& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline void SetInput(UserTurnInputSpecification&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline UserTurnSpecification& WithInput(const UserTurnInputSpecification& value) { SetInput(value); return *this;}

    /**
     * <p>Contains information about the user messages in the turn in the input.</p>
     */
    inline UserTurnSpecification& WithInput(UserTurnInputSpecification&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Contains results about the expected output for the user turn.</p>
     */
    inline const UserTurnOutputSpecification& GetExpected() const{ return m_expected; }

    /**
     * <p>Contains results about the expected output for the user turn.</p>
     */
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }

    /**
     * <p>Contains results about the expected output for the user turn.</p>
     */
    inline void SetExpected(const UserTurnOutputSpecification& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * <p>Contains results about the expected output for the user turn.</p>
     */
    inline void SetExpected(UserTurnOutputSpecification&& value) { m_expectedHasBeenSet = true; m_expected = std::move(value); }

    /**
     * <p>Contains results about the expected output for the user turn.</p>
     */
    inline UserTurnSpecification& WithExpected(const UserTurnOutputSpecification& value) { SetExpected(value); return *this;}

    /**
     * <p>Contains results about the expected output for the user turn.</p>
     */
    inline UserTurnSpecification& WithExpected(UserTurnOutputSpecification&& value) { SetExpected(std::move(value)); return *this;}

  private:

    UserTurnInputSpecification m_input;
    bool m_inputHasBeenSet = false;

    UserTurnOutputSpecification m_expected;
    bool m_expectedHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
