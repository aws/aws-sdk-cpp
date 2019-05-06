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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ParameterStringFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API GetParametersByPathRequest : public SSMRequest
  {
  public:
    GetParametersByPathRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParametersByPath"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline GetParametersByPathRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline GetParametersByPathRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/)
     * and end with the parameter name. A parameter name hierarchy can have a maximum
     * of 15 levels. Here is an example of a hierarchy:
     * <code>/Finance/Prod/IAD/WinServ2016/license33</code> </p>
     */
    inline GetParametersByPathRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Retrieve all parameters within a hierarchy.</p> <important> <p>If a user has
     * access to a path, then the user can access all levels of that path. For example,
     * if a user has permission to access path <code>/a</code>, then the user can also
     * access <code>/a/b</code>. Even if a user has explicitly been denied access in
     * IAM for parameter <code>/a/b</code>, they can still call the GetParametersByPath
     * API action recursively for <code>/a</code> and view <code>/a/b</code>.</p>
     * </important>
     */
    inline bool GetRecursive() const{ return m_recursive; }

    /**
     * <p>Retrieve all parameters within a hierarchy.</p> <important> <p>If a user has
     * access to a path, then the user can access all levels of that path. For example,
     * if a user has permission to access path <code>/a</code>, then the user can also
     * access <code>/a/b</code>. Even if a user has explicitly been denied access in
     * IAM for parameter <code>/a/b</code>, they can still call the GetParametersByPath
     * API action recursively for <code>/a</code> and view <code>/a/b</code>.</p>
     * </important>
     */
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }

    /**
     * <p>Retrieve all parameters within a hierarchy.</p> <important> <p>If a user has
     * access to a path, then the user can access all levels of that path. For example,
     * if a user has permission to access path <code>/a</code>, then the user can also
     * access <code>/a/b</code>. Even if a user has explicitly been denied access in
     * IAM for parameter <code>/a/b</code>, they can still call the GetParametersByPath
     * API action recursively for <code>/a</code> and view <code>/a/b</code>.</p>
     * </important>
     */
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }

    /**
     * <p>Retrieve all parameters within a hierarchy.</p> <important> <p>If a user has
     * access to a path, then the user can access all levels of that path. For example,
     * if a user has permission to access path <code>/a</code>, then the user can also
     * access <code>/a/b</code>. Even if a user has explicitly been denied access in
     * IAM for parameter <code>/a/b</code>, they can still call the GetParametersByPath
     * API action recursively for <code>/a</code> and view <code>/a/b</code>.</p>
     * </important>
     */
    inline GetParametersByPathRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}


    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline const Aws::Vector<ParameterStringFilter>& GetParameterFilters() const{ return m_parameterFilters; }

    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline bool ParameterFiltersHasBeenSet() const { return m_parameterFiltersHasBeenSet; }

    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline void SetParameterFilters(const Aws::Vector<ParameterStringFilter>& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters = value; }

    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline void SetParameterFilters(Aws::Vector<ParameterStringFilter>&& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters = std::move(value); }

    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline GetParametersByPathRequest& WithParameterFilters(const Aws::Vector<ParameterStringFilter>& value) { SetParameterFilters(value); return *this;}

    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline GetParametersByPathRequest& WithParameterFilters(Aws::Vector<ParameterStringFilter>&& value) { SetParameterFilters(std::move(value)); return *this;}

    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline GetParametersByPathRequest& AddParameterFilters(const ParameterStringFilter& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters.push_back(value); return *this; }

    /**
     * <p>Filters to limit the request results.</p> <note> <p>You can't filter using
     * the parameter name.</p> </note>
     */
    inline GetParametersByPathRequest& AddParameterFilters(ParameterStringFilter&& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>Retrieve all parameters in a hierarchy with their value decrypted.</p>
     */
    inline bool GetWithDecryption() const{ return m_withDecryption; }

    /**
     * <p>Retrieve all parameters in a hierarchy with their value decrypted.</p>
     */
    inline bool WithDecryptionHasBeenSet() const { return m_withDecryptionHasBeenSet; }

    /**
     * <p>Retrieve all parameters in a hierarchy with their value decrypted.</p>
     */
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }

    /**
     * <p>Retrieve all parameters in a hierarchy with their value decrypted.</p>
     */
    inline GetParametersByPathRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline GetParametersByPathRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline GetParametersByPathRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline GetParametersByPathRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline GetParametersByPathRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    bool m_recursive;
    bool m_recursiveHasBeenSet;

    Aws::Vector<ParameterStringFilter> m_parameterFilters;
    bool m_parameterFiltersHasBeenSet;

    bool m_withDecryption;
    bool m_withDecryptionHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
