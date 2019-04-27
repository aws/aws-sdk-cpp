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
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Name of the availability zone.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API AvailabilityZone
  {
  public:
    AvailabilityZone();
    AvailabilityZone(Aws::Utils::Json::JsonView jsonValue);
    AvailabilityZone& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Id for the availability zone.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Id for the availability zone.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Id for the availability zone.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Id for the availability zone.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Id for the availability zone.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Id for the availability zone.
     */
    inline AvailabilityZone& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Id for the availability zone.
     */
    inline AvailabilityZone& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Id for the availability zone.
     */
    inline AvailabilityZone& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
