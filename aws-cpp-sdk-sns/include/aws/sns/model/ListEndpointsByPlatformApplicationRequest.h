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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for ListEndpointsByPlatformApplication action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplicationInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API ListEndpointsByPlatformApplicationRequest : public SNSRequest
  {
  public:
    ListEndpointsByPlatformApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEndpointsByPlatformApplication"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline bool PlatformApplicationArnHasBeenSet() const { return m_platformApplicationArnHasBeenSet; }

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::move(value); }

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(std::move(value)); return *this;}

    /**
     * <p>PlatformApplicationArn for ListEndpointsByPlatformApplicationInput
     * action.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}


    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>NextToken string is used when calling ListEndpointsByPlatformApplication
     * action to retrieve additional records that are available after the first page
     * results.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
