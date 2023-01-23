/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeConformancePackStatusRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePackStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConformancePackStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConformancePackNames() const{ return m_conformancePackNames; }

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline bool ConformancePackNamesHasBeenSet() const { return m_conformancePackNamesHasBeenSet; }

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline void SetConformancePackNames(const Aws::Vector<Aws::String>& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = value; }

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline void SetConformancePackNames(Aws::Vector<Aws::String>&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = std::move(value); }

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline DescribeConformancePackStatusRequest& WithConformancePackNames(const Aws::Vector<Aws::String>& value) { SetConformancePackNames(value); return *this;}

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline DescribeConformancePackStatusRequest& WithConformancePackNames(Aws::Vector<Aws::String>&& value) { SetConformancePackNames(std::move(value)); return *this;}

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline DescribeConformancePackStatusRequest& AddConformancePackNames(const Aws::String& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline DescribeConformancePackStatusRequest& AddConformancePackNames(Aws::String&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline DescribeConformancePackStatusRequest& AddConformancePackNames(const char* value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }


    /**
     * <p>The maximum number of conformance packs status returned on each page.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of conformance packs status returned on each page.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of conformance packs status returned on each page.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of conformance packs status returned on each page.</p>
     */
    inline DescribeConformancePackStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_conformancePackNames;
    bool m_conformancePackNamesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
