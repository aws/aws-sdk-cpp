/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

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
  class DescribeIndexFieldsRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DescribeIndexFieldsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIndexFields"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

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
    inline DescribeIndexFieldsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

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
    inline bool FieldNamesHasBeenSet() const { return m_fieldNamesHasBeenSet; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline void SetFieldNames(const Aws::Vector<Aws::String>& value) { m_fieldNamesHasBeenSet = true; m_fieldNames = value; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline void SetFieldNames(Aws::Vector<Aws::String>&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames = std::move(value); }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& WithFieldNames(const Aws::Vector<Aws::String>& value) { SetFieldNames(value); return *this;}

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& WithFieldNames(Aws::Vector<Aws::String>&& value) { SetFieldNames(std::move(value)); return *this;}

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& AddFieldNames(const Aws::String& value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(value); return *this; }

    /**
     * <p>A list of the index fields you want to describe. If not specified,
     * information is returned for all configured index fields.</p>
     */
    inline DescribeIndexFieldsRequest& AddFieldNames(Aws::String&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(std::move(value)); return *this; }

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
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }

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
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_fieldNames;
    bool m_fieldNamesHasBeenSet = false;

    bool m_deployed;
    bool m_deployedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
