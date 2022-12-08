/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/S3Location.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the location where the select job results are
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/OutputLocation">AWS
   * API Reference</a></p>
   */
  class OutputLocation
  {
  public:
    AWS_GLACIER_API OutputLocation();
    AWS_GLACIER_API OutputLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API OutputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes an S3 location that will receive the results of the job
     * request.</p>
     */
    inline const S3Location& GetS3() const{ return m_s3; }

    /**
     * <p>Describes an S3 location that will receive the results of the job
     * request.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>Describes an S3 location that will receive the results of the job
     * request.</p>
     */
    inline void SetS3(const S3Location& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Describes an S3 location that will receive the results of the job
     * request.</p>
     */
    inline void SetS3(S3Location&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>Describes an S3 location that will receive the results of the job
     * request.</p>
     */
    inline OutputLocation& WithS3(const S3Location& value) { SetS3(value); return *this;}

    /**
     * <p>Describes an S3 location that will receive the results of the job
     * request.</p>
     */
    inline OutputLocation& WithS3(S3Location&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3Location m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
