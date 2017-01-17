﻿/*
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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DescribeIndexFields</a></code>
   * operation. Specifies the name of the domain you want to describe. To restrict
   * the response to particular index fields, specify the names of the index fields
   * you want to describe. To show the active configuration and exclude any pending
   * changes, set the <code>Deployed</code> option to
   * <code>true</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeIndexFieldsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DescribeIndexFieldsRequest : public CloudSearchRequest
  {
  public:
    DescribeIndexFieldsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeIndexFieldsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeIndexFieldsRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline DescribeIndexFieldsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFieldNames() const{ return m_fieldNames; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline void SetFieldNames(const Aws::Vector<Aws::String>& value) { m_fieldNamesHasBeenSet = true; m_fieldNames = value; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline void SetFieldNames(Aws::Vector<Aws::String>&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames = value; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& WithFieldNames(const Aws::Vector<Aws::String>& value) { SetFieldNames(value); return *this;}

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& WithFieldNames(Aws::Vector<Aws::String>&& value) { SetFieldNames(value); return *this;}

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& AddFieldNames(const Aws::String& value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(value); return *this; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& AddFieldNames(Aws::String&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(value); return *this; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& AddFieldNames(const char* value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(value); return *this; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline bool GetDeployed() const{ return m_deployed; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline void SetDeployed(bool value) { m_deployedHasBeenSet = true; m_deployed = value; }

    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline DescribeIndexFieldsRequest& WithDeployed(bool value) { SetDeployed(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::Vector<Aws::String> m_fieldNames;
    bool m_fieldNamesHasBeenSet;
    bool m_deployed;
    bool m_deployedHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
