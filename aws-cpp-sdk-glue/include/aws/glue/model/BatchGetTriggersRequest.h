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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API BatchGetTriggersRequest : public GlueRequest
  {
  public:
    BatchGetTriggersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetTriggers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTriggerNames() const{ return m_triggerNames; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline bool TriggerNamesHasBeenSet() const { return m_triggerNamesHasBeenSet; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline void SetTriggerNames(const Aws::Vector<Aws::String>& value) { m_triggerNamesHasBeenSet = true; m_triggerNames = value; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline void SetTriggerNames(Aws::Vector<Aws::String>&& value) { m_triggerNamesHasBeenSet = true; m_triggerNames = std::move(value); }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& WithTriggerNames(const Aws::Vector<Aws::String>& value) { SetTriggerNames(value); return *this;}

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& WithTriggerNames(Aws::Vector<Aws::String>&& value) { SetTriggerNames(std::move(value)); return *this;}

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& AddTriggerNames(const Aws::String& value) { m_triggerNamesHasBeenSet = true; m_triggerNames.push_back(value); return *this; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& AddTriggerNames(Aws::String&& value) { m_triggerNamesHasBeenSet = true; m_triggerNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of trigger names, which may be the names returned from the
     * <code>ListTriggers</code> operation.</p>
     */
    inline BatchGetTriggersRequest& AddTriggerNames(const char* value) { m_triggerNamesHasBeenSet = true; m_triggerNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_triggerNames;
    bool m_triggerNamesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
