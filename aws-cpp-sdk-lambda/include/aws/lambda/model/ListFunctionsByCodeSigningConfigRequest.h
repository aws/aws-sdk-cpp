/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListFunctionsByCodeSigningConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API ListFunctionsByCodeSigningConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFunctionsByCodeSigningConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline const Aws::String& GetCodeSigningConfigArn() const{ return m_codeSigningConfigArn; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline bool CodeSigningConfigArnHasBeenSet() const { return m_codeSigningConfigArnHasBeenSet; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(const Aws::String& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = value; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(Aws::String&& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = std::move(value); }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(const char* value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn.assign(value); }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline ListFunctionsByCodeSigningConfigRequest& WithCodeSigningConfigArn(const Aws::String& value) { SetCodeSigningConfigArn(value); return *this;}

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline ListFunctionsByCodeSigningConfigRequest& WithCodeSigningConfigArn(Aws::String&& value) { SetCodeSigningConfigArn(std::move(value)); return *this;}

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline ListFunctionsByCodeSigningConfigRequest& WithCodeSigningConfigArn(const char* value) { SetCodeSigningConfigArn(value); return *this;}


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
    inline ListFunctionsByCodeSigningConfigRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline ListFunctionsByCodeSigningConfigRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline ListFunctionsByCodeSigningConfigRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Maximum number of items to return.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Maximum number of items to return.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>Maximum number of items to return.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Maximum number of items to return.</p>
     */
    inline ListFunctionsByCodeSigningConfigRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_codeSigningConfigArn;
    bool m_codeSigningConfigArnHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
