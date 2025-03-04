/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/iot-managed-integrations/model/SchemaVersionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/SchemaVersionVisibility.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class ListSchemaVersionsRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListSchemaVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSchemaVersions"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;

    AWS_IOTMANAGEDINTEGRATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filter on the type of schema version.</p>
     */
    inline const SchemaVersionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SchemaVersionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SchemaVersionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListSchemaVersionsRequest& WithType(const SchemaVersionType& value) { SetType(value); return *this;}
    inline ListSchemaVersionsRequest& WithType(SchemaVersionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSchemaVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSchemaVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSchemaVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSchemaVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the id of the schema version.</p>
     */
    inline const Aws::String& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const Aws::String& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(Aws::String&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline void SetSchemaId(const char* value) { m_schemaIdHasBeenSet = true; m_schemaId.assign(value); }
    inline ListSchemaVersionsRequest& WithSchemaId(const Aws::String& value) { SetSchemaId(value); return *this;}
    inline ListSchemaVersionsRequest& WithSchemaId(Aws::String&& value) { SetSchemaId(std::move(value)); return *this;}
    inline ListSchemaVersionsRequest& WithSchemaId(const char* value) { SetSchemaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on the name of the schema version.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline ListSchemaVersionsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline ListSchemaVersionsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline ListSchemaVersionsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the schema version.</p>
     */
    inline const SchemaVersionVisibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const SchemaVersionVisibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(SchemaVersionVisibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline ListSchemaVersionsRequest& WithVisibility(const SchemaVersionVisibility& value) { SetVisibility(value); return *this;}
    inline ListSchemaVersionsRequest& WithVisibility(SchemaVersionVisibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version. If this is left blank, it defaults to the latest
     * version.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }
    inline ListSchemaVersionsRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline ListSchemaVersionsRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline ListSchemaVersionsRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
    ///@}
  private:

    SchemaVersionType m_type;
    bool m_typeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    SchemaVersionVisibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
