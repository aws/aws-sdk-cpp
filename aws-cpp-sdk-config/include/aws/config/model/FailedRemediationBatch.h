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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationConfiguration.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>List of each of the failed remediations with specific reasons.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/FailedRemediationBatch">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API FailedRemediationBatch
  {
  public:
    FailedRemediationBatch();
    FailedRemediationBatch(Aws::Utils::Json::JsonView jsonValue);
    FailedRemediationBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline FailedRemediationBatch& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline FailedRemediationBatch& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Returns a failure message. For example, the resource is already
     * compliant.</p>
     */
    inline FailedRemediationBatch& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline const Aws::Vector<RemediationConfiguration>& GetFailedItems() const{ return m_failedItems; }

    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline bool FailedItemsHasBeenSet() const { return m_failedItemsHasBeenSet; }

    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline void SetFailedItems(const Aws::Vector<RemediationConfiguration>& value) { m_failedItemsHasBeenSet = true; m_failedItems = value; }

    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline void SetFailedItems(Aws::Vector<RemediationConfiguration>&& value) { m_failedItemsHasBeenSet = true; m_failedItems = std::move(value); }

    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline FailedRemediationBatch& WithFailedItems(const Aws::Vector<RemediationConfiguration>& value) { SetFailedItems(value); return *this;}

    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline FailedRemediationBatch& WithFailedItems(Aws::Vector<RemediationConfiguration>&& value) { SetFailedItems(std::move(value)); return *this;}

    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline FailedRemediationBatch& AddFailedItems(const RemediationConfiguration& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(value); return *this; }

    /**
     * <p>Returns remediation configurations of the failed items.</p>
     */
    inline FailedRemediationBatch& AddFailedItems(RemediationConfiguration&& value) { m_failedItemsHasBeenSet = true; m_failedItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet;

    Aws::Vector<RemediationConfiguration> m_failedItems;
    bool m_failedItemsHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
