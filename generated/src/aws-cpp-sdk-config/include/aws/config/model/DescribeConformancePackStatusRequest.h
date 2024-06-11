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


    ///@{
    /**
     * <p>Comma-separated list of conformance pack names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConformancePackNames() const{ return m_conformancePackNames; }
    inline bool ConformancePackNamesHasBeenSet() const { return m_conformancePackNamesHasBeenSet; }
    inline void SetConformancePackNames(const Aws::Vector<Aws::String>& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = value; }
    inline void SetConformancePackNames(Aws::Vector<Aws::String>&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = std::move(value); }
    inline DescribeConformancePackStatusRequest& WithConformancePackNames(const Aws::Vector<Aws::String>& value) { SetConformancePackNames(value); return *this;}
    inline DescribeConformancePackStatusRequest& WithConformancePackNames(Aws::Vector<Aws::String>&& value) { SetConformancePackNames(std::move(value)); return *this;}
    inline DescribeConformancePackStatusRequest& AddConformancePackNames(const Aws::String& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }
    inline DescribeConformancePackStatusRequest& AddConformancePackNames(Aws::String&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(std::move(value)); return *this; }
    inline DescribeConformancePackStatusRequest& AddConformancePackNames(const char* value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of conformance packs status returned on each page.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeConformancePackStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeConformancePackStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConformancePackStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConformancePackStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
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
