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
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsRequest : public ConfigServiceRequest
  {
  public:
    DescribeRetentionConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRetentionConfigurations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetRetentionConfigurationNames() const{ return m_retentionConfigurationNames; }

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline bool RetentionConfigurationNamesHasBeenSet() const { return m_retentionConfigurationNamesHasBeenSet; }

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline void SetRetentionConfigurationNames(const Aws::Vector<Aws::String>& value) { m_retentionConfigurationNamesHasBeenSet = true; m_retentionConfigurationNames = value; }

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline void SetRetentionConfigurationNames(Aws::Vector<Aws::String>&& value) { m_retentionConfigurationNamesHasBeenSet = true; m_retentionConfigurationNames = std::move(value); }

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline DescribeRetentionConfigurationsRequest& WithRetentionConfigurationNames(const Aws::Vector<Aws::String>& value) { SetRetentionConfigurationNames(value); return *this;}

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline DescribeRetentionConfigurationsRequest& WithRetentionConfigurationNames(Aws::Vector<Aws::String>&& value) { SetRetentionConfigurationNames(std::move(value)); return *this;}

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline DescribeRetentionConfigurationsRequest& AddRetentionConfigurationNames(const Aws::String& value) { m_retentionConfigurationNamesHasBeenSet = true; m_retentionConfigurationNames.push_back(value); return *this; }

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline DescribeRetentionConfigurationsRequest& AddRetentionConfigurationNames(Aws::String&& value) { m_retentionConfigurationNamesHasBeenSet = true; m_retentionConfigurationNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, AWS Config returns details for all the retention
     * configurations for that account.</p> <note> <p>Currently, AWS Config supports
     * only one retention configuration per region in your account.</p> </note>
     */
    inline DescribeRetentionConfigurationsRequest& AddRetentionConfigurationNames(const char* value) { m_retentionConfigurationNamesHasBeenSet = true; m_retentionConfigurationNames.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeRetentionConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeRetentionConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeRetentionConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_retentionConfigurationNames;
    bool m_retentionConfigurationNamesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
