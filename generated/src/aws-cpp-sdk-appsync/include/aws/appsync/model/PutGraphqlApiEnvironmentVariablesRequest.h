/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class PutGraphqlApiEnvironmentVariablesRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API PutGraphqlApiEnvironmentVariablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutGraphqlApiEnvironmentVariables"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the API to which the environmental variable list will be
     * written.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of environmental variables to add to the API.</p> <p>When creating
     * an environmental variable key-value pair, it must follow the additional
     * constraints below:</p> <ul> <li> <p>Keys must begin with a letter.</p> </li>
     * <li> <p>Keys must be at least two characters long.</p> </li> <li> <p>Keys can
     * only contain letters, numbers, and the underscore character (_).</p> </li> <li>
     * <p>Values can be up to 512 characters long.</p> </li> <li> <p>You can configure
     * up to 50 key-value pairs in a GraphQL API.</p> </li> </ul> <p>You can create a
     * list of environmental variables by adding it to the
     * <code>environmentVariables</code> payload as a list in the format
     * <code>{"key1":"value1","key2":"value2", …}</code>. Note that each call of the
     * <code>PutGraphqlApiEnvironmentVariables</code> action will result in the
     * overwriting of the existing environmental variable list of that API. This means
     * the existing environmental variables will be lost. To avoid this, you must
     * include all existing and new environmental variables in the list each time you
     * call this action.</p>
     */
    inline PutGraphqlApiEnvironmentVariablesRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
