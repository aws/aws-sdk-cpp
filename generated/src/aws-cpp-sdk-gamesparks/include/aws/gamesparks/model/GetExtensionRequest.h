/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameSparks
{
namespace Model
{

  /**
   */
  class GetExtensionRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API GetExtensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExtension"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;


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
    inline GetExtensionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline GetExtensionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the extension.</p>
     */
    inline GetExtensionRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline GetExtensionRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline GetExtensionRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace (qualifier) of the extension.</p>
     */
    inline GetExtensionRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
