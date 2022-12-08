/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class CreateLensShareRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API CreateLensShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLensShare"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline CreateLensShareRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline CreateLensShareRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline CreateLensShareRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    
    inline const Aws::String& GetSharedWith() const{ return m_sharedWith; }

    
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }

    
    inline void SetSharedWith(const Aws::String& value) { m_sharedWithHasBeenSet = true; m_sharedWith = value; }

    
    inline void SetSharedWith(Aws::String&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::move(value); }

    
    inline void SetSharedWith(const char* value) { m_sharedWithHasBeenSet = true; m_sharedWith.assign(value); }

    
    inline CreateLensShareRequest& WithSharedWith(const Aws::String& value) { SetSharedWith(value); return *this;}

    
    inline CreateLensShareRequest& WithSharedWith(Aws::String&& value) { SetSharedWith(std::move(value)); return *this;}

    
    inline CreateLensShareRequest& WithSharedWith(const char* value) { SetSharedWith(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateLensShareRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateLensShareRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateLensShareRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
