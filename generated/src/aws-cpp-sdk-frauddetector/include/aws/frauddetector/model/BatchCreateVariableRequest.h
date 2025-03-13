/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/VariableEntry.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class BatchCreateVariableRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API BatchCreateVariableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateVariable"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline const Aws::Vector<VariableEntry>& GetVariableEntries() const { return m_variableEntries; }
    inline bool VariableEntriesHasBeenSet() const { return m_variableEntriesHasBeenSet; }
    template<typename VariableEntriesT = Aws::Vector<VariableEntry>>
    void SetVariableEntries(VariableEntriesT&& value) { m_variableEntriesHasBeenSet = true; m_variableEntries = std::forward<VariableEntriesT>(value); }
    template<typename VariableEntriesT = Aws::Vector<VariableEntry>>
    BatchCreateVariableRequest& WithVariableEntries(VariableEntriesT&& value) { SetVariableEntries(std::forward<VariableEntriesT>(value)); return *this;}
    template<typename VariableEntriesT = VariableEntry>
    BatchCreateVariableRequest& AddVariableEntries(VariableEntriesT&& value) { m_variableEntriesHasBeenSet = true; m_variableEntries.emplace_back(std::forward<VariableEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    BatchCreateVariableRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    BatchCreateVariableRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<VariableEntry> m_variableEntries;
    bool m_variableEntriesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
