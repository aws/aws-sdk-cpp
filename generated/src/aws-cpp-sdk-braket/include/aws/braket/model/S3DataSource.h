/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Information about the data stored in Amazon S3 used by the Amazon Braket
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/S3DataSource">AWS
   * API Reference</a></p>
   */
  class S3DataSource
  {
  public:
    AWS_BRAKET_API S3DataSource();
    AWS_BRAKET_API S3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API S3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline S3DataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline S3DataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest that locates the S3 data source.</p>
     */
    inline S3DataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
