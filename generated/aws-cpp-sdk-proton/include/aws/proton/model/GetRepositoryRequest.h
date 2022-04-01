﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryProvider.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API GetRepositoryRequest : public ProtonRequest
  {
  public:
    GetRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRepository"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline GetRepositoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline GetRepositoryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The repository name, for example <code>myrepos/myrepo</code>.</p>
     */
    inline GetRepositoryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The repository provider.</p>
     */
    inline const RepositoryProvider& GetProvider() const{ return m_provider; }

    /**
     * <p>The repository provider.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The repository provider.</p>
     */
    inline void SetProvider(const RepositoryProvider& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The repository provider.</p>
     */
    inline void SetProvider(RepositoryProvider&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The repository provider.</p>
     */
    inline GetRepositoryRequest& WithProvider(const RepositoryProvider& value) { SetProvider(value); return *this;}

    /**
     * <p>The repository provider.</p>
     */
    inline GetRepositoryRequest& WithProvider(RepositoryProvider&& value) { SetProvider(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RepositoryProvider m_provider;
    bool m_providerHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
