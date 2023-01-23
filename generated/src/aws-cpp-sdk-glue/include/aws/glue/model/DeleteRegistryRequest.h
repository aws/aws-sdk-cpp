/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/RegistryId.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DeleteRegistryRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteRegistryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRegistry"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>This is a wrapper structure that may contain the registry name and Amazon
     * Resource Name (ARN).</p>
     */
    inline const RegistryId& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>This is a wrapper structure that may contain the registry name and Amazon
     * Resource Name (ARN).</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>This is a wrapper structure that may contain the registry name and Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetRegistryId(const RegistryId& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>This is a wrapper structure that may contain the registry name and Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetRegistryId(RegistryId&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>This is a wrapper structure that may contain the registry name and Amazon
     * Resource Name (ARN).</p>
     */
    inline DeleteRegistryRequest& WithRegistryId(const RegistryId& value) { SetRegistryId(value); return *this;}

    /**
     * <p>This is a wrapper structure that may contain the registry name and Amazon
     * Resource Name (ARN).</p>
     */
    inline DeleteRegistryRequest& WithRegistryId(RegistryId&& value) { SetRegistryId(std::move(value)); return *this;}

  private:

    RegistryId m_registryId;
    bool m_registryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
