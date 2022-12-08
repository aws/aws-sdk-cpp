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
    AWS_FRAUDDETECTOR_API BatchCreateVariableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateVariable"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline const Aws::Vector<VariableEntry>& GetVariableEntries() const{ return m_variableEntries; }

    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline bool VariableEntriesHasBeenSet() const { return m_variableEntriesHasBeenSet; }

    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline void SetVariableEntries(const Aws::Vector<VariableEntry>& value) { m_variableEntriesHasBeenSet = true; m_variableEntries = value; }

    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline void SetVariableEntries(Aws::Vector<VariableEntry>&& value) { m_variableEntriesHasBeenSet = true; m_variableEntries = std::move(value); }

    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline BatchCreateVariableRequest& WithVariableEntries(const Aws::Vector<VariableEntry>& value) { SetVariableEntries(value); return *this;}

    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline BatchCreateVariableRequest& WithVariableEntries(Aws::Vector<VariableEntry>&& value) { SetVariableEntries(std::move(value)); return *this;}

    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline BatchCreateVariableRequest& AddVariableEntries(const VariableEntry& value) { m_variableEntriesHasBeenSet = true; m_variableEntries.push_back(value); return *this; }

    /**
     * <p>The list of variables for the batch create variable request.</p>
     */
    inline BatchCreateVariableRequest& AddVariableEntries(VariableEntry&& value) { m_variableEntriesHasBeenSet = true; m_variableEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline BatchCreateVariableRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline BatchCreateVariableRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline BatchCreateVariableRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline BatchCreateVariableRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VariableEntry> m_variableEntries;
    bool m_variableEntriesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
