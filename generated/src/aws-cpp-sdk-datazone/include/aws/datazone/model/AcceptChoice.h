﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Specifies the prediction (aka, the automatically generated piece of metadata)
   * and the target (for example, a column name) that can be accepted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AcceptChoice">AWS
   * API Reference</a></p>
   */
  class AcceptChoice
  {
  public:
    AWS_DATAZONE_API AcceptChoice();
    AWS_DATAZONE_API AcceptChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AcceptChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The edit of the prediction.</p>
     */
    inline const Aws::String& GetEditedValue() const{ return m_editedValue; }
    inline bool EditedValueHasBeenSet() const { return m_editedValueHasBeenSet; }
    inline void SetEditedValue(const Aws::String& value) { m_editedValueHasBeenSet = true; m_editedValue = value; }
    inline void SetEditedValue(Aws::String&& value) { m_editedValueHasBeenSet = true; m_editedValue = std::move(value); }
    inline void SetEditedValue(const char* value) { m_editedValueHasBeenSet = true; m_editedValue.assign(value); }
    inline AcceptChoice& WithEditedValue(const Aws::String& value) { SetEditedValue(value); return *this;}
    inline AcceptChoice& WithEditedValue(Aws::String&& value) { SetEditedValue(std::move(value)); return *this;}
    inline AcceptChoice& WithEditedValue(const char* value) { SetEditedValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the prediction (aka, the automatically generated piece of metadata)
     * that can be accepted.</p>
     */
    inline int GetPredictionChoice() const{ return m_predictionChoice; }
    inline bool PredictionChoiceHasBeenSet() const { return m_predictionChoiceHasBeenSet; }
    inline void SetPredictionChoice(int value) { m_predictionChoiceHasBeenSet = true; m_predictionChoice = value; }
    inline AcceptChoice& WithPredictionChoice(int value) { SetPredictionChoice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * accepted.</p>
     */
    inline const Aws::String& GetPredictionTarget() const{ return m_predictionTarget; }
    inline bool PredictionTargetHasBeenSet() const { return m_predictionTargetHasBeenSet; }
    inline void SetPredictionTarget(const Aws::String& value) { m_predictionTargetHasBeenSet = true; m_predictionTarget = value; }
    inline void SetPredictionTarget(Aws::String&& value) { m_predictionTargetHasBeenSet = true; m_predictionTarget = std::move(value); }
    inline void SetPredictionTarget(const char* value) { m_predictionTargetHasBeenSet = true; m_predictionTarget.assign(value); }
    inline AcceptChoice& WithPredictionTarget(const Aws::String& value) { SetPredictionTarget(value); return *this;}
    inline AcceptChoice& WithPredictionTarget(Aws::String&& value) { SetPredictionTarget(std::move(value)); return *this;}
    inline AcceptChoice& WithPredictionTarget(const char* value) { SetPredictionTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_editedValue;
    bool m_editedValueHasBeenSet = false;

    int m_predictionChoice;
    bool m_predictionChoiceHasBeenSet = false;

    Aws::String m_predictionTarget;
    bool m_predictionTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
