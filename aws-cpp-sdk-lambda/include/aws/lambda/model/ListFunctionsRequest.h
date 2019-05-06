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
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline const Aws::String& GetMasterRegion() const{ return m_masterRegion; }

    /**
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline bool MasterRegionHasBeenSet() const { return m_masterRegionHasBeenSet; }

    /**
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline void SetMasterRegion(const Aws::String& value) { m_masterRegionHasBeenSet = true; m_masterRegion = value; }

    /**
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline void SetMasterRegion(Aws::String&& value) { m_masterRegionHasBeenSet = true; m_masterRegion = std::move(value); }

    /**
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline void SetMasterRegion(const char* value) { m_masterRegionHasBeenSet = true; m_masterRegion.assign(value); }

    /**
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(const Aws::String& value) { SetMasterRegion(value); return *this;}

    /**
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(Aws::String&& value) { SetMasterRegion(std::move(value)); return *this;}

    /**
     * <p>For Lambda@Edge functions, the AWS Region of the master function. For
     * example, <code>us-east-2</code> or <code>ALL</code>. If specified, you must set
     * <code>FunctionVersion</code> to <code>ALL</code>.</p>
     */
    inline ListFunctionsRequest& WithMasterRegion(const char* value) { SetMasterRegion(value); return *this;}


    /**
     * <p>Set to <code>ALL</code> to include entries for all published versions of each
     * function.</p>
     */
    inline const FunctionVersion& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>Set to <code>ALL</code> to include entries for all published versions of each
     * function.</p>
     */
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }

    /**
     * <p>Set to <code>ALL</code> to include entries for all published versions of each
     * function.</p>
     */
    inline void SetFunctionVersion(const FunctionVersion& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Set to <code>ALL</code> to include entries for all published versions of each
     * function.</p>
     */
    inline void SetFunctionVersion(FunctionVersion&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>Set to <code>ALL</code> to include entries for all published versions of each
     * function.</p>
     */
    inline ListFunctionsRequest& WithFunctionVersion(const FunctionVersion& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Set to <code>ALL</code> to include entries for all published versions of each
     * function.</p>
     */
    inline ListFunctionsRequest& WithFunctionVersion(FunctionVersion&& value) { SetFunctionVersion(std::move(value)); return *this;}


    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline ListFunctionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline ListFunctionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline ListFunctionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Specify a value between 1 and 50 to limit the number of functions in the
     * response.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Specify a value between 1 and 50 to limit the number of functions in the
     * response.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>Specify a value between 1 and 50 to limit the number of functions in the
     * response.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Specify a value between 1 and 50 to limit the number of functions in the
     * response.</p>
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
