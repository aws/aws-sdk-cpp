/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to list the configuration sets associated with your AWS
   * account. Configuration sets enable you to publish email sending events. For
   * information about using configuration sets, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API ListConfigurationSetsRequest : public SESRequest
  {
  public:
    ListConfigurationSetsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A token returned from a previous call to <code>ListConfigurationSets</code>
     * to indicate the position of the configuration set in the configuration set
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>ListConfigurationSets</code>
     * to indicate the position of the configuration set in the configuration set
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListConfigurationSets</code>
     * to indicate the position of the configuration set in the configuration set
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListConfigurationSets</code>
     * to indicate the position of the configuration set in the configuration set
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to <code>ListConfigurationSets</code>
     * to indicate the position of the configuration set in the configuration set
     * list.</p>
     */
    inline ListConfigurationSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListConfigurationSets</code>
     * to indicate the position of the configuration set in the configuration set
     * list.</p>
     */
    inline ListConfigurationSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListConfigurationSets</code>
     * to indicate the position of the configuration set in the configuration set
     * list.</p>
     */
    inline ListConfigurationSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The number of configuration sets to return.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The number of configuration sets to return.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The number of configuration sets to return.</p>
     */
    inline ListConfigurationSetsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
