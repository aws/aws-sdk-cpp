/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains the GraphQL operation to be parsed and executed, if the event target
   * is an AppSync API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/AppSyncParameters">AWS
   * API Reference</a></p>
   */
  class AppSyncParameters
  {
  public:
    AWS_EVENTBRIDGE_API AppSyncParameters();
    AWS_EVENTBRIDGE_API AppSyncParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API AppSyncParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline const Aws::String& GetGraphQLOperation() const{ return m_graphQLOperation; }

    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline bool GraphQLOperationHasBeenSet() const { return m_graphQLOperationHasBeenSet; }

    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline void SetGraphQLOperation(const Aws::String& value) { m_graphQLOperationHasBeenSet = true; m_graphQLOperation = value; }

    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline void SetGraphQLOperation(Aws::String&& value) { m_graphQLOperationHasBeenSet = true; m_graphQLOperation = std::move(value); }

    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline void SetGraphQLOperation(const char* value) { m_graphQLOperationHasBeenSet = true; m_graphQLOperation.assign(value); }

    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline AppSyncParameters& WithGraphQLOperation(const Aws::String& value) { SetGraphQLOperation(value); return *this;}

    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline AppSyncParameters& WithGraphQLOperation(Aws::String&& value) { SetGraphQLOperation(std::move(value)); return *this;}

    /**
     * <p>The GraphQL operation; that is, the query, mutation, or subscription to be
     * parsed and executed by the GraphQL service.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/appsync/latest/devguide/graphql-architecture.html#graphql-operations">Operations</a>
     * in the <i>AppSync User Guide</i>.</p>
     */
    inline AppSyncParameters& WithGraphQLOperation(const char* value) { SetGraphQLOperation(value); return *this;}

  private:

    Aws::String m_graphQLOperation;
    bool m_graphQLOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
