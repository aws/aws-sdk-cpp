/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>

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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The S3 object that is the asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/S3SnapshotAsset">AWS
   * API Reference</a></p>
   */
  class AWS_DATAEXCHANGE_API S3SnapshotAsset
  {
  public:
    S3SnapshotAsset();
    S3SnapshotAsset(Aws::Utils::Json::JsonView jsonValue);
    S3SnapshotAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the S3 object that is the object.</p>
     */
    inline double GetSize() const{ return m_size; }

    /**
     * <p>The size of the S3 object that is the object.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the S3 object that is the object.</p>
     */
    inline void SetSize(double value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the S3 object that is the object.</p>
     */
    inline S3SnapshotAsset& WithSize(double value) { SetSize(value); return *this;}

  private:

    double m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
