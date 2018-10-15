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
     * <p>Specify a region (e.g. <code>us-east-2</code>) to only list functions that
     * were created in that region, or <code>ALL</code> to include functions replicated
     * from any region. If specified, you also must specify the
     * <code>FunctionVersion</code>.</p>
     */
    inline const Aws::String& GetMasterRegion() const{ return m_masterRegion; }

    /**
     * <p>Specify a region (e.g. <code>us-east-2</code>) to only list functions that
     * were created in that region, or <code>ALL</code> to include functions replicated
     * from any region. If specified, you also must specify the
     * <code>FunctionVersion</code>.</p>
     */
    inline void SetMasterRegion(const Aws::String& value) { m_masterRegionHasBeenSet = true; m_masterRegion = value; }

    /**
     * <p>Specify a region (e.g. <code>us-east-2</code>) to only list functions that
     * were created in that region, or <code>ALL</code> to include functions replicated
     * from any region. If specified, you also must specify the
     * <code>FunctionVersion</code>.</p>
     */
    inline void SetMasterRegion(Aws::String&& value) { m_masterRegionHasBeenSet = true; m_masterRegion = std::move(value); }

    /**
     * <p>Specify a region (e.g. <code>us-east-2</code>) to only list functions that
     * were created in that region, or <code>ALL</code> to include functions replicated
     * from any region. If specified, you also must specify the
     * <code>FunctionVersion</code>.</p>
     */
    inline void SetMasterRegion(const char* value) { m_masterRegionHasBeenSet = true; m_masterRegion.assign(value); }

    /**
     * <p>Specify a region (e.g. <code>us-east-2</code>) to only list functions that
     * were created in that region, or <code>ALL</code> to include functions replicated
     * from any region. If specified, you also must specify the
     * <code>FunctionVersion</code>.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(const Aws::String& value) { SetMasterRegion(value); return *this;}

    /**
     * <p>Specify a region (e.g. <code>us-east-2</code>) to only list functions that
     * were created in that region, or <code>ALL</code> to include functions replicated
     * from any region. If specified, you also must specify the
     * <code>FunctionVersion</code>.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(Aws::String&& value) { SetMasterRegion(std::move(value)); return *this;}

    /**
     * <p>Specify a region (e.g. <code>us-east-2</code>) to only list functions that
     * were created in that region, or <code>ALL</code> to include functions replicated
     * from any region. If specified, you also must specify the
     * <code>FunctionVersion</code>.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(const char* value) { SetMasterRegion(value); return *this;}


    /**
     * <p>Set to <code>ALL</code> to list all published versions. If not specified,
     * only the latest unpublished version ARN is returned.</p>
     */
    inline const FunctionVersion& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>Set to <code>ALL</code> to list all published versions. If not specified,
     * only the latest unpublished version ARN is returned.</p>
     */
    inline void SetFunctionVersion(const FunctionVersion& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Set to <code>ALL</code> to list all published versions. If not specified,
     * only the latest unpublished version ARN is returned.</p>
     */
    inline void SetFunctionVersion(FunctionVersion&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>Set to <code>ALL</code> to list all published versions. If not specified,
     * only the latest unpublished version ARN is returned.</p>
     */
    inline ListFunctionsRequest& WithFunctionVersion(const FunctionVersion& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Set to <code>ALL</code> to list all published versions. If not specified,
     * only the latest unpublished version ARN is returned.</p>
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
     * return in response. This parameter value must be greater than 0. The absolute
     * maximum of AWS Lambda functions that can be returned is 50.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda functions to
     * return in response. This parameter value must be greater than 0. The absolute
     * maximum of AWS Lambda functions that can be returned is 50.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Optional integer. Specifies the maximum number of AWS Lambda functions to
     * return in response. This parameter value must be greater than 0. The absolute
     * maximum of AWS Lambda functions that can be returned is 50.</p>
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
