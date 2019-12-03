/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/VariableEntry.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class AWS_FRAUDDETECTOR_API BatchCreateVariableRequest : public FraudDetectorRequest
  {
  public:
    BatchCreateVariableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateVariable"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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

  private:

    Aws::Vector<VariableEntry> m_variableEntries;
    bool m_variableEntriesHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
