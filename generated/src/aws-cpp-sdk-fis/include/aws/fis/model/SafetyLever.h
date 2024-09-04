/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/SafetyLeverState.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p> Describes a safety lever. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/SafetyLever">AWS API
   * Reference</a></p>
   */
  class SafetyLever
  {
  public:
    AWS_FIS_API SafetyLever();
    AWS_FIS_API SafetyLever(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API SafetyLever& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the safety lever. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SafetyLever& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SafetyLever& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SafetyLever& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the safety lever. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SafetyLever& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SafetyLever& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SafetyLever& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of the safety lever. </p>
     */
    inline const SafetyLeverState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SafetyLeverState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SafetyLeverState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SafetyLever& WithState(const SafetyLeverState& value) { SetState(value); return *this;}
    inline SafetyLever& WithState(SafetyLeverState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SafetyLeverState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
