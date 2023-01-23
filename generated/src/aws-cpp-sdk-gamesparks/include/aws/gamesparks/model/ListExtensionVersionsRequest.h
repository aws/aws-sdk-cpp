/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GameSparks
{
namespace Model
{

  /**
   */
  class ListExtensionVersionsRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API ListExtensionVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExtensionVersions"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;

    AWS_GAMESPARKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p> <p> Use this parameter with
     * NextToken to get results as a set of sequential pages. </p>
     */
    inline ListExtensionVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name of the extension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the extension.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline ListExtensionVersionsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline ListExtensionVersionsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline ListExtensionVersionsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline ListExtensionVersionsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline ListExtensionVersionsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline ListExtensionVersionsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListExtensionVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListExtensionVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use the token that is returned with a previous call to this
     * operation. To start at the beginning of the result set, do not specify a value.
     * </p>
     */
    inline ListExtensionVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
