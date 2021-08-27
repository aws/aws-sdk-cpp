/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/DifferenceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/QuestionDifference.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A pillar difference return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PillarDifference">AWS
   * API Reference</a></p>
   */
  class AWS_WELLARCHITECTED_API PillarDifference
  {
  public:
    PillarDifference();
    PillarDifference(Aws::Utils::Json::JsonView jsonValue);
    PillarDifference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline PillarDifference& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline PillarDifference& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline PillarDifference& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    /**
     * <p>Indicates the type of change to the pillar.</p>
     */
    inline const DifferenceStatus& GetDifferenceStatus() const{ return m_differenceStatus; }

    /**
     * <p>Indicates the type of change to the pillar.</p>
     */
    inline bool DifferenceStatusHasBeenSet() const { return m_differenceStatusHasBeenSet; }

    /**
     * <p>Indicates the type of change to the pillar.</p>
     */
    inline void SetDifferenceStatus(const DifferenceStatus& value) { m_differenceStatusHasBeenSet = true; m_differenceStatus = value; }

    /**
     * <p>Indicates the type of change to the pillar.</p>
     */
    inline void SetDifferenceStatus(DifferenceStatus&& value) { m_differenceStatusHasBeenSet = true; m_differenceStatus = std::move(value); }

    /**
     * <p>Indicates the type of change to the pillar.</p>
     */
    inline PillarDifference& WithDifferenceStatus(const DifferenceStatus& value) { SetDifferenceStatus(value); return *this;}

    /**
     * <p>Indicates the type of change to the pillar.</p>
     */
    inline PillarDifference& WithDifferenceStatus(DifferenceStatus&& value) { SetDifferenceStatus(std::move(value)); return *this;}


    /**
     * <p>List of question differences.</p>
     */
    inline const Aws::Vector<QuestionDifference>& GetQuestionDifferences() const{ return m_questionDifferences; }

    /**
     * <p>List of question differences.</p>
     */
    inline bool QuestionDifferencesHasBeenSet() const { return m_questionDifferencesHasBeenSet; }

    /**
     * <p>List of question differences.</p>
     */
    inline void SetQuestionDifferences(const Aws::Vector<QuestionDifference>& value) { m_questionDifferencesHasBeenSet = true; m_questionDifferences = value; }

    /**
     * <p>List of question differences.</p>
     */
    inline void SetQuestionDifferences(Aws::Vector<QuestionDifference>&& value) { m_questionDifferencesHasBeenSet = true; m_questionDifferences = std::move(value); }

    /**
     * <p>List of question differences.</p>
     */
    inline PillarDifference& WithQuestionDifferences(const Aws::Vector<QuestionDifference>& value) { SetQuestionDifferences(value); return *this;}

    /**
     * <p>List of question differences.</p>
     */
    inline PillarDifference& WithQuestionDifferences(Aws::Vector<QuestionDifference>&& value) { SetQuestionDifferences(std::move(value)); return *this;}

    /**
     * <p>List of question differences.</p>
     */
    inline PillarDifference& AddQuestionDifferences(const QuestionDifference& value) { m_questionDifferencesHasBeenSet = true; m_questionDifferences.push_back(value); return *this; }

    /**
     * <p>List of question differences.</p>
     */
    inline PillarDifference& AddQuestionDifferences(QuestionDifference&& value) { m_questionDifferencesHasBeenSet = true; m_questionDifferences.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet;

    DifferenceStatus m_differenceStatus;
    bool m_differenceStatusHasBeenSet;

    Aws::Vector<QuestionDifference> m_questionDifferences;
    bool m_questionDifferencesHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
