/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class AWS_WELLARCHITECTED_API GetLensVersionDifferenceRequest : public WellArchitectedRequest
  {
  public:
    GetLensVersionDifferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLensVersionDifference"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline GetLensVersionDifferenceRequest& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline GetLensVersionDifferenceRequest& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline GetLensVersionDifferenceRequest& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The base version of the lens.</p>
     */
    inline const Aws::String& GetBaseLensVersion() const{ return m_baseLensVersion; }

    /**
     * <p>The base version of the lens.</p>
     */
    inline bool BaseLensVersionHasBeenSet() const { return m_baseLensVersionHasBeenSet; }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(const Aws::String& value) { m_baseLensVersionHasBeenSet = true; m_baseLensVersion = value; }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(Aws::String&& value) { m_baseLensVersionHasBeenSet = true; m_baseLensVersion = std::move(value); }

    /**
     * <p>The base version of the lens.</p>
     */
    inline void SetBaseLensVersion(const char* value) { m_baseLensVersionHasBeenSet = true; m_baseLensVersion.assign(value); }

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceRequest& WithBaseLensVersion(const Aws::String& value) { SetBaseLensVersion(value); return *this;}

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceRequest& WithBaseLensVersion(Aws::String&& value) { SetBaseLensVersion(std::move(value)); return *this;}

    /**
     * <p>The base version of the lens.</p>
     */
    inline GetLensVersionDifferenceRequest& WithBaseLensVersion(const char* value) { SetBaseLensVersion(value); return *this;}

  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet;

    Aws::String m_baseLensVersion;
    bool m_baseLensVersionHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
