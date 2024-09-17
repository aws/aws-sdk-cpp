/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the GraphQL configuration for an API for a code generation
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GraphQLRenderConfig">AWS
   * API Reference</a></p>
   */
  class GraphQLRenderConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API GraphQLRenderConfig();
    AWS_AMPLIFYUIBUILDER_API GraphQLRenderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API GraphQLRenderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the GraphQL types file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetTypesFilePath() const{ return m_typesFilePath; }
    inline bool TypesFilePathHasBeenSet() const { return m_typesFilePathHasBeenSet; }
    inline void SetTypesFilePath(const Aws::String& value) { m_typesFilePathHasBeenSet = true; m_typesFilePath = value; }
    inline void SetTypesFilePath(Aws::String&& value) { m_typesFilePathHasBeenSet = true; m_typesFilePath = std::move(value); }
    inline void SetTypesFilePath(const char* value) { m_typesFilePathHasBeenSet = true; m_typesFilePath.assign(value); }
    inline GraphQLRenderConfig& WithTypesFilePath(const Aws::String& value) { SetTypesFilePath(value); return *this;}
    inline GraphQLRenderConfig& WithTypesFilePath(Aws::String&& value) { SetTypesFilePath(std::move(value)); return *this;}
    inline GraphQLRenderConfig& WithTypesFilePath(const char* value) { SetTypesFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL queries file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetQueriesFilePath() const{ return m_queriesFilePath; }
    inline bool QueriesFilePathHasBeenSet() const { return m_queriesFilePathHasBeenSet; }
    inline void SetQueriesFilePath(const Aws::String& value) { m_queriesFilePathHasBeenSet = true; m_queriesFilePath = value; }
    inline void SetQueriesFilePath(Aws::String&& value) { m_queriesFilePathHasBeenSet = true; m_queriesFilePath = std::move(value); }
    inline void SetQueriesFilePath(const char* value) { m_queriesFilePathHasBeenSet = true; m_queriesFilePath.assign(value); }
    inline GraphQLRenderConfig& WithQueriesFilePath(const Aws::String& value) { SetQueriesFilePath(value); return *this;}
    inline GraphQLRenderConfig& WithQueriesFilePath(Aws::String&& value) { SetQueriesFilePath(std::move(value)); return *this;}
    inline GraphQLRenderConfig& WithQueriesFilePath(const char* value) { SetQueriesFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL mutations file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetMutationsFilePath() const{ return m_mutationsFilePath; }
    inline bool MutationsFilePathHasBeenSet() const { return m_mutationsFilePathHasBeenSet; }
    inline void SetMutationsFilePath(const Aws::String& value) { m_mutationsFilePathHasBeenSet = true; m_mutationsFilePath = value; }
    inline void SetMutationsFilePath(Aws::String&& value) { m_mutationsFilePathHasBeenSet = true; m_mutationsFilePath = std::move(value); }
    inline void SetMutationsFilePath(const char* value) { m_mutationsFilePathHasBeenSet = true; m_mutationsFilePath.assign(value); }
    inline GraphQLRenderConfig& WithMutationsFilePath(const Aws::String& value) { SetMutationsFilePath(value); return *this;}
    inline GraphQLRenderConfig& WithMutationsFilePath(Aws::String&& value) { SetMutationsFilePath(std::move(value)); return *this;}
    inline GraphQLRenderConfig& WithMutationsFilePath(const char* value) { SetMutationsFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL subscriptions file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetSubscriptionsFilePath() const{ return m_subscriptionsFilePath; }
    inline bool SubscriptionsFilePathHasBeenSet() const { return m_subscriptionsFilePathHasBeenSet; }
    inline void SetSubscriptionsFilePath(const Aws::String& value) { m_subscriptionsFilePathHasBeenSet = true; m_subscriptionsFilePath = value; }
    inline void SetSubscriptionsFilePath(Aws::String&& value) { m_subscriptionsFilePathHasBeenSet = true; m_subscriptionsFilePath = std::move(value); }
    inline void SetSubscriptionsFilePath(const char* value) { m_subscriptionsFilePathHasBeenSet = true; m_subscriptionsFilePath.assign(value); }
    inline GraphQLRenderConfig& WithSubscriptionsFilePath(const Aws::String& value) { SetSubscriptionsFilePath(value); return *this;}
    inline GraphQLRenderConfig& WithSubscriptionsFilePath(Aws::String&& value) { SetSubscriptionsFilePath(std::move(value)); return *this;}
    inline GraphQLRenderConfig& WithSubscriptionsFilePath(const char* value) { SetSubscriptionsFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL fragments file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetFragmentsFilePath() const{ return m_fragmentsFilePath; }
    inline bool FragmentsFilePathHasBeenSet() const { return m_fragmentsFilePathHasBeenSet; }
    inline void SetFragmentsFilePath(const Aws::String& value) { m_fragmentsFilePathHasBeenSet = true; m_fragmentsFilePath = value; }
    inline void SetFragmentsFilePath(Aws::String&& value) { m_fragmentsFilePathHasBeenSet = true; m_fragmentsFilePath = std::move(value); }
    inline void SetFragmentsFilePath(const char* value) { m_fragmentsFilePathHasBeenSet = true; m_fragmentsFilePath.assign(value); }
    inline GraphQLRenderConfig& WithFragmentsFilePath(const Aws::String& value) { SetFragmentsFilePath(value); return *this;}
    inline GraphQLRenderConfig& WithFragmentsFilePath(Aws::String&& value) { SetFragmentsFilePath(std::move(value)); return *this;}
    inline GraphQLRenderConfig& WithFragmentsFilePath(const char* value) { SetFragmentsFilePath(value); return *this;}
    ///@}
  private:

    Aws::String m_typesFilePath;
    bool m_typesFilePathHasBeenSet = false;

    Aws::String m_queriesFilePath;
    bool m_queriesFilePathHasBeenSet = false;

    Aws::String m_mutationsFilePath;
    bool m_mutationsFilePathHasBeenSet = false;

    Aws::String m_subscriptionsFilePath;
    bool m_subscriptionsFilePathHasBeenSet = false;

    Aws::String m_fragmentsFilePath;
    bool m_fragmentsFilePathHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
