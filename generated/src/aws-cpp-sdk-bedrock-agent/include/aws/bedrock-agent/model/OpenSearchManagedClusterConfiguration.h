/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/OpenSearchManagedClusterFieldMapping.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains details about the Managed Cluster configuration of the knowledge
   * base in Amazon OpenSearch Service. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-setup-osm.html">Create
   * a vector index in OpenSearch Managed Cluster</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/OpenSearchManagedClusterConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenSearchManagedClusterConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API OpenSearchManagedClusterConfiguration() = default;
    AWS_BEDROCKAGENT_API OpenSearchManagedClusterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API OpenSearchManagedClusterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint URL the OpenSearch domain.</p>
     */
    inline const Aws::String& GetDomainEndpoint() const { return m_domainEndpoint; }
    inline bool DomainEndpointHasBeenSet() const { return m_domainEndpointHasBeenSet; }
    template<typename DomainEndpointT = Aws::String>
    void SetDomainEndpoint(DomainEndpointT&& value) { m_domainEndpointHasBeenSet = true; m_domainEndpoint = std::forward<DomainEndpointT>(value); }
    template<typename DomainEndpointT = Aws::String>
    OpenSearchManagedClusterConfiguration& WithDomainEndpoint(DomainEndpointT&& value) { SetDomainEndpoint(std::forward<DomainEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OpenSearch domain.</p>
     */
    inline const Aws::String& GetDomainArn() const { return m_domainArn; }
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }
    template<typename DomainArnT = Aws::String>
    void SetDomainArn(DomainArnT&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::forward<DomainArnT>(value); }
    template<typename DomainArnT = Aws::String>
    OpenSearchManagedClusterConfiguration& WithDomainArn(DomainArnT&& value) { SetDomainArn(std::forward<DomainArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector store.</p>
     */
    inline const Aws::String& GetVectorIndexName() const { return m_vectorIndexName; }
    inline bool VectorIndexNameHasBeenSet() const { return m_vectorIndexNameHasBeenSet; }
    template<typename VectorIndexNameT = Aws::String>
    void SetVectorIndexName(VectorIndexNameT&& value) { m_vectorIndexNameHasBeenSet = true; m_vectorIndexName = std::forward<VectorIndexNameT>(value); }
    template<typename VectorIndexNameT = Aws::String>
    OpenSearchManagedClusterConfiguration& WithVectorIndexName(VectorIndexNameT&& value) { SetVectorIndexName(std::forward<VectorIndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the names of the fields to which to map information about the vector
     * store.</p>
     */
    inline const OpenSearchManagedClusterFieldMapping& GetFieldMapping() const { return m_fieldMapping; }
    inline bool FieldMappingHasBeenSet() const { return m_fieldMappingHasBeenSet; }
    template<typename FieldMappingT = OpenSearchManagedClusterFieldMapping>
    void SetFieldMapping(FieldMappingT&& value) { m_fieldMappingHasBeenSet = true; m_fieldMapping = std::forward<FieldMappingT>(value); }
    template<typename FieldMappingT = OpenSearchManagedClusterFieldMapping>
    OpenSearchManagedClusterConfiguration& WithFieldMapping(FieldMappingT&& value) { SetFieldMapping(std::forward<FieldMappingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainEndpoint;
    bool m_domainEndpointHasBeenSet = false;

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    Aws::String m_vectorIndexName;
    bool m_vectorIndexNameHasBeenSet = false;

    OpenSearchManagedClusterFieldMapping m_fieldMapping;
    bool m_fieldMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
