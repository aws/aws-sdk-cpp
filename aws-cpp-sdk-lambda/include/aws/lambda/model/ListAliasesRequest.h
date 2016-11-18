/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_LAMBDA_API ListAliasesRequest : public LambdaRequest
  {
  public:
    ListAliasesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>Lambda function name for which the alias is created.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Lambda function name for which the alias is created.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Lambda function name for which the alias is created.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Lambda function name for which the alias is created.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Lambda function name for which the alias is created.</p>
     */
    inline ListAliasesRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Lambda function name for which the alias is created.</p>
     */
    inline ListAliasesRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Lambda function name for which the alias is created.</p>
     */
    inline ListAliasesRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>If you specify this optional parameter, the API returns only the aliases that
     * are pointing to the specific Lambda function version, otherwise the API returns
     * all of the aliases created for the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>If you specify this optional parameter, the API returns only the aliases that
     * are pointing to the specific Lambda function version, otherwise the API returns
     * all of the aliases created for the Lambda function.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>If you specify this optional parameter, the API returns only the aliases that
     * are pointing to the specific Lambda function version, otherwise the API returns
     * all of the aliases created for the Lambda function.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>If you specify this optional parameter, the API returns only the aliases that
     * are pointing to the specific Lambda function version, otherwise the API returns
     * all of the aliases created for the Lambda function.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>If you specify this optional parameter, the API returns only the aliases that
     * are pointing to the specific Lambda function version, otherwise the API returns
     * all of the aliases created for the Lambda function.</p>
     */
    inline ListAliasesRequest& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>If you specify this optional parameter, the API returns only the aliases that
     * are pointing to the specific Lambda function version, otherwise the API returns
     * all of the aliases created for the Lambda function.</p>
     */
    inline ListAliasesRequest& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>If you specify this optional parameter, the API returns only the aliases that
     * are pointing to the specific Lambda function version, otherwise the API returns
     * all of the aliases created for the Lambda function.</p>
     */
    inline ListAliasesRequest& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListAliases</code> operation. If present, indicates where to continue the
     * listing.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListAliases</code> operation. If present, indicates where to continue the
     * listing.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListAliases</code> operation. If present, indicates where to continue the
     * listing.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListAliases</code> operation. If present, indicates where to continue the
     * listing.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListAliases</code> operation. If present, indicates where to continue the
     * listing.</p>
     */
    inline ListAliasesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListAliases</code> operation. If present, indicates where to continue the
     * listing.</p>
     */
    inline ListAliasesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Optional string. An opaque pagination token returned from a previous
     * <code>ListAliases</code> operation. If present, indicates where to continue the
     * listing.</p>
     */
    inline ListAliasesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Optional integer. Specifies the maximum number of aliases to return in
     * response. This parameter value must be greater than 0.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Optional integer. Specifies the maximum number of aliases to return in
     * response. This parameter value must be greater than 0.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Optional integer. Specifies the maximum number of aliases to return in
     * response. This parameter value must be greater than 0.</p>
     */
    inline ListAliasesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
