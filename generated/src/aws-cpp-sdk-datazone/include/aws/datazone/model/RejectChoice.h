/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The details of the automatically generated business metadata that is
   * rejected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RejectChoice">AWS
   * API Reference</a></p>
   */
  class RejectChoice
  {
  public:
    AWS_DATAZONE_API RejectChoice();
    AWS_DATAZONE_API RejectChoice(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RejectChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the the automatically generated business metadata that can be
     * rejected.</p>
     */
    inline const Aws::Vector<int>& GetPredictionChoices() const{ return m_predictionChoices; }

    /**
     * <p>Specifies the the automatically generated business metadata that can be
     * rejected.</p>
     */
    inline bool PredictionChoicesHasBeenSet() const { return m_predictionChoicesHasBeenSet; }

    /**
     * <p>Specifies the the automatically generated business metadata that can be
     * rejected.</p>
     */
    inline void SetPredictionChoices(const Aws::Vector<int>& value) { m_predictionChoicesHasBeenSet = true; m_predictionChoices = value; }

    /**
     * <p>Specifies the the automatically generated business metadata that can be
     * rejected.</p>
     */
    inline void SetPredictionChoices(Aws::Vector<int>&& value) { m_predictionChoicesHasBeenSet = true; m_predictionChoices = std::move(value); }

    /**
     * <p>Specifies the the automatically generated business metadata that can be
     * rejected.</p>
     */
    inline RejectChoice& WithPredictionChoices(const Aws::Vector<int>& value) { SetPredictionChoices(value); return *this;}

    /**
     * <p>Specifies the the automatically generated business metadata that can be
     * rejected.</p>
     */
    inline RejectChoice& WithPredictionChoices(Aws::Vector<int>&& value) { SetPredictionChoices(std::move(value)); return *this;}

    /**
     * <p>Specifies the the automatically generated business metadata that can be
     * rejected.</p>
     */
    inline RejectChoice& AddPredictionChoices(int value) { m_predictionChoicesHasBeenSet = true; m_predictionChoices.push_back(value); return *this; }


    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline const Aws::String& GetPredictionTarget() const{ return m_predictionTarget; }

    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline bool PredictionTargetHasBeenSet() const { return m_predictionTargetHasBeenSet; }

    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline void SetPredictionTarget(const Aws::String& value) { m_predictionTargetHasBeenSet = true; m_predictionTarget = value; }

    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline void SetPredictionTarget(Aws::String&& value) { m_predictionTargetHasBeenSet = true; m_predictionTarget = std::move(value); }

    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline void SetPredictionTarget(const char* value) { m_predictionTargetHasBeenSet = true; m_predictionTarget.assign(value); }

    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline RejectChoice& WithPredictionTarget(const Aws::String& value) { SetPredictionTarget(value); return *this;}

    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline RejectChoice& WithPredictionTarget(Aws::String&& value) { SetPredictionTarget(std::move(value)); return *this;}

    /**
     * <p>Specifies the target (for example, a column name) where a prediction can be
     * rejected.</p>
     */
    inline RejectChoice& WithPredictionTarget(const char* value) { SetPredictionTarget(value); return *this;}

  private:

    Aws::Vector<int> m_predictionChoices;
    bool m_predictionChoicesHasBeenSet = false;

    Aws::String m_predictionTarget;
    bool m_predictionTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
