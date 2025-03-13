/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DocumentClassifierMode.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Configuration required for a document classification model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassificationConfig">AWS
   * API Reference</a></p>
   */
  class DocumentClassificationConfig
  {
  public:
    AWS_COMPREHEND_API DocumentClassificationConfig() = default;
    AWS_COMPREHEND_API DocumentClassificationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassificationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Classification mode indicates whether the documents are
     * <code>MULTI_CLASS</code> or <code>MULTI_LABEL</code>.</p>
     */
    inline DocumentClassifierMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(DocumentClassifierMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline DocumentClassificationConfig& WithMode(DocumentClassifierMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more labels to associate with the custom classifier.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    DocumentClassificationConfig& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    DocumentClassificationConfig& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}
  private:

    DocumentClassifierMode m_mode{DocumentClassifierMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
