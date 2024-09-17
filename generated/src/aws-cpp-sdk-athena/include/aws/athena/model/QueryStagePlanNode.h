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
    AWS_ATHENA_API QueryStagePlanNode();
    AWS_ATHENA_API QueryStagePlanNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryStagePlanNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the query stage plan that describes the operation this stage is
     * performing as part of query execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline QueryStagePlanNode& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline QueryStagePlanNode& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline QueryStagePlanNode& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the operation this query stage plan node is performing.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline QueryStagePlanNode& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline QueryStagePlanNode& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline QueryStagePlanNode& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage plan information such as name, identifier, sub plans, and remote
     * sources of child plan nodes/</p>
     */
    inline const Aws::Vector<QueryStagePlanNode>& GetChildren() const{ return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    inline void SetChildren(const Aws::Vector<QueryStagePlanNode>& value) { m_childrenHasBeenSet = true; m_children = value; }
    inline void SetChildren(Aws::Vector<QueryStagePlanNode>&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }
    inline QueryStagePlanNode& WithChildren(const Aws::Vector<QueryStagePlanNode>& value) { SetChildren(value); return *this;}
    inline QueryStagePlanNode& WithChildren(Aws::Vector<QueryStagePlanNode>&& value) { SetChildren(std::move(value)); return *this;}
    inline QueryStagePlanNode& AddChildren(const QueryStagePlanNode& value) { m_childrenHasBeenSet = true; m_children.push_back(value); return *this; }
    inline QueryStagePlanNode& AddChildren(QueryStagePlanNode&& value) { m_childrenHasBeenSet = true; m_children.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source plan node IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoteSources() const{ return m_remoteSources; }
    inline bool RemoteSourcesHasBeenSet() const { return m_remoteSourcesHasBeenSet; }
    inline void SetRemoteSources(const Aws::Vector<Aws::String>& value) { m_remoteSourcesHasBeenSet = true; m_remoteSources = value; }
    inline void SetRemoteSources(Aws::Vector<Aws::String>&& value) { m_remoteSourcesHasBeenSet = true; m_remoteSources = std::move(value); }
    inline QueryStagePlanNode& WithRemoteSources(const Aws::Vector<Aws::String>& value) { SetRemoteSources(value); return *this;}
    inline QueryStagePlanNode& WithRemoteSources(Aws::Vector<Aws::String>&& value) { SetRemoteSources(std::move(value)); return *this;}
    inline QueryStagePlanNode& AddRemoteSources(const Aws::String& value) { m_remoteSourcesHasBeenSet = true; m_remoteSources.push_back(value); return *this; }
    inline QueryStagePlanNode& AddRemoteSources(Aws::String&& value) { m_remoteSourcesHasBeenSet = true; m_remoteSources.push_back(std::move(value)); return *this; }
    inline QueryStagePlanNode& AddRemoteSources(const char* value) { m_remoteSourcesHasBeenSet = true; m_remoteSources.push_back(value); return *this; }
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
