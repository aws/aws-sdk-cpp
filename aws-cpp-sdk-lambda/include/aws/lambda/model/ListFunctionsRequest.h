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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionVersion.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API ListFunctionsRequest : public LambdaRequest
  {
  public:
    ListFunctionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFunctions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Optional string. If not specified, will return only regular function versions
     * (i.e., non-replicated versions).</p> <p>Valid values are:</p> <p>The region from
     * which the functions are replicated. For example, if you specify
     * <code>us-east-1</code>, only functions replicated from that region will be
     * returned.</p> <p> <code>ALL</code>: Will return all functions from any region.
     * If specified, you also must specify a valid FunctionVersion parameter.</p>
     */
    inline const Aws::String& GetMasterRegion() const{ return m_masterRegion; }

    /**
     * <p>Optional string. If not specified, will return only regular function versions
     * (i.e., non-replicated versions).</p> <p>Valid values are:</p> <p>The region from
     * which the functions are replicated. For example, if you specify
     * <code>us-east-1</code>, only functions replicated from that region will be
     * returned.</p> <p> <code>ALL</code>: Will return all functions from any region.
     * If specified, you also must specify a valid FunctionVersion parameter.</p>
     */
    inline void SetMasterRegion(const Aws::String& value) { m_masterRegionHasBeenSet = true; m_masterRegion = value; }

    /**
     * <p>Optional string. If not specified, will return only regular function versions
     * (i.e., non-replicated versions).</p> <p>Valid values are:</p> <p>The region from
     * which the functions are replicated. For example, if you specify
     * <code>us-east-1</code>, only functions replicated from that region will be
     * returned.</p> <p> <code>ALL</code>: Will return all functions from any region.
     * If specified, you also must specify a valid FunctionVersion parameter.</p>
     */
    inline void SetMasterRegion(Aws::String&& value) { m_masterRegionHasBeenSet = true; m_masterRegion = std::move(value); }

    /**
     * <p>Optional string. If not specified, will return only regular function versions
     * (i.e., non-replicated versions).</p> <p>Valid values are:</p> <p>The region from
     * which the functions are replicated. For example, if you specify
     * <code>us-east-1</code>, only functions replicated from that region will be
     * returned.</p> <p> <code>ALL</code>: Will return all functions from any region.
     * If specified, you also must specify a valid FunctionVersion parameter.</p>
     */
    inline void SetMasterRegion(const char* value) { m_masterRegionHasBeenSet = true; m_masterRegion.assign(value); }

    /**
     * <p>Optional string. If not specified, will return only regular function versions
     * (i.e., non-replicated versions).</p> <p>Valid values are:</p> <p>The region from
     * which the functions are replicated. For example, if you specify
     * <code>us-east-1</code>, only functions replicated from that region will be
     * returned.</p> <p> <code>ALL</code>: Will return all functions from any region.
     * If specified, you also must specify a valid FunctionVersion parameter.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(const Aws::String& value) { SetMasterRegion(value); return *this;}

    /**
     * <p>Optional string. If not specified, will return only regular function versions
     * (i.e., non-replicated versions).</p> <p>Valid values are:</p> <p>The region from
     * which the functions are replicated. For example, if you specify
     * <code>us-east-1</code>, only functions replicated from that region will be
     * returned.</p> <p> <code>ALL</code>: Will return all functions from any region.
     * If specified, you also must specify a valid FunctionVersion parameter.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(Aws::String&& value) { SetMasterRegion(std::move(value)); return *this;}

    /**
     * <p>Optional string. If not specified, will return only regular function versions
     * (i.e., non-replicated versions).</p> <p>Valid values are:</p> <p>The region from
     * which the functions are replicated. For example, if you specify
     * <code>us-east-1</code>, only functions replicated from that region will be
     * returned.</p> <p> <code>ALL</code>: Will return all functions from any region.
     * If specified, you also must specify a valid FunctionVersion parameter.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(const char* value) { SetMasterRegion(value); return *this;}


    /**
     * <p>Optional string. If not specified, only the unqualified functions ARNs
     * (Amazon Resource Names) will be returned.</p> <p>Valid value:</p> <p>
     * <code>ALL</code>: Will return all versions, including <code>$LATEST</code> which
     * will have fully qualified ARNs (Amazon Resource Names).</p>
     */
    inline const FunctionVersion& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>Optional string. If not specified, only the unqualified functions ARNs
     * (Amazon Resource Names) will be returned.</p> <p>Valid value:</p> <p>
     * <code>ALL</code>: Will return all versions, including <code>$LATEST</code> which
     * will have fully qualified ARNs (Amazon Resource Names).</p>
     */
    inline void SetFunctionVersion(const FunctionVersion& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Optional string. If not specified, only the unqualified functions ARNs
     * (Amazon Resource Names) will be returned.</p> <p>Valid value:</p> <p>
     * <code>ALL</code>: Will return all versions, including <code>$LATEST</code> which
     * will have fully qualified ARNs (Amazon Resource Names).</p>
     */
    inline void SetFunctionVersion(FunctionVersion&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>Optional string. If not specified, only the unqualified functions ARNs
     * (Amazon Resource Names) will be returned.</p> <p>Valid value:</p> <p>
     * <code>ALL</code>: Will return all versions, including <code>$LATEST</code> which
     * will have fully qualified ARNs (Amazon Resource Names).</p>
     */
    inline ListFunctionsRequest& WithFunctionVersion(const FunctionVersion& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Optional string. If not specified, only the unqualified functions ARNs
     * (Amazon Resource Names) will be returned.</p> <p>Valid value:</p> <p>
     * <code>ALL</code>: Will return all versions, including <code>$LATEST</code> which
     * will have fully qualified ARNs (Amazon Resource Names).</p>
     */
    inline ListFunctionsRequest& WithFunctionVersion(FunctionVersion&& value) { SetFunctionVersion(std::move(value)); return *this;}


    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListFunctions</code> operation. If present, indicates where to continue
     * the listing. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListFunctions</code> operation. If present, indicates where to continue
     * the listing. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListFunctions</code> operation. If present, indicates where to continue
     * the listing. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListFunctions</code> operation. If present, indicates where to continue
     * the listing. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListFunctions</code> operation. If present, indicates where to continue
     * the listing. </p>
     */
    inline ListFunctionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListFunctions</code> operation. If present, indicates where to continue
     * the listing. </p>
     */
    inline ListFunctionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListFunctions</code> operation. If present, indicates where to continue
     * the listing. </p>
     */
    inline ListFunctionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda functions to
     * return in response. This parameter value must be greater than 0.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda functions to
     * return in response. This parameter value must be greater than 0.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda functions to
     * return in response. This parameter value must be greater than 0.</p>
     */
    inline ListFunctionsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_masterRegion;
    bool m_masterRegionHasBeenSet;

    FunctionVersion m_functionVersion;
    bool m_functionVersionHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
