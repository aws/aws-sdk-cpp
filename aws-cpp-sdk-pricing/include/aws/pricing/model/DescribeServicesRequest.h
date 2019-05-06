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
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/PricingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pricing
{
namespace Model
{

  /**
   */
  class AWS_PRICING_API DescribeServicesRequest : public PricingRequest
  {
  public:
    DescribeServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServices"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline DescribeServicesRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline DescribeServicesRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline DescribeServicesRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline const Aws::String& GetFormatVersion() const{ return m_formatVersion; }

    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline bool FormatVersionHasBeenSet() const { return m_formatVersionHasBeenSet; }

    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline void SetFormatVersion(const Aws::String& value) { m_formatVersionHasBeenSet = true; m_formatVersion = value; }

    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline void SetFormatVersion(Aws::String&& value) { m_formatVersionHasBeenSet = true; m_formatVersion = std::move(value); }

    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline void SetFormatVersion(const char* value) { m_formatVersionHasBeenSet = true; m_formatVersion.assign(value); }

    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline DescribeServicesRequest& WithFormatVersion(const Aws::String& value) { SetFormatVersion(value); return *this;}

    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline DescribeServicesRequest& WithFormatVersion(Aws::String&& value) { SetFormatVersion(std::move(value)); return *this;}

    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline DescribeServicesRequest& WithFormatVersion(const char* value) { SetFormatVersion(value); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline DescribeServicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline DescribeServicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline DescribeServicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results that you want returned in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that you want returned in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results that you want returned in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that you want returned in the response.</p>
     */
    inline DescribeServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_formatVersion;
    bool m_formatVersionHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
