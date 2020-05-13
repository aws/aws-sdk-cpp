/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Provides information about account-level permissions settings that apply to
   * an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/AccountLevelPermissions">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API AccountLevelPermissions
  {
  public:
    AccountLevelPermissions();
    AccountLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AccountLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const{ return m_blockPublicAccess; }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline void SetBlockPublicAccess(const BlockPublicAccess& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = value; }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline void SetBlockPublicAccess(BlockPublicAccess&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::move(value); }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline AccountLevelPermissions& WithBlockPublicAccess(const BlockPublicAccess& value) { SetBlockPublicAccess(value); return *this;}

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline AccountLevelPermissions& WithBlockPublicAccess(BlockPublicAccess&& value) { SetBlockPublicAccess(std::move(value)); return *this;}

  private:

    BlockPublicAccess m_blockPublicAccess;
    bool m_blockPublicAccessHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
