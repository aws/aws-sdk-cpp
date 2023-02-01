/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>Details about the extension version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ExtensionVersionDetails">AWS
   * API Reference</a></p>
   */
  class ExtensionVersionDetails
  {
  public:
    AWS_GAMESPARKS_API ExtensionVersionDetails();
    AWS_GAMESPARKS_API ExtensionVersionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API ExtensionVersionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the extension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the extension.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the extension.</p>
     */
    inline ExtensionVersionDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline ExtensionVersionDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline ExtensionVersionDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline ExtensionVersionDetails& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline ExtensionVersionDetails& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline ExtensionVersionDetails& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline ExtensionVersionDetails& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline ExtensionVersionDetails& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The model that defines the interface for this extension version.</p>
     */
    inline ExtensionVersionDetails& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The version of the extension.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the extension.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the extension.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the extension.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the extension.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the extension.</p>
     */
    inline ExtensionVersionDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the extension.</p>
     */
    inline ExtensionVersionDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the extension.</p>
     */
    inline ExtensionVersionDetails& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
