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
#include <aws/core/utils/DateTime.h>
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
   * <p>The ThingTypeMetadata contains additional information about the thing type
   * including: creation date and time, a value indicating whether the thing type is
   * deprecated, and a date and time when time was deprecated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingTypeMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ThingTypeMetadata
  {
  public:
    ThingTypeMetadata();
    ThingTypeMetadata(Aws::Utils::Json::JsonView jsonValue);
    ThingTypeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline bool GetDeprecated() const{ return m_deprecated; }

    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline bool DeprecatedHasBeenSet() const { return m_deprecatedHasBeenSet; }

    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline void SetDeprecated(bool value) { m_deprecatedHasBeenSet = true; m_deprecated = value; }

    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline ThingTypeMetadata& WithDeprecated(bool value) { SetDeprecated(value); return *this;}


    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::move(value); }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline ThingTypeMetadata& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline ThingTypeMetadata& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline ThingTypeMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline ThingTypeMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    bool m_deprecated;
    bool m_deprecatedHasBeenSet;

    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
