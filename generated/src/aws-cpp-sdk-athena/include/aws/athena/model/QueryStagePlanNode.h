/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Stage plan information such as name, identifier, sub plans, and remote
   * sources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryStagePlanNode">AWS
   * API Reference</a></p>
   */
  class QueryStagePlanNode
  {
  public:
    AWS_ATHENA_API QueryStagePlanNode() = default;
    AWS_ATHENA_API QueryStagePlanNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryStagePlanNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the query stage plan that describes the operation this stage is
     * performing as part of query execution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QueryStagePlanNode& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the operation this query stage plan node is performing.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    QueryStagePlanNode& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage plan information such as name, identifier, sub plans, and remote
     * sources of child plan nodes/</p>
     */
    inline const Aws::Vector<QueryStagePlanNode>& GetChildren() const { return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    template<typename ChildrenT = Aws::Vector<QueryStagePlanNode>>
    void SetChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children = std::forward<ChildrenT>(value); }
    template<typename ChildrenT = Aws::Vector<QueryStagePlanNode>>
    QueryStagePlanNode& WithChildren(ChildrenT&& value) { SetChildren(std::forward<ChildrenT>(value)); return *this;}
    template<typename ChildrenT = QueryStagePlanNode>
    QueryStagePlanNode& AddChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children.emplace_back(std::forward<ChildrenT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source plan node IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoteSources() const { return m_remoteSources; }
    inline bool RemoteSourcesHasBeenSet() const { return m_remoteSourcesHasBeenSet; }
    template<typename RemoteSourcesT = Aws::Vector<Aws::String>>
    void SetRemoteSources(RemoteSourcesT&& value) { m_remoteSourcesHasBeenSet = true; m_remoteSources = std::forward<RemoteSourcesT>(value); }
    template<typename RemoteSourcesT = Aws::Vector<Aws::String>>
    QueryStagePlanNode& WithRemoteSources(RemoteSourcesT&& value) { SetRemoteSources(std::forward<RemoteSourcesT>(value)); return *this;}
    template<typename RemoteSourcesT = Aws::String>
    QueryStagePlanNode& AddRemoteSources(RemoteSourcesT&& value) { m_remoteSourcesHasBeenSet = true; m_remoteSources.emplace_back(std::forward<RemoteSourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<QueryStagePlanNode> m_children;
    bool m_childrenHasBeenSet = false;

    Aws::Vector<Aws::String> m_remoteSources;
    bool m_remoteSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
