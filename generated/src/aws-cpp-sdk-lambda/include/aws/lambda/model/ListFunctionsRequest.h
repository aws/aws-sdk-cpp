/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListFunctionsRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API ListFunctionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFunctions"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>For Lambda@Edge functions, the Amazon Web Services Region of the master
     * function. For example, <code>us-east-1</code> filters the list of functions to
     * include only Lambda@Edge functions replicated from a master function in US East
     * (N. Virginia). If specified, you must set <code>FunctionVersion</code> to
     * <code>ALL</code>.</p>
     */
    inline const Aws::String& GetMasterRegion() const { return m_masterRegion; }
    inline bool MasterRegionHasBeenSet() const { return m_masterRegionHasBeenSet; }
    template<typename MasterRegionT = Aws::String>
    void SetMasterRegion(MasterRegionT&& value) { m_masterRegionHasBeenSet = true; m_masterRegion = std::forward<MasterRegionT>(value); }
    template<typename MasterRegionT = Aws::String>
    ListFunctionsRequest& WithMasterRegion(MasterRegionT&& value) { SetMasterRegion(std::forward<MasterRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>ALL</code> to include entries for all published versions of each
     * function.</p>
     */
    inline FunctionVersion GetFunctionVersion() const { return m_functionVersion; }
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }
    inline void SetFunctionVersion(FunctionVersion value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }
    inline ListFunctionsRequest& WithFunctionVersion(FunctionVersion value) { SetFunctionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListFunctionsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of functions to return in the response. Note that
     * <code>ListFunctions</code> returns a maximum of 50 items in each response, even
     * if you set the number higher.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListFunctionsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    Aws::String m_masterRegion;
    bool m_masterRegionHasBeenSet = false;

    FunctionVersion m_functionVersion{FunctionVersion::NOT_SET};
    bool m_functionVersionHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
