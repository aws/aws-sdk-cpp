/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/elasticfilesystem/model/ResourceIdType.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class AWS_EFS_API PutAccountPreferencesRequest : public EFSRequest
  {
  public:
    PutAccountPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountPreferences"; }

    Aws::String SerializePayload() const override;


    
    inline const ResourceIdType& GetResourceIdType() const{ return m_resourceIdType; }

    
    inline bool ResourceIdTypeHasBeenSet() const { return m_resourceIdTypeHasBeenSet; }

    
    inline void SetResourceIdType(const ResourceIdType& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = value; }

    
    inline void SetResourceIdType(ResourceIdType&& value) { m_resourceIdTypeHasBeenSet = true; m_resourceIdType = std::move(value); }

    
    inline PutAccountPreferencesRequest& WithResourceIdType(const ResourceIdType& value) { SetResourceIdType(value); return *this;}

    
    inline PutAccountPreferencesRequest& WithResourceIdType(ResourceIdType&& value) { SetResourceIdType(std::move(value)); return *this;}

  private:

    ResourceIdType m_resourceIdType;
    bool m_resourceIdTypeHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
