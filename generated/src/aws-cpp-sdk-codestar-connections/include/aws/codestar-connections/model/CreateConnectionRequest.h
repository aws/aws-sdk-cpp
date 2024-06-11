/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/codestar-connections/model/ProviderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-connections/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class CreateConnectionRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API CreateConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnection"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }
    inline CreateConnectionRequest& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}
    inline CreateConnectionRequest& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection to be created.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline CreateConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline CreateConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair to use when tagging the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConnectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateConnectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConnectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateConnectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the host associated with the connection to
     * be created.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }
    inline void SetHostArn(const Aws::String& value) { m_hostArnHasBeenSet = true; m_hostArn = value; }
    inline void SetHostArn(Aws::String&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::move(value); }
    inline void SetHostArn(const char* value) { m_hostArnHasBeenSet = true; m_hostArn.assign(value); }
    inline CreateConnectionRequest& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}
    inline CreateConnectionRequest& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}
    inline CreateConnectionRequest& WithHostArn(const char* value) { SetHostArn(value); return *this;}
    ///@}
  private:

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
