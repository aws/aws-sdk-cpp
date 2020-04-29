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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an asset measurement property. This structure is empty. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html#measurements">Measurements</a>
   * in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Measurement">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API Measurement
  {
  public:
    Measurement();
    Measurement(Aws::Utils::Json::JsonView jsonValue);
    Measurement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
