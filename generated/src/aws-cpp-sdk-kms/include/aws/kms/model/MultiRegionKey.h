/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Describes the primary or replica key in a multi-Region key.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/MultiRegionKey">AWS
   * API Reference</a></p>
   */
  class MultiRegionKey
  {
  public:
    AWS_KMS_API MultiRegionKey();
    AWS_KMS_API MultiRegionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API MultiRegionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline MultiRegionKey& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline MultiRegionKey& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Displays the key ARN of a primary or replica key of a multi-Region key.</p>
     */
    inline MultiRegionKey& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline MultiRegionKey& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline MultiRegionKey& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Displays the Amazon Web Services Region of a primary or replica key in a
     * multi-Region key.</p>
     */
    inline MultiRegionKey& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
