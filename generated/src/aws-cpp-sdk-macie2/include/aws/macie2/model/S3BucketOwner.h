/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the Amazon Web Services account that owns an S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3BucketOwner">AWS
   * API Reference</a></p>
   */
  class S3BucketOwner
  {
  public:
    AWS_MACIE2_API S3BucketOwner();
    AWS_MACIE2_API S3BucketOwner(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3BucketOwner& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline S3BucketOwner& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline S3BucketOwner& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the account that owns the bucket.</p>
     */
    inline S3BucketOwner& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline S3BucketOwner& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline S3BucketOwner& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The canonical user ID for the account that owns the bucket.</p>
     */
    inline S3BucketOwner& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
