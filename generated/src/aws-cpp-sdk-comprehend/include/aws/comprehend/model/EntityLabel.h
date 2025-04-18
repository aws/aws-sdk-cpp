﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PiiEntityType.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Specifies one of the label or labels that categorize the personally
   * identifiable information (PII) entity being analyzed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityLabel">AWS
   * API Reference</a></p>
   */
  class EntityLabel
  {
  public:
    AWS_COMPREHEND_API EntityLabel() = default;
    AWS_COMPREHEND_API EntityLabel(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the label.</p>
     */
    inline PiiEntityType GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(PiiEntityType value) { m_nameHasBeenSet = true; m_name = value; }
    inline EntityLabel& WithName(PiiEntityType value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline EntityLabel& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    PiiEntityType m_name{PiiEntityType::NOT_SET};
    bool m_nameHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
