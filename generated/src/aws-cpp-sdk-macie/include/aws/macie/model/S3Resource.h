/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
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
namespace Macie
{
namespace Model
{

  /**
   * <p>(Discontinued) Contains information about the S3 resource. This data type is
   * used as a request parameter in the <code>DisassociateS3Resources</code> action
   * and can be used as a response parameter in the <code>AssociateS3Resources</code>
   * and <code>UpdateS3Resources</code> actions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/S3Resource">AWS
   * API Reference</a></p>
   */
  class S3Resource
  {
  public:
    AWS_MACIE_API S3Resource();
    AWS_MACIE_API S3Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API S3Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline S3Resource& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline S3Resource& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The name of the S3 bucket.</p>
     */
    inline S3Resource& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline S3Resource& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline S3Resource& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The prefix of the S3 bucket.</p>
     */
    inline S3Resource& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
