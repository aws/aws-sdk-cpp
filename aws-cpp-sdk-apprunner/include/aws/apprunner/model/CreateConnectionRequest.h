/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ProviderType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class CreateConnectionRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API CreateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline CreateConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline CreateConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>A name for the new connection. It must be unique across all App Runner
     * connections for the Amazon Web Services account in the Amazon Web Services
     * Region.</p>
     */
    inline CreateConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The source repository provider.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The source repository provider.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The source repository provider.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The source repository provider.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The source repository provider.</p>
     */
    inline CreateConnectionRequest& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The source repository provider.</p>
     */
    inline CreateConnectionRequest& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateConnectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateConnectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateConnectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of metadata items that you can associate with your connection
     * resource. A tag is a key-value pair.</p>
     */
    inline CreateConnectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
