﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphRequest.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
#include <utility>

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

  /**
   */
  class AWS_IOTTHINGSGRAPH_API CreateSystemTemplateRequest : public IoTThingsGraphRequest
  {
  public:
    CreateSystemTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSystemTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>DefinitionDocument</code> used to create the system.</p>
     */
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    /**
     * <p>The <code>DefinitionDocument</code> used to create the system.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The <code>DefinitionDocument</code> used to create the system.</p>
     */
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The <code>DefinitionDocument</code> used to create the system.</p>
     */
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The <code>DefinitionDocument</code> used to create the system.</p>
     */
    inline CreateSystemTemplateRequest& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    /**
     * <p>The <code>DefinitionDocument</code> used to create the system.</p>
     */
    inline CreateSystemTemplateRequest& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The namespace version in which the system is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline long long GetCompatibleNamespaceVersion() const{ return m_compatibleNamespaceVersion; }

    /**
     * <p>The namespace version in which the system is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline bool CompatibleNamespaceVersionHasBeenSet() const { return m_compatibleNamespaceVersionHasBeenSet; }

    /**
     * <p>The namespace version in which the system is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline void SetCompatibleNamespaceVersion(long long value) { m_compatibleNamespaceVersionHasBeenSet = true; m_compatibleNamespaceVersion = value; }

    /**
     * <p>The namespace version in which the system is to be created.</p> <p>If no
     * value is specified, the latest version is used by default.</p>
     */
    inline CreateSystemTemplateRequest& WithCompatibleNamespaceVersion(long long value) { SetCompatibleNamespaceVersion(value); return *this;}

  private:

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;

    long long m_compatibleNamespaceVersion;
    bool m_compatibleNamespaceVersionHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
