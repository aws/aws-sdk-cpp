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
    AWS_AMPLIFYUIBUILDER_API GraphQLRenderConfig() = default;
    AWS_AMPLIFYUIBUILDER_API GraphQLRenderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API GraphQLRenderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the GraphQL types file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetTypesFilePath() const { return m_typesFilePath; }
    inline bool TypesFilePathHasBeenSet() const { return m_typesFilePathHasBeenSet; }
    template<typename TypesFilePathT = Aws::String>
    void SetTypesFilePath(TypesFilePathT&& value) { m_typesFilePathHasBeenSet = true; m_typesFilePath = std::forward<TypesFilePathT>(value); }
    template<typename TypesFilePathT = Aws::String>
    GraphQLRenderConfig& WithTypesFilePath(TypesFilePathT&& value) { SetTypesFilePath(std::forward<TypesFilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL queries file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetQueriesFilePath() const { return m_queriesFilePath; }
    inline bool QueriesFilePathHasBeenSet() const { return m_queriesFilePathHasBeenSet; }
    template<typename QueriesFilePathT = Aws::String>
    void SetQueriesFilePath(QueriesFilePathT&& value) { m_queriesFilePathHasBeenSet = true; m_queriesFilePath = std::forward<QueriesFilePathT>(value); }
    template<typename QueriesFilePathT = Aws::String>
    GraphQLRenderConfig& WithQueriesFilePath(QueriesFilePathT&& value) { SetQueriesFilePath(std::forward<QueriesFilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL mutations file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetMutationsFilePath() const { return m_mutationsFilePath; }
    inline bool MutationsFilePathHasBeenSet() const { return m_mutationsFilePathHasBeenSet; }
    template<typename MutationsFilePathT = Aws::String>
    void SetMutationsFilePath(MutationsFilePathT&& value) { m_mutationsFilePathHasBeenSet = true; m_mutationsFilePath = std::forward<MutationsFilePathT>(value); }
    template<typename MutationsFilePathT = Aws::String>
    GraphQLRenderConfig& WithMutationsFilePath(MutationsFilePathT&& value) { SetMutationsFilePath(std::forward<MutationsFilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL subscriptions file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetSubscriptionsFilePath() const { return m_subscriptionsFilePath; }
    inline bool SubscriptionsFilePathHasBeenSet() const { return m_subscriptionsFilePathHasBeenSet; }
    template<typename SubscriptionsFilePathT = Aws::String>
    void SetSubscriptionsFilePath(SubscriptionsFilePathT&& value) { m_subscriptionsFilePathHasBeenSet = true; m_subscriptionsFilePath = std::forward<SubscriptionsFilePathT>(value); }
    template<typename SubscriptionsFilePathT = Aws::String>
    GraphQLRenderConfig& WithSubscriptionsFilePath(SubscriptionsFilePathT&& value) { SetSubscriptionsFilePath(std::forward<SubscriptionsFilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the GraphQL fragments file, relative to the component output
     * directory.</p>
     */
    inline const Aws::String& GetFragmentsFilePath() const { return m_fragmentsFilePath; }
    inline bool FragmentsFilePathHasBeenSet() const { return m_fragmentsFilePathHasBeenSet; }
    template<typename FragmentsFilePathT = Aws::String>
    void SetFragmentsFilePath(FragmentsFilePathT&& value) { m_fragmentsFilePathHasBeenSet = true; m_fragmentsFilePath = std::forward<FragmentsFilePathT>(value); }
    template<typename FragmentsFilePathT = Aws::String>
    GraphQLRenderConfig& WithFragmentsFilePath(FragmentsFilePathT&& value) { SetFragmentsFilePath(std::forward<FragmentsFilePathT>(value)); return *this;}
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
