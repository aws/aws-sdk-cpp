/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/S3Destination.h>
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
namespace BCMDataExports
{
namespace Model
{

  /**
   * <p>The destinations used for data exports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-data-exports-2023-11-26/DestinationConfigurations">AWS
   * API Reference</a></p>
   */
  class DestinationConfigurations
  {
  public:
    AWS_BCMDATAEXPORTS_API DestinationConfigurations();
    AWS_BCMDATAEXPORTS_API DestinationConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API DestinationConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDATAEXPORTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that describes the destination of the data exports file.</p>
     */
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>An object that describes the destination of the data exports file.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>An object that describes the destination of the data exports file.</p>
     */
    inline void SetS3Destination(const S3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>An object that describes the destination of the data exports file.</p>
     */
    inline void SetS3Destination(S3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>An object that describes the destination of the data exports file.</p>
     */
    inline DestinationConfigurations& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>An object that describes the destination of the data exports file.</p>
     */
    inline DestinationConfigurations& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
