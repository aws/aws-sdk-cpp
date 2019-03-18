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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/OutputLocationRef.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Media Package Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MediaPackageGroupSettings
  {
  public:
    MediaPackageGroupSettings();
    MediaPackageGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    MediaPackageGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * MediaPackage channel destination.
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * MediaPackage channel destination.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * MediaPackage channel destination.
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * MediaPackage channel destination.
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * MediaPackage channel destination.
     */
    inline MediaPackageGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * MediaPackage channel destination.
     */
    inline MediaPackageGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}

  private:

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
