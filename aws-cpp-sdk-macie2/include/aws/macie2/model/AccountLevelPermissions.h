/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/BlockPublicAccess.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the account-level permissions settings that apply
   * to an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AccountLevelPermissions">AWS
   * API Reference</a></p>
   */
  class AccountLevelPermissions
  {
  public:
    AWS_MACIE2_API AccountLevelPermissions();
    AWS_MACIE2_API AccountLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AccountLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The block public access settings for the Amazon Web Services account that
     * owns the bucket.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const{ return m_blockPublicAccess; }

    /**
     * <p>The block public access settings for the Amazon Web Services account that
     * owns the bucket.</p>
     */
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }

    /**
     * <p>The block public access settings for the Amazon Web Services account that
     * owns the bucket.</p>
     */
    inline void SetBlockPublicAccess(const BlockPublicAccess& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = value; }

    /**
     * <p>The block public access settings for the Amazon Web Services account that
     * owns the bucket.</p>
     */
    inline void SetBlockPublicAccess(BlockPublicAccess&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::move(value); }

    /**
     * <p>The block public access settings for the Amazon Web Services account that
     * owns the bucket.</p>
     */
    inline AccountLevelPermissions& WithBlockPublicAccess(const BlockPublicAccess& value) { SetBlockPublicAccess(value); return *this;}

    /**
     * <p>The block public access settings for the Amazon Web Services account that
     * owns the bucket.</p>
     */
    inline AccountLevelPermissions& WithBlockPublicAccess(BlockPublicAccess&& value) { SetBlockPublicAccess(std::move(value)); return *this;}

  private:

    BlockPublicAccess m_blockPublicAccess;
    bool m_blockPublicAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
