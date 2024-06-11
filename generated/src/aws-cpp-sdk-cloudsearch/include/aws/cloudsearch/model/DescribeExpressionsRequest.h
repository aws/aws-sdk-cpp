﻿/**
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
   * <p>Container for the parameters to the <code><a>DescribeDomains</a></code>
   * operation. Specifies the name of the domain you want to describe. To restrict
   * the response to particular expressions, specify the names of the expressions you
   * want to describe. To show the active configuration and exclude any pending
   * changes, set the <code>Deployed</code> option to
   * <code>true</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeExpressionsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeExpressionsRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DescribeExpressionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExpressions"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the domain you want to describe.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DescribeExpressionsRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DescribeExpressionsRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DescribeExpressionsRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the <code><a>DescribeExpressions</a></code> response to the specified
     * expressions. If not specified, all expressions are shown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExpressionNames() const{ return m_expressionNames; }
    inline bool ExpressionNamesHasBeenSet() const { return m_expressionNamesHasBeenSet; }
    inline void SetExpressionNames(const Aws::Vector<Aws::String>& value) { m_expressionNamesHasBeenSet = true; m_expressionNames = value; }
    inline void SetExpressionNames(Aws::Vector<Aws::String>&& value) { m_expressionNamesHasBeenSet = true; m_expressionNames = std::move(value); }
    inline DescribeExpressionsRequest& WithExpressionNames(const Aws::Vector<Aws::String>& value) { SetExpressionNames(value); return *this;}
    inline DescribeExpressionsRequest& WithExpressionNames(Aws::Vector<Aws::String>&& value) { SetExpressionNames(std::move(value)); return *this;}
    inline DescribeExpressionsRequest& AddExpressionNames(const Aws::String& value) { m_expressionNamesHasBeenSet = true; m_expressionNames.push_back(value); return *this; }
    inline DescribeExpressionsRequest& AddExpressionNames(Aws::String&& value) { m_expressionNamesHasBeenSet = true; m_expressionNames.push_back(std::move(value)); return *this; }
    inline DescribeExpressionsRequest& AddExpressionNames(const char* value) { m_expressionNamesHasBeenSet = true; m_expressionNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to display the deployed configuration (<code>true</code>) or include
     * any pending changes (<code>false</code>). Defaults to <code>false</code>.</p>
     */
    inline bool GetDeployed() const{ return m_deployed; }
    inline bool DeployedHasBeenSet() const { return m_deployedHasBeenSet; }
    inline void SetDeployed(bool value) { m_deployedHasBeenSet = true; m_deployed = value; }
    inline DescribeExpressionsRequest& WithDeployed(bool value) { SetDeployed(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_expressionNames;
    bool m_expressionNamesHasBeenSet = false;

    bool m_deployed;
    bool m_deployedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
