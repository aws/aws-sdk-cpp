/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/S3DataSource.h>
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
   * <p>Information about the source of the data used by the Amazon Braket
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_BRAKET_API DataSource();
    AWS_BRAKET_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the data stored in Amazon S3 used by the Amazon Braket
     * job.</p>
     */
    inline const S3DataSource& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>Information about the data stored in Amazon S3 used by the Amazon Braket
     * job.</p>
     */
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

    /**
     * <p>Information about the data stored in Amazon S3 used by the Amazon Braket
     * job.</p>
     */
    inline void SetS3DataSource(const S3DataSource& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    /**
     * <p>Information about the data stored in Amazon S3 used by the Amazon Braket
     * job.</p>
     */
    inline void SetS3DataSource(S3DataSource&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    /**
     * <p>Information about the data stored in Amazon S3 used by the Amazon Braket
     * job.</p>
     */
    inline DataSource& WithS3DataSource(const S3DataSource& value) { SetS3DataSource(value); return *this;}

    /**
     * <p>Information about the data stored in Amazon S3 used by the Amazon Braket
     * job.</p>
     */
    inline DataSource& WithS3DataSource(S3DataSource&& value) { SetS3DataSource(std::move(value)); return *this;}

  private:

    S3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
