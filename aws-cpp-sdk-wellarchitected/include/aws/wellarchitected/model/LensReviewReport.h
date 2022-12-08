/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A report of a lens review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensReviewReport">AWS
   * API Reference</a></p>
   */
  class LensReviewReport
  {
  public:
    AWS_WELLARCHITECTED_API LensReviewReport();
    AWS_WELLARCHITECTED_API LensReviewReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensReviewReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline LensReviewReport& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline LensReviewReport& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline LensReviewReport& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline LensReviewReport& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline LensReviewReport& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline LensReviewReport& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    
    inline const Aws::String& GetBase64String() const{ return m_base64String; }

    
    inline bool Base64StringHasBeenSet() const { return m_base64StringHasBeenSet; }

    
    inline void SetBase64String(const Aws::String& value) { m_base64StringHasBeenSet = true; m_base64String = value; }

    
    inline void SetBase64String(Aws::String&& value) { m_base64StringHasBeenSet = true; m_base64String = std::move(value); }

    
    inline void SetBase64String(const char* value) { m_base64StringHasBeenSet = true; m_base64String.assign(value); }

    
    inline LensReviewReport& WithBase64String(const Aws::String& value) { SetBase64String(value); return *this;}

    
    inline LensReviewReport& WithBase64String(Aws::String&& value) { SetBase64String(std::move(value)); return *this;}

    
    inline LensReviewReport& WithBase64String(const char* value) { SetBase64String(value); return *this;}

  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_base64String;
    bool m_base64StringHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
