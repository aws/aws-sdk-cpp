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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/S3Destination.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes the location of the updated firmware.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Destination">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API Destination
  {
  public:
    Destination();
    Destination(Aws::Utils::Json::JsonView jsonValue);
    Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the location in S3 of the updated firmware.</p>
     */
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>Describes the location in S3 of the updated firmware.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>Describes the location in S3 of the updated firmware.</p>
     */
    inline void SetS3Destination(const S3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>Describes the location in S3 of the updated firmware.</p>
     */
    inline void SetS3Destination(S3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>Describes the location in S3 of the updated firmware.</p>
     */
    inline Destination& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>Describes the location in S3 of the updated firmware.</p>
     */
    inline Destination& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
